// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from winterhack_interfaces:action/Locate.idl
// generated code does not contain a copyright notice

#ifndef WINTERHACK_INTERFACES__ACTION__DETAIL__LOCATE__BUILDER_HPP_
#define WINTERHACK_INTERFACES__ACTION__DETAIL__LOCATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "winterhack_interfaces/action/detail/locate__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace winterhack_interfaces
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::winterhack_interfaces::action::Locate_Goal>()
{
  return ::winterhack_interfaces::action::Locate_Goal(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace winterhack_interfaces


namespace winterhack_interfaces
{

namespace action
{

namespace builder
{

class Init_Locate_Result_message
{
public:
  explicit Init_Locate_Result_message(::winterhack_interfaces::action::Locate_Result & msg)
  : msg_(msg)
  {}
  ::winterhack_interfaces::action::Locate_Result message(::winterhack_interfaces::action::Locate_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::winterhack_interfaces::action::Locate_Result msg_;
};

class Init_Locate_Result_success
{
public:
  Init_Locate_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Locate_Result_message success(::winterhack_interfaces::action::Locate_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_Locate_Result_message(msg_);
  }

private:
  ::winterhack_interfaces::action::Locate_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::winterhack_interfaces::action::Locate_Result>()
{
  return winterhack_interfaces::action::builder::Init_Locate_Result_success();
}

}  // namespace winterhack_interfaces


namespace winterhack_interfaces
{

namespace action
{

namespace builder
{

class Init_Locate_Feedback_progress
{
public:
  explicit Init_Locate_Feedback_progress(::winterhack_interfaces::action::Locate_Feedback & msg)
  : msg_(msg)
  {}
  ::winterhack_interfaces::action::Locate_Feedback progress(::winterhack_interfaces::action::Locate_Feedback::_progress_type arg)
  {
    msg_.progress = std::move(arg);
    return std::move(msg_);
  }

private:
  ::winterhack_interfaces::action::Locate_Feedback msg_;
};

class Init_Locate_Feedback_stage
{
public:
  Init_Locate_Feedback_stage()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Locate_Feedback_progress stage(::winterhack_interfaces::action::Locate_Feedback::_stage_type arg)
  {
    msg_.stage = std::move(arg);
    return Init_Locate_Feedback_progress(msg_);
  }

private:
  ::winterhack_interfaces::action::Locate_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::winterhack_interfaces::action::Locate_Feedback>()
{
  return winterhack_interfaces::action::builder::Init_Locate_Feedback_stage();
}

}  // namespace winterhack_interfaces


namespace winterhack_interfaces
{

namespace action
{

namespace builder
{

class Init_Locate_SendGoal_Request_goal
{
public:
  explicit Init_Locate_SendGoal_Request_goal(::winterhack_interfaces::action::Locate_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::winterhack_interfaces::action::Locate_SendGoal_Request goal(::winterhack_interfaces::action::Locate_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::winterhack_interfaces::action::Locate_SendGoal_Request msg_;
};

class Init_Locate_SendGoal_Request_goal_id
{
public:
  Init_Locate_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Locate_SendGoal_Request_goal goal_id(::winterhack_interfaces::action::Locate_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Locate_SendGoal_Request_goal(msg_);
  }

private:
  ::winterhack_interfaces::action::Locate_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::winterhack_interfaces::action::Locate_SendGoal_Request>()
{
  return winterhack_interfaces::action::builder::Init_Locate_SendGoal_Request_goal_id();
}

}  // namespace winterhack_interfaces


namespace winterhack_interfaces
{

namespace action
{

namespace builder
{

class Init_Locate_SendGoal_Response_stamp
{
public:
  explicit Init_Locate_SendGoal_Response_stamp(::winterhack_interfaces::action::Locate_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::winterhack_interfaces::action::Locate_SendGoal_Response stamp(::winterhack_interfaces::action::Locate_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::winterhack_interfaces::action::Locate_SendGoal_Response msg_;
};

class Init_Locate_SendGoal_Response_accepted
{
public:
  Init_Locate_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Locate_SendGoal_Response_stamp accepted(::winterhack_interfaces::action::Locate_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Locate_SendGoal_Response_stamp(msg_);
  }

private:
  ::winterhack_interfaces::action::Locate_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::winterhack_interfaces::action::Locate_SendGoal_Response>()
{
  return winterhack_interfaces::action::builder::Init_Locate_SendGoal_Response_accepted();
}

}  // namespace winterhack_interfaces


namespace winterhack_interfaces
{

namespace action
{

namespace builder
{

class Init_Locate_GetResult_Request_goal_id
{
public:
  Init_Locate_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::winterhack_interfaces::action::Locate_GetResult_Request goal_id(::winterhack_interfaces::action::Locate_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::winterhack_interfaces::action::Locate_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::winterhack_interfaces::action::Locate_GetResult_Request>()
{
  return winterhack_interfaces::action::builder::Init_Locate_GetResult_Request_goal_id();
}

}  // namespace winterhack_interfaces


namespace winterhack_interfaces
{

namespace action
{

namespace builder
{

class Init_Locate_GetResult_Response_result
{
public:
  explicit Init_Locate_GetResult_Response_result(::winterhack_interfaces::action::Locate_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::winterhack_interfaces::action::Locate_GetResult_Response result(::winterhack_interfaces::action::Locate_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::winterhack_interfaces::action::Locate_GetResult_Response msg_;
};

class Init_Locate_GetResult_Response_status
{
public:
  Init_Locate_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Locate_GetResult_Response_result status(::winterhack_interfaces::action::Locate_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Locate_GetResult_Response_result(msg_);
  }

private:
  ::winterhack_interfaces::action::Locate_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::winterhack_interfaces::action::Locate_GetResult_Response>()
{
  return winterhack_interfaces::action::builder::Init_Locate_GetResult_Response_status();
}

}  // namespace winterhack_interfaces


namespace winterhack_interfaces
{

namespace action
{

namespace builder
{

class Init_Locate_FeedbackMessage_feedback
{
public:
  explicit Init_Locate_FeedbackMessage_feedback(::winterhack_interfaces::action::Locate_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::winterhack_interfaces::action::Locate_FeedbackMessage feedback(::winterhack_interfaces::action::Locate_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::winterhack_interfaces::action::Locate_FeedbackMessage msg_;
};

class Init_Locate_FeedbackMessage_goal_id
{
public:
  Init_Locate_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Locate_FeedbackMessage_feedback goal_id(::winterhack_interfaces::action::Locate_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Locate_FeedbackMessage_feedback(msg_);
  }

private:
  ::winterhack_interfaces::action::Locate_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::winterhack_interfaces::action::Locate_FeedbackMessage>()
{
  return winterhack_interfaces::action::builder::Init_Locate_FeedbackMessage_goal_id();
}

}  // namespace winterhack_interfaces

#endif  // WINTERHACK_INTERFACES__ACTION__DETAIL__LOCATE__BUILDER_HPP_
