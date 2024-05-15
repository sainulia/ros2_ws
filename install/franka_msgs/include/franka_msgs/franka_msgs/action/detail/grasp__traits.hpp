// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from franka_msgs:action/Grasp.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_MSGS__ACTION__DETAIL__GRASP__TRAITS_HPP_
#define FRANKA_MSGS__ACTION__DETAIL__GRASP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "franka_msgs/action/detail/grasp__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'epsilon'
#include "franka_msgs/msg/detail/grasp_epsilon__traits.hpp"

namespace franka_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const Grasp_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: width
  {
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << ", ";
  }

  // member: epsilon
  {
    out << "epsilon: ";
    to_flow_style_yaml(msg.epsilon, out);
    out << ", ";
  }

  // member: speed
  {
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << ", ";
  }

  // member: force
  {
    out << "force: ";
    rosidl_generator_traits::value_to_yaml(msg.force, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Grasp_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << "\n";
  }

  // member: epsilon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "epsilon:\n";
    to_block_style_yaml(msg.epsilon, out, indentation + 2);
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << "\n";
  }

  // member: force
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "force: ";
    rosidl_generator_traits::value_to_yaml(msg.force, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Grasp_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace franka_msgs

namespace rosidl_generator_traits
{

[[deprecated("use franka_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const franka_msgs::action::Grasp_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  franka_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use franka_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const franka_msgs::action::Grasp_Goal & msg)
{
  return franka_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<franka_msgs::action::Grasp_Goal>()
{
  return "franka_msgs::action::Grasp_Goal";
}

template<>
inline const char * name<franka_msgs::action::Grasp_Goal>()
{
  return "franka_msgs/action/Grasp_Goal";
}

template<>
struct has_fixed_size<franka_msgs::action::Grasp_Goal>
  : std::integral_constant<bool, has_fixed_size<franka_msgs::msg::GraspEpsilon>::value> {};

template<>
struct has_bounded_size<franka_msgs::action::Grasp_Goal>
  : std::integral_constant<bool, has_bounded_size<franka_msgs::msg::GraspEpsilon>::value> {};

template<>
struct is_message<franka_msgs::action::Grasp_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace franka_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const Grasp_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: error
  {
    out << "error: ";
    rosidl_generator_traits::value_to_yaml(msg.error, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Grasp_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error: ";
    rosidl_generator_traits::value_to_yaml(msg.error, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Grasp_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace franka_msgs

namespace rosidl_generator_traits
{

[[deprecated("use franka_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const franka_msgs::action::Grasp_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  franka_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use franka_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const franka_msgs::action::Grasp_Result & msg)
{
  return franka_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<franka_msgs::action::Grasp_Result>()
{
  return "franka_msgs::action::Grasp_Result";
}

template<>
inline const char * name<franka_msgs::action::Grasp_Result>()
{
  return "franka_msgs/action/Grasp_Result";
}

template<>
struct has_fixed_size<franka_msgs::action::Grasp_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<franka_msgs::action::Grasp_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<franka_msgs::action::Grasp_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace franka_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const Grasp_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: current_width
  {
    out << "current_width: ";
    rosidl_generator_traits::value_to_yaml(msg.current_width, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Grasp_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: current_width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_width: ";
    rosidl_generator_traits::value_to_yaml(msg.current_width, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Grasp_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace franka_msgs

namespace rosidl_generator_traits
{

[[deprecated("use franka_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const franka_msgs::action::Grasp_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  franka_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use franka_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const franka_msgs::action::Grasp_Feedback & msg)
{
  return franka_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<franka_msgs::action::Grasp_Feedback>()
{
  return "franka_msgs::action::Grasp_Feedback";
}

template<>
inline const char * name<franka_msgs::action::Grasp_Feedback>()
{
  return "franka_msgs/action/Grasp_Feedback";
}

template<>
struct has_fixed_size<franka_msgs::action::Grasp_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<franka_msgs::action::Grasp_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<franka_msgs::action::Grasp_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "franka_msgs/action/detail/grasp__traits.hpp"

namespace franka_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const Grasp_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Grasp_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Grasp_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace franka_msgs

namespace rosidl_generator_traits
{

[[deprecated("use franka_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const franka_msgs::action::Grasp_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  franka_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use franka_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const franka_msgs::action::Grasp_SendGoal_Request & msg)
{
  return franka_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<franka_msgs::action::Grasp_SendGoal_Request>()
{
  return "franka_msgs::action::Grasp_SendGoal_Request";
}

template<>
inline const char * name<franka_msgs::action::Grasp_SendGoal_Request>()
{
  return "franka_msgs/action/Grasp_SendGoal_Request";
}

template<>
struct has_fixed_size<franka_msgs::action::Grasp_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<franka_msgs::action::Grasp_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<franka_msgs::action::Grasp_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<franka_msgs::action::Grasp_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<franka_msgs::action::Grasp_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace franka_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const Grasp_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Grasp_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Grasp_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace franka_msgs

namespace rosidl_generator_traits
{

[[deprecated("use franka_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const franka_msgs::action::Grasp_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  franka_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use franka_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const franka_msgs::action::Grasp_SendGoal_Response & msg)
{
  return franka_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<franka_msgs::action::Grasp_SendGoal_Response>()
{
  return "franka_msgs::action::Grasp_SendGoal_Response";
}

template<>
inline const char * name<franka_msgs::action::Grasp_SendGoal_Response>()
{
  return "franka_msgs/action/Grasp_SendGoal_Response";
}

template<>
struct has_fixed_size<franka_msgs::action::Grasp_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<franka_msgs::action::Grasp_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<franka_msgs::action::Grasp_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<franka_msgs::action::Grasp_SendGoal>()
{
  return "franka_msgs::action::Grasp_SendGoal";
}

template<>
inline const char * name<franka_msgs::action::Grasp_SendGoal>()
{
  return "franka_msgs/action/Grasp_SendGoal";
}

template<>
struct has_fixed_size<franka_msgs::action::Grasp_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<franka_msgs::action::Grasp_SendGoal_Request>::value &&
    has_fixed_size<franka_msgs::action::Grasp_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<franka_msgs::action::Grasp_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<franka_msgs::action::Grasp_SendGoal_Request>::value &&
    has_bounded_size<franka_msgs::action::Grasp_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<franka_msgs::action::Grasp_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<franka_msgs::action::Grasp_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<franka_msgs::action::Grasp_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace franka_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const Grasp_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Grasp_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Grasp_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace franka_msgs

namespace rosidl_generator_traits
{

[[deprecated("use franka_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const franka_msgs::action::Grasp_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  franka_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use franka_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const franka_msgs::action::Grasp_GetResult_Request & msg)
{
  return franka_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<franka_msgs::action::Grasp_GetResult_Request>()
{
  return "franka_msgs::action::Grasp_GetResult_Request";
}

template<>
inline const char * name<franka_msgs::action::Grasp_GetResult_Request>()
{
  return "franka_msgs/action/Grasp_GetResult_Request";
}

template<>
struct has_fixed_size<franka_msgs::action::Grasp_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<franka_msgs::action::Grasp_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<franka_msgs::action::Grasp_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "franka_msgs/action/detail/grasp__traits.hpp"

namespace franka_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const Grasp_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Grasp_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Grasp_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace franka_msgs

namespace rosidl_generator_traits
{

[[deprecated("use franka_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const franka_msgs::action::Grasp_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  franka_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use franka_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const franka_msgs::action::Grasp_GetResult_Response & msg)
{
  return franka_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<franka_msgs::action::Grasp_GetResult_Response>()
{
  return "franka_msgs::action::Grasp_GetResult_Response";
}

template<>
inline const char * name<franka_msgs::action::Grasp_GetResult_Response>()
{
  return "franka_msgs/action/Grasp_GetResult_Response";
}

template<>
struct has_fixed_size<franka_msgs::action::Grasp_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<franka_msgs::action::Grasp_Result>::value> {};

template<>
struct has_bounded_size<franka_msgs::action::Grasp_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<franka_msgs::action::Grasp_Result>::value> {};

template<>
struct is_message<franka_msgs::action::Grasp_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<franka_msgs::action::Grasp_GetResult>()
{
  return "franka_msgs::action::Grasp_GetResult";
}

template<>
inline const char * name<franka_msgs::action::Grasp_GetResult>()
{
  return "franka_msgs/action/Grasp_GetResult";
}

template<>
struct has_fixed_size<franka_msgs::action::Grasp_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<franka_msgs::action::Grasp_GetResult_Request>::value &&
    has_fixed_size<franka_msgs::action::Grasp_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<franka_msgs::action::Grasp_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<franka_msgs::action::Grasp_GetResult_Request>::value &&
    has_bounded_size<franka_msgs::action::Grasp_GetResult_Response>::value
  >
{
};

template<>
struct is_service<franka_msgs::action::Grasp_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<franka_msgs::action::Grasp_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<franka_msgs::action::Grasp_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "franka_msgs/action/detail/grasp__traits.hpp"

namespace franka_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const Grasp_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Grasp_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Grasp_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace franka_msgs

namespace rosidl_generator_traits
{

[[deprecated("use franka_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const franka_msgs::action::Grasp_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  franka_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use franka_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const franka_msgs::action::Grasp_FeedbackMessage & msg)
{
  return franka_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<franka_msgs::action::Grasp_FeedbackMessage>()
{
  return "franka_msgs::action::Grasp_FeedbackMessage";
}

template<>
inline const char * name<franka_msgs::action::Grasp_FeedbackMessage>()
{
  return "franka_msgs/action/Grasp_FeedbackMessage";
}

template<>
struct has_fixed_size<franka_msgs::action::Grasp_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<franka_msgs::action::Grasp_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<franka_msgs::action::Grasp_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<franka_msgs::action::Grasp_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<franka_msgs::action::Grasp_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<franka_msgs::action::Grasp>
  : std::true_type
{
};

template<>
struct is_action_goal<franka_msgs::action::Grasp_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<franka_msgs::action::Grasp_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<franka_msgs::action::Grasp_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // FRANKA_MSGS__ACTION__DETAIL__GRASP__TRAITS_HPP_
