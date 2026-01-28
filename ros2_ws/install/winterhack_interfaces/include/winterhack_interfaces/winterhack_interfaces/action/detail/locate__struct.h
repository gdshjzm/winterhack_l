// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from winterhack_interfaces:action/Locate.idl
// generated code does not contain a copyright notice

#ifndef WINTERHACK_INTERFACES__ACTION__DETAIL__LOCATE__STRUCT_H_
#define WINTERHACK_INTERFACES__ACTION__DETAIL__LOCATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/Locate in the package winterhack_interfaces.
typedef struct winterhack_interfaces__action__Locate_Goal
{
  uint8_t structure_needs_at_least_one_member;
} winterhack_interfaces__action__Locate_Goal;

// Struct for a sequence of winterhack_interfaces__action__Locate_Goal.
typedef struct winterhack_interfaces__action__Locate_Goal__Sequence
{
  winterhack_interfaces__action__Locate_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} winterhack_interfaces__action__Locate_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/Locate in the package winterhack_interfaces.
typedef struct winterhack_interfaces__action__Locate_Result
{
  bool success;
  rosidl_runtime_c__String message;
} winterhack_interfaces__action__Locate_Result;

// Struct for a sequence of winterhack_interfaces__action__Locate_Result.
typedef struct winterhack_interfaces__action__Locate_Result__Sequence
{
  winterhack_interfaces__action__Locate_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} winterhack_interfaces__action__Locate_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stage'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/Locate in the package winterhack_interfaces.
typedef struct winterhack_interfaces__action__Locate_Feedback
{
  rosidl_runtime_c__String stage;
  float progress;
} winterhack_interfaces__action__Locate_Feedback;

// Struct for a sequence of winterhack_interfaces__action__Locate_Feedback.
typedef struct winterhack_interfaces__action__Locate_Feedback__Sequence
{
  winterhack_interfaces__action__Locate_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} winterhack_interfaces__action__Locate_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "winterhack_interfaces/action/detail/locate__struct.h"

/// Struct defined in action/Locate in the package winterhack_interfaces.
typedef struct winterhack_interfaces__action__Locate_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  winterhack_interfaces__action__Locate_Goal goal;
} winterhack_interfaces__action__Locate_SendGoal_Request;

// Struct for a sequence of winterhack_interfaces__action__Locate_SendGoal_Request.
typedef struct winterhack_interfaces__action__Locate_SendGoal_Request__Sequence
{
  winterhack_interfaces__action__Locate_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} winterhack_interfaces__action__Locate_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Locate in the package winterhack_interfaces.
typedef struct winterhack_interfaces__action__Locate_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} winterhack_interfaces__action__Locate_SendGoal_Response;

// Struct for a sequence of winterhack_interfaces__action__Locate_SendGoal_Response.
typedef struct winterhack_interfaces__action__Locate_SendGoal_Response__Sequence
{
  winterhack_interfaces__action__Locate_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} winterhack_interfaces__action__Locate_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Locate in the package winterhack_interfaces.
typedef struct winterhack_interfaces__action__Locate_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} winterhack_interfaces__action__Locate_GetResult_Request;

// Struct for a sequence of winterhack_interfaces__action__Locate_GetResult_Request.
typedef struct winterhack_interfaces__action__Locate_GetResult_Request__Sequence
{
  winterhack_interfaces__action__Locate_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} winterhack_interfaces__action__Locate_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "winterhack_interfaces/action/detail/locate__struct.h"

/// Struct defined in action/Locate in the package winterhack_interfaces.
typedef struct winterhack_interfaces__action__Locate_GetResult_Response
{
  int8_t status;
  winterhack_interfaces__action__Locate_Result result;
} winterhack_interfaces__action__Locate_GetResult_Response;

// Struct for a sequence of winterhack_interfaces__action__Locate_GetResult_Response.
typedef struct winterhack_interfaces__action__Locate_GetResult_Response__Sequence
{
  winterhack_interfaces__action__Locate_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} winterhack_interfaces__action__Locate_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "winterhack_interfaces/action/detail/locate__struct.h"

/// Struct defined in action/Locate in the package winterhack_interfaces.
typedef struct winterhack_interfaces__action__Locate_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  winterhack_interfaces__action__Locate_Feedback feedback;
} winterhack_interfaces__action__Locate_FeedbackMessage;

// Struct for a sequence of winterhack_interfaces__action__Locate_FeedbackMessage.
typedef struct winterhack_interfaces__action__Locate_FeedbackMessage__Sequence
{
  winterhack_interfaces__action__Locate_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} winterhack_interfaces__action__Locate_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WINTERHACK_INTERFACES__ACTION__DETAIL__LOCATE__STRUCT_H_
