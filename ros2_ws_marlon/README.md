# Team L - WinterHack Contributions & Solution

This document details the contributions and modifications made by **Team L** to the WinterHack ROS2 workspace. Our solution introduces robust mission logic, new operating modes, and optimization for both autonomous and manual challenge scenarios.

## 1. Overview of Contributions

We have significantly enhanced the `mission_runner` node to support structured challenge runs. The key improvements include:

- **New Mission Modes**: Introduced `AUTO` and `MANUAL_KNOWN_TARGETS` modes to replace the generic patrol/coordinate logic.
- **Sequential Task Execution**: Implemented strict color sequencing (e.g., `YELLOW` -> `BLUE` -> `RED`) to prevent false positives and ensure the correct order of operations.
- **Smart Navigation Interrupt**: In manual mode, if the robot detects the target color while navigating to a waypoint, it immediately cancels navigation and switches to the localization phase, saving valuable time.
- **Color Priority Sync**: Added logic to synchronize the active target color across the `locate` and `pick` nodes.

## 2. Mission Modes

### 2.1 AUTO Mode (`mission_mode: auto`)
In this mode, the robot autonomously explores the arena to find targets in a specific order.

- **Workflow**:
  1. **Patrol**: Robot follows a set of waypoints.
  2. **Detection**: Listens for the *current* target color in the sequence. Detections of non-target colors are ignored.
  3. **Locate & Pick**: Once the correct color is detected, the robot stops, aligns (Locate), and performs the pickup (Pick).
  4. **Drop**: Returns home to drop the object.
  5. **Advance**: Switches to the next color in the sequence and resumes patrol.

### 2.2 MANUAL_KNOWN_TARGETS Mode (`mission_mode: manual_known_targets`)
This mode is optimized for runs where target locations are approximately known (e.g., from mapping or visual estimation).

- **Workflow**:
  1. **Navigate**: Robot moves towards a specific (x, y) coordinate associated with the current target color.
  2. **Early Detection**: **[Optimization]** If the target color is detected *during* navigation, the robot cancels the move command and immediately starts the `LOCATE` routine.
  3. **Arrival**: If no color is detected by the time it reaches the coordinate, it starts the `LOCATE` routine at the destination.
  4. **Sequence**: After a successful drop, it proceeds to the next coordinate-color pair.

## 3. Configuration Parameters

We introduced several new parameters to `mission_runner` to support these features:

| Parameter | Type | Default | Description |
|-----------|------|---------|-------------|
| `mission_mode` | string | `'auto'` | Operating mode: `'auto'` or `'manual_known_targets'`. |
| `mission_color_sequence` | string array | `['YELLOW', 'BLUE', 'RED']` | The strict order of colors to retrieve. |
| `manual_targets` | double array | `[0.0, ...]` | Flattened array `[x1, y1, x2, y2, x3, y3]` corresponding to the color sequence. |
| `sync_color_priority` | bool | `true` | Whether to attempt syncing the target color priority to sub-nodes. |
| `target_pick_count` | int | `2` | Number of items to retrieve (default updated to 2). |

## 4. Logic Improvements

### Strict Color Filtering
The original logic allowed stopping for any detected color. Our improved logic checks against the `mission_color_sequence`.
```python
# Logic snippet
if detected != current_target:
    self.get_logger().info(f"Skipping detection '{detected}'; current target is '{current_target}'")
    return
```

### Navigation Interrupt (Manual Mode)
To optimize speed, we added a check during the `MANUAL_NAV_TO_TARGET` phase:
```python
if self._state == MissionPhase.MANUAL_NAV_TO_TARGET:
    # If target detected while moving, stop and locate immediately
    self.get_logger().info("Qualifying detection while navigating; canceling nav and switching to LOCATE.")
    self._cancel_goal_handle(self._nav_goal_handle)
    self._set_state(MissionPhase.LOCATE)
```

## 5. Running the Solution

To run the mission with Team L's logic:

**Auto Mode (Default):**
```bash
ros2 run winterhack mission_runner --ros-args -p mission_mode:=auto
```

**Manual Mode (Example):**
```bash
ros2 run winterhack mission_runner --ros-args \
    -p mission_mode:=manual_known_targets \
    -p manual_targets:=[2.5, 1.0, -1.5, 2.0, 0.5, -0.5]
```

*Note: The `manual_targets` list must match the length of `mission_color_sequence` (2 coordinates per color).*
