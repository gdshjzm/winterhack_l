// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from winterhack_interfaces:action/Locate.idl
// generated code does not contain a copyright notice

#ifndef WINTERHACK_INTERFACES__ACTION__DETAIL__LOCATE__FUNCTIONS_H_
#define WINTERHACK_INTERFACES__ACTION__DETAIL__LOCATE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "winterhack_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "winterhack_interfaces/action/detail/locate__struct.h"

/// Initialize action/Locate message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * winterhack_interfaces__action__Locate_Goal
 * )) before or use
 * winterhack_interfaces__action__Locate_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
bool
winterhack_interfaces__action__Locate_Goal__init(winterhack_interfaces__action__Locate_Goal * msg);

/// Finalize action/Locate message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
void
winterhack_interfaces__action__Locate_Goal__fini(winterhack_interfaces__action__Locate_Goal * msg);

/// Create action/Locate message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * winterhack_interfaces__action__Locate_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
winterhack_interfaces__action__Locate_Goal *
winterhack_interfaces__action__Locate_Goal__create();

/// Destroy action/Locate message.
/**
 * It calls
 * winterhack_interfaces__action__Locate_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
void
winterhack_interfaces__action__Locate_Goal__destroy(winterhack_interfaces__action__Locate_Goal * msg);

/// Check for action/Locate message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
bool
winterhack_interfaces__action__Locate_Goal__are_equal(const winterhack_interfaces__action__Locate_Goal * lhs, const winterhack_interfaces__action__Locate_Goal * rhs);

/// Copy a action/Locate message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
bool
winterhack_interfaces__action__Locate_Goal__copy(
  const winterhack_interfaces__action__Locate_Goal * input,
  winterhack_interfaces__action__Locate_Goal * output);

/// Initialize array of action/Locate messages.
/**
 * It allocates the memory for the number of elements and calls
 * winterhack_interfaces__action__Locate_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
bool
winterhack_interfaces__action__Locate_Goal__Sequence__init(winterhack_interfaces__action__Locate_Goal__Sequence * array, size_t size);

/// Finalize array of action/Locate messages.
/**
 * It calls
 * winterhack_interfaces__action__Locate_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
void
winterhack_interfaces__action__Locate_Goal__Sequence__fini(winterhack_interfaces__action__Locate_Goal__Sequence * array);

/// Create array of action/Locate messages.
/**
 * It allocates the memory for the array and calls
 * winterhack_interfaces__action__Locate_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
winterhack_interfaces__action__Locate_Goal__Sequence *
winterhack_interfaces__action__Locate_Goal__Sequence__create(size_t size);

/// Destroy array of action/Locate messages.
/**
 * It calls
 * winterhack_interfaces__action__Locate_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
void
winterhack_interfaces__action__Locate_Goal__Sequence__destroy(winterhack_interfaces__action__Locate_Goal__Sequence * array);

/// Check for action/Locate message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
bool
winterhack_interfaces__action__Locate_Goal__Sequence__are_equal(const winterhack_interfaces__action__Locate_Goal__Sequence * lhs, const winterhack_interfaces__action__Locate_Goal__Sequence * rhs);

/// Copy an array of action/Locate messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
bool
winterhack_interfaces__action__Locate_Goal__Sequence__copy(
  const winterhack_interfaces__action__Locate_Goal__Sequence * input,
  winterhack_interfaces__action__Locate_Goal__Sequence * output);

/// Initialize action/Locate message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * winterhack_interfaces__action__Locate_Result
 * )) before or use
 * winterhack_interfaces__action__Locate_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
bool
winterhack_interfaces__action__Locate_Result__init(winterhack_interfaces__action__Locate_Result * msg);

/// Finalize action/Locate message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
void
winterhack_interfaces__action__Locate_Result__fini(winterhack_interfaces__action__Locate_Result * msg);

/// Create action/Locate message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * winterhack_interfaces__action__Locate_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
winterhack_interfaces__action__Locate_Result *
winterhack_interfaces__action__Locate_Result__create();

/// Destroy action/Locate message.
/**
 * It calls
 * winterhack_interfaces__action__Locate_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
void
winterhack_interfaces__action__Locate_Result__destroy(winterhack_interfaces__action__Locate_Result * msg);

/// Check for action/Locate message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
bool
winterhack_interfaces__action__Locate_Result__are_equal(const winterhack_interfaces__action__Locate_Result * lhs, const winterhack_interfaces__action__Locate_Result * rhs);

/// Copy a action/Locate message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
bool
winterhack_interfaces__action__Locate_Result__copy(
  const winterhack_interfaces__action__Locate_Result * input,
  winterhack_interfaces__action__Locate_Result * output);

/// Initialize array of action/Locate messages.
/**
 * It allocates the memory for the number of elements and calls
 * winterhack_interfaces__action__Locate_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
bool
winterhack_interfaces__action__Locate_Result__Sequence__init(winterhack_interfaces__action__Locate_Result__Sequence * array, size_t size);

/// Finalize array of action/Locate messages.
/**
 * It calls
 * winterhack_interfaces__action__Locate_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
void
winterhack_interfaces__action__Locate_Result__Sequence__fini(winterhack_interfaces__action__Locate_Result__Sequence * array);

/// Create array of action/Locate messages.
/**
 * It allocates the memory for the array and calls
 * winterhack_interfaces__action__Locate_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
winterhack_interfaces__action__Locate_Result__Sequence *
winterhack_interfaces__action__Locate_Result__Sequence__create(size_t size);

/// Destroy array of action/Locate messages.
/**
 * It calls
 * winterhack_interfaces__action__Locate_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
void
winterhack_interfaces__action__Locate_Result__Sequence__destroy(winterhack_interfaces__action__Locate_Result__Sequence * array);

/// Check for action/Locate message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
bool
winterhack_interfaces__action__Locate_Result__Sequence__are_equal(const winterhack_interfaces__action__Locate_Result__Sequence * lhs, const winterhack_interfaces__action__Locate_Result__Sequence * rhs);

/// Copy an array of action/Locate messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
bool
winterhack_interfaces__action__Locate_Result__Sequence__copy(
  const winterhack_interfaces__action__Locate_Result__Sequence * input,
  winterhack_interfaces__action__Locate_Result__Sequence * output);

/// Initialize action/Locate message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * winterhack_interfaces__action__Locate_Feedback
 * )) before or use
 * winterhack_interfaces__action__Locate_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
bool
winterhack_interfaces__action__Locate_Feedback__init(winterhack_interfaces__action__Locate_Feedback * msg);

/// Finalize action/Locate message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
void
winterhack_interfaces__action__Locate_Feedback__fini(winterhack_interfaces__action__Locate_Feedback * msg);

/// Create action/Locate message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * winterhack_interfaces__action__Locate_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
winterhack_interfaces__action__Locate_Feedback *
winterhack_interfaces__action__Locate_Feedback__create();

/// Destroy action/Locate message.
/**
 * It calls
 * winterhack_interfaces__action__Locate_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
void
winterhack_interfaces__action__Locate_Feedback__destroy(winterhack_interfaces__action__Locate_Feedback * msg);

/// Check for action/Locate message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
bool
winterhack_interfaces__action__Locate_Feedback__are_equal(const winterhack_interfaces__action__Locate_Feedback * lhs, const winterhack_interfaces__action__Locate_Feedback * rhs);

/// Copy a action/Locate message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
bool
winterhack_interfaces__action__Locate_Feedback__copy(
  const winterhack_interfaces__action__Locate_Feedback * input,
  winterhack_interfaces__action__Locate_Feedback * output);

/// Initialize array of action/Locate messages.
/**
 * It allocates the memory for the number of elements and calls
 * winterhack_interfaces__action__Locate_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
bool
winterhack_interfaces__action__Locate_Feedback__Sequence__init(winterhack_interfaces__action__Locate_Feedback__Sequence * array, size_t size);

/// Finalize array of action/Locate messages.
/**
 * It calls
 * winterhack_interfaces__action__Locate_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
void
winterhack_interfaces__action__Locate_Feedback__Sequence__fini(winterhack_interfaces__action__Locate_Feedback__Sequence * array);

/// Create array of action/Locate messages.
/**
 * It allocates the memory for the array and calls
 * winterhack_interfaces__action__Locate_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
winterhack_interfaces__action__Locate_Feedback__Sequence *
winterhack_interfaces__action__Locate_Feedback__Sequence__create(size_t size);

/// Destroy array of action/Locate messages.
/**
 * It calls
 * winterhack_interfaces__action__Locate_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
void
winterhack_interfaces__action__Locate_Feedback__Sequence__destroy(winterhack_interfaces__action__Locate_Feedback__Sequence * array);

/// Check for action/Locate message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
bool
winterhack_interfaces__action__Locate_Feedback__Sequence__are_equal(const winterhack_interfaces__action__Locate_Feedback__Sequence * lhs, const winterhack_interfaces__action__Locate_Feedback__Sequence * rhs);

/// Copy an array of action/Locate messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
bool
winterhack_interfaces__action__Locate_Feedback__Sequence__copy(
  const winterhack_interfaces__action__Locate_Feedback__Sequence * input,
  winterhack_interfaces__action__Locate_Feedback__Sequence * output);

/// Initialize action/Locate message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * winterhack_interfaces__action__Locate_SendGoal_Request
 * )) before or use
 * winterhack_interfaces__action__Locate_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
bool
winterhack_interfaces__action__Locate_SendGoal_Request__init(winterhack_interfaces__action__Locate_SendGoal_Request * msg);

/// Finalize action/Locate message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
void
winterhack_interfaces__action__Locate_SendGoal_Request__fini(winterhack_interfaces__action__Locate_SendGoal_Request * msg);

/// Create action/Locate message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * winterhack_interfaces__action__Locate_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
winterhack_interfaces__action__Locate_SendGoal_Request *
winterhack_interfaces__action__Locate_SendGoal_Request__create();

/// Destroy action/Locate message.
/**
 * It calls
 * winterhack_interfaces__action__Locate_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
void
winterhack_interfaces__action__Locate_SendGoal_Request__destroy(winterhack_interfaces__action__Locate_SendGoal_Request * msg);

/// Check for action/Locate message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
bool
winterhack_interfaces__action__Locate_SendGoal_Request__are_equal(const winterhack_interfaces__action__Locate_SendGoal_Request * lhs, const winterhack_interfaces__action__Locate_SendGoal_Request * rhs);

/// Copy a action/Locate message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
bool
winterhack_interfaces__action__Locate_SendGoal_Request__copy(
  const winterhack_interfaces__action__Locate_SendGoal_Request * input,
  winterhack_interfaces__action__Locate_SendGoal_Request * output);

/// Initialize array of action/Locate messages.
/**
 * It allocates the memory for the number of elements and calls
 * winterhack_interfaces__action__Locate_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
bool
winterhack_interfaces__action__Locate_SendGoal_Request__Sequence__init(winterhack_interfaces__action__Locate_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/Locate messages.
/**
 * It calls
 * winterhack_interfaces__action__Locate_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
void
winterhack_interfaces__action__Locate_SendGoal_Request__Sequence__fini(winterhack_interfaces__action__Locate_SendGoal_Request__Sequence * array);

/// Create array of action/Locate messages.
/**
 * It allocates the memory for the array and calls
 * winterhack_interfaces__action__Locate_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
winterhack_interfaces__action__Locate_SendGoal_Request__Sequence *
winterhack_interfaces__action__Locate_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/Locate messages.
/**
 * It calls
 * winterhack_interfaces__action__Locate_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
void
winterhack_interfaces__action__Locate_SendGoal_Request__Sequence__destroy(winterhack_interfaces__action__Locate_SendGoal_Request__Sequence * array);

/// Check for action/Locate message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
bool
winterhack_interfaces__action__Locate_SendGoal_Request__Sequence__are_equal(const winterhack_interfaces__action__Locate_SendGoal_Request__Sequence * lhs, const winterhack_interfaces__action__Locate_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/Locate messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
bool
winterhack_interfaces__action__Locate_SendGoal_Request__Sequence__copy(
  const winterhack_interfaces__action__Locate_SendGoal_Request__Sequence * input,
  winterhack_interfaces__action__Locate_SendGoal_Request__Sequence * output);

/// Initialize action/Locate message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * winterhack_interfaces__action__Locate_SendGoal_Response
 * )) before or use
 * winterhack_interfaces__action__Locate_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
bool
winterhack_interfaces__action__Locate_SendGoal_Response__init(winterhack_interfaces__action__Locate_SendGoal_Response * msg);

/// Finalize action/Locate message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
void
winterhack_interfaces__action__Locate_SendGoal_Response__fini(winterhack_interfaces__action__Locate_SendGoal_Response * msg);

/// Create action/Locate message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * winterhack_interfaces__action__Locate_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
winterhack_interfaces__action__Locate_SendGoal_Response *
winterhack_interfaces__action__Locate_SendGoal_Response__create();

/// Destroy action/Locate message.
/**
 * It calls
 * winterhack_interfaces__action__Locate_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
void
winterhack_interfaces__action__Locate_SendGoal_Response__destroy(winterhack_interfaces__action__Locate_SendGoal_Response * msg);

/// Check for action/Locate message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
bool
winterhack_interfaces__action__Locate_SendGoal_Response__are_equal(const winterhack_interfaces__action__Locate_SendGoal_Response * lhs, const winterhack_interfaces__action__Locate_SendGoal_Response * rhs);

/// Copy a action/Locate message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
bool
winterhack_interfaces__action__Locate_SendGoal_Response__copy(
  const winterhack_interfaces__action__Locate_SendGoal_Response * input,
  winterhack_interfaces__action__Locate_SendGoal_Response * output);

/// Initialize array of action/Locate messages.
/**
 * It allocates the memory for the number of elements and calls
 * winterhack_interfaces__action__Locate_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
bool
winterhack_interfaces__action__Locate_SendGoal_Response__Sequence__init(winterhack_interfaces__action__Locate_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/Locate messages.
/**
 * It calls
 * winterhack_interfaces__action__Locate_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
void
winterhack_interfaces__action__Locate_SendGoal_Response__Sequence__fini(winterhack_interfaces__action__Locate_SendGoal_Response__Sequence * array);

/// Create array of action/Locate messages.
/**
 * It allocates the memory for the array and calls
 * winterhack_interfaces__action__Locate_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
winterhack_interfaces__action__Locate_SendGoal_Response__Sequence *
winterhack_interfaces__action__Locate_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/Locate messages.
/**
 * It calls
 * winterhack_interfaces__action__Locate_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
void
winterhack_interfaces__action__Locate_SendGoal_Response__Sequence__destroy(winterhack_interfaces__action__Locate_SendGoal_Response__Sequence * array);

/// Check for action/Locate message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
bool
winterhack_interfaces__action__Locate_SendGoal_Response__Sequence__are_equal(const winterhack_interfaces__action__Locate_SendGoal_Response__Sequence * lhs, const winterhack_interfaces__action__Locate_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/Locate messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
bool
winterhack_interfaces__action__Locate_SendGoal_Response__Sequence__copy(
  const winterhack_interfaces__action__Locate_SendGoal_Response__Sequence * input,
  winterhack_interfaces__action__Locate_SendGoal_Response__Sequence * output);

/// Initialize action/Locate message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * winterhack_interfaces__action__Locate_GetResult_Request
 * )) before or use
 * winterhack_interfaces__action__Locate_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
bool
winterhack_interfaces__action__Locate_GetResult_Request__init(winterhack_interfaces__action__Locate_GetResult_Request * msg);

/// Finalize action/Locate message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
void
winterhack_interfaces__action__Locate_GetResult_Request__fini(winterhack_interfaces__action__Locate_GetResult_Request * msg);

/// Create action/Locate message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * winterhack_interfaces__action__Locate_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
winterhack_interfaces__action__Locate_GetResult_Request *
winterhack_interfaces__action__Locate_GetResult_Request__create();

/// Destroy action/Locate message.
/**
 * It calls
 * winterhack_interfaces__action__Locate_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
void
winterhack_interfaces__action__Locate_GetResult_Request__destroy(winterhack_interfaces__action__Locate_GetResult_Request * msg);

/// Check for action/Locate message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
bool
winterhack_interfaces__action__Locate_GetResult_Request__are_equal(const winterhack_interfaces__action__Locate_GetResult_Request * lhs, const winterhack_interfaces__action__Locate_GetResult_Request * rhs);

/// Copy a action/Locate message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
bool
winterhack_interfaces__action__Locate_GetResult_Request__copy(
  const winterhack_interfaces__action__Locate_GetResult_Request * input,
  winterhack_interfaces__action__Locate_GetResult_Request * output);

/// Initialize array of action/Locate messages.
/**
 * It allocates the memory for the number of elements and calls
 * winterhack_interfaces__action__Locate_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
bool
winterhack_interfaces__action__Locate_GetResult_Request__Sequence__init(winterhack_interfaces__action__Locate_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/Locate messages.
/**
 * It calls
 * winterhack_interfaces__action__Locate_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
void
winterhack_interfaces__action__Locate_GetResult_Request__Sequence__fini(winterhack_interfaces__action__Locate_GetResult_Request__Sequence * array);

/// Create array of action/Locate messages.
/**
 * It allocates the memory for the array and calls
 * winterhack_interfaces__action__Locate_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
winterhack_interfaces__action__Locate_GetResult_Request__Sequence *
winterhack_interfaces__action__Locate_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/Locate messages.
/**
 * It calls
 * winterhack_interfaces__action__Locate_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
void
winterhack_interfaces__action__Locate_GetResult_Request__Sequence__destroy(winterhack_interfaces__action__Locate_GetResult_Request__Sequence * array);

/// Check for action/Locate message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
bool
winterhack_interfaces__action__Locate_GetResult_Request__Sequence__are_equal(const winterhack_interfaces__action__Locate_GetResult_Request__Sequence * lhs, const winterhack_interfaces__action__Locate_GetResult_Request__Sequence * rhs);

/// Copy an array of action/Locate messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
bool
winterhack_interfaces__action__Locate_GetResult_Request__Sequence__copy(
  const winterhack_interfaces__action__Locate_GetResult_Request__Sequence * input,
  winterhack_interfaces__action__Locate_GetResult_Request__Sequence * output);

/// Initialize action/Locate message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * winterhack_interfaces__action__Locate_GetResult_Response
 * )) before or use
 * winterhack_interfaces__action__Locate_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
bool
winterhack_interfaces__action__Locate_GetResult_Response__init(winterhack_interfaces__action__Locate_GetResult_Response * msg);

/// Finalize action/Locate message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
void
winterhack_interfaces__action__Locate_GetResult_Response__fini(winterhack_interfaces__action__Locate_GetResult_Response * msg);

/// Create action/Locate message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * winterhack_interfaces__action__Locate_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
winterhack_interfaces__action__Locate_GetResult_Response *
winterhack_interfaces__action__Locate_GetResult_Response__create();

/// Destroy action/Locate message.
/**
 * It calls
 * winterhack_interfaces__action__Locate_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
void
winterhack_interfaces__action__Locate_GetResult_Response__destroy(winterhack_interfaces__action__Locate_GetResult_Response * msg);

/// Check for action/Locate message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
bool
winterhack_interfaces__action__Locate_GetResult_Response__are_equal(const winterhack_interfaces__action__Locate_GetResult_Response * lhs, const winterhack_interfaces__action__Locate_GetResult_Response * rhs);

/// Copy a action/Locate message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
bool
winterhack_interfaces__action__Locate_GetResult_Response__copy(
  const winterhack_interfaces__action__Locate_GetResult_Response * input,
  winterhack_interfaces__action__Locate_GetResult_Response * output);

/// Initialize array of action/Locate messages.
/**
 * It allocates the memory for the number of elements and calls
 * winterhack_interfaces__action__Locate_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
bool
winterhack_interfaces__action__Locate_GetResult_Response__Sequence__init(winterhack_interfaces__action__Locate_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/Locate messages.
/**
 * It calls
 * winterhack_interfaces__action__Locate_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
void
winterhack_interfaces__action__Locate_GetResult_Response__Sequence__fini(winterhack_interfaces__action__Locate_GetResult_Response__Sequence * array);

/// Create array of action/Locate messages.
/**
 * It allocates the memory for the array and calls
 * winterhack_interfaces__action__Locate_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
winterhack_interfaces__action__Locate_GetResult_Response__Sequence *
winterhack_interfaces__action__Locate_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/Locate messages.
/**
 * It calls
 * winterhack_interfaces__action__Locate_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
void
winterhack_interfaces__action__Locate_GetResult_Response__Sequence__destroy(winterhack_interfaces__action__Locate_GetResult_Response__Sequence * array);

/// Check for action/Locate message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
bool
winterhack_interfaces__action__Locate_GetResult_Response__Sequence__are_equal(const winterhack_interfaces__action__Locate_GetResult_Response__Sequence * lhs, const winterhack_interfaces__action__Locate_GetResult_Response__Sequence * rhs);

/// Copy an array of action/Locate messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
bool
winterhack_interfaces__action__Locate_GetResult_Response__Sequence__copy(
  const winterhack_interfaces__action__Locate_GetResult_Response__Sequence * input,
  winterhack_interfaces__action__Locate_GetResult_Response__Sequence * output);

/// Initialize action/Locate message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * winterhack_interfaces__action__Locate_FeedbackMessage
 * )) before or use
 * winterhack_interfaces__action__Locate_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
bool
winterhack_interfaces__action__Locate_FeedbackMessage__init(winterhack_interfaces__action__Locate_FeedbackMessage * msg);

/// Finalize action/Locate message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
void
winterhack_interfaces__action__Locate_FeedbackMessage__fini(winterhack_interfaces__action__Locate_FeedbackMessage * msg);

/// Create action/Locate message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * winterhack_interfaces__action__Locate_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
winterhack_interfaces__action__Locate_FeedbackMessage *
winterhack_interfaces__action__Locate_FeedbackMessage__create();

/// Destroy action/Locate message.
/**
 * It calls
 * winterhack_interfaces__action__Locate_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
void
winterhack_interfaces__action__Locate_FeedbackMessage__destroy(winterhack_interfaces__action__Locate_FeedbackMessage * msg);

/// Check for action/Locate message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
bool
winterhack_interfaces__action__Locate_FeedbackMessage__are_equal(const winterhack_interfaces__action__Locate_FeedbackMessage * lhs, const winterhack_interfaces__action__Locate_FeedbackMessage * rhs);

/// Copy a action/Locate message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
bool
winterhack_interfaces__action__Locate_FeedbackMessage__copy(
  const winterhack_interfaces__action__Locate_FeedbackMessage * input,
  winterhack_interfaces__action__Locate_FeedbackMessage * output);

/// Initialize array of action/Locate messages.
/**
 * It allocates the memory for the number of elements and calls
 * winterhack_interfaces__action__Locate_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
bool
winterhack_interfaces__action__Locate_FeedbackMessage__Sequence__init(winterhack_interfaces__action__Locate_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/Locate messages.
/**
 * It calls
 * winterhack_interfaces__action__Locate_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
void
winterhack_interfaces__action__Locate_FeedbackMessage__Sequence__fini(winterhack_interfaces__action__Locate_FeedbackMessage__Sequence * array);

/// Create array of action/Locate messages.
/**
 * It allocates the memory for the array and calls
 * winterhack_interfaces__action__Locate_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
winterhack_interfaces__action__Locate_FeedbackMessage__Sequence *
winterhack_interfaces__action__Locate_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/Locate messages.
/**
 * It calls
 * winterhack_interfaces__action__Locate_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
void
winterhack_interfaces__action__Locate_FeedbackMessage__Sequence__destroy(winterhack_interfaces__action__Locate_FeedbackMessage__Sequence * array);

/// Check for action/Locate message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
bool
winterhack_interfaces__action__Locate_FeedbackMessage__Sequence__are_equal(const winterhack_interfaces__action__Locate_FeedbackMessage__Sequence * lhs, const winterhack_interfaces__action__Locate_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/Locate messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_winterhack_interfaces
bool
winterhack_interfaces__action__Locate_FeedbackMessage__Sequence__copy(
  const winterhack_interfaces__action__Locate_FeedbackMessage__Sequence * input,
  winterhack_interfaces__action__Locate_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // WINTERHACK_INTERFACES__ACTION__DETAIL__LOCATE__FUNCTIONS_H_
