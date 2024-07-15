// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from node_interface:srv/SendDartRemainingTime.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__SRV__DETAIL__SEND_DART_REMAINING_TIME__FUNCTIONS_H_
#define NODE_INTERFACE__SRV__DETAIL__SEND_DART_REMAINING_TIME__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "node_interface/msg/rosidl_generator_c__visibility_control.h"

#include "node_interface/srv/detail/send_dart_remaining_time__struct.h"

/// Initialize srv/SendDartRemainingTime message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * node_interface__srv__SendDartRemainingTime_Request
 * )) before or use
 * node_interface__srv__SendDartRemainingTime_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_node_interface
bool
node_interface__srv__SendDartRemainingTime_Request__init(node_interface__srv__SendDartRemainingTime_Request * msg);

/// Finalize srv/SendDartRemainingTime message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_node_interface
void
node_interface__srv__SendDartRemainingTime_Request__fini(node_interface__srv__SendDartRemainingTime_Request * msg);

/// Create srv/SendDartRemainingTime message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * node_interface__srv__SendDartRemainingTime_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_node_interface
node_interface__srv__SendDartRemainingTime_Request *
node_interface__srv__SendDartRemainingTime_Request__create();

/// Destroy srv/SendDartRemainingTime message.
/**
 * It calls
 * node_interface__srv__SendDartRemainingTime_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_node_interface
void
node_interface__srv__SendDartRemainingTime_Request__destroy(node_interface__srv__SendDartRemainingTime_Request * msg);

/// Check for srv/SendDartRemainingTime message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_node_interface
bool
node_interface__srv__SendDartRemainingTime_Request__are_equal(const node_interface__srv__SendDartRemainingTime_Request * lhs, const node_interface__srv__SendDartRemainingTime_Request * rhs);

/// Copy a srv/SendDartRemainingTime message.
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
ROSIDL_GENERATOR_C_PUBLIC_node_interface
bool
node_interface__srv__SendDartRemainingTime_Request__copy(
  const node_interface__srv__SendDartRemainingTime_Request * input,
  node_interface__srv__SendDartRemainingTime_Request * output);

/// Initialize array of srv/SendDartRemainingTime messages.
/**
 * It allocates the memory for the number of elements and calls
 * node_interface__srv__SendDartRemainingTime_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_node_interface
bool
node_interface__srv__SendDartRemainingTime_Request__Sequence__init(node_interface__srv__SendDartRemainingTime_Request__Sequence * array, size_t size);

/// Finalize array of srv/SendDartRemainingTime messages.
/**
 * It calls
 * node_interface__srv__SendDartRemainingTime_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_node_interface
void
node_interface__srv__SendDartRemainingTime_Request__Sequence__fini(node_interface__srv__SendDartRemainingTime_Request__Sequence * array);

/// Create array of srv/SendDartRemainingTime messages.
/**
 * It allocates the memory for the array and calls
 * node_interface__srv__SendDartRemainingTime_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_node_interface
node_interface__srv__SendDartRemainingTime_Request__Sequence *
node_interface__srv__SendDartRemainingTime_Request__Sequence__create(size_t size);

/// Destroy array of srv/SendDartRemainingTime messages.
/**
 * It calls
 * node_interface__srv__SendDartRemainingTime_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_node_interface
void
node_interface__srv__SendDartRemainingTime_Request__Sequence__destroy(node_interface__srv__SendDartRemainingTime_Request__Sequence * array);

/// Check for srv/SendDartRemainingTime message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_node_interface
bool
node_interface__srv__SendDartRemainingTime_Request__Sequence__are_equal(const node_interface__srv__SendDartRemainingTime_Request__Sequence * lhs, const node_interface__srv__SendDartRemainingTime_Request__Sequence * rhs);

/// Copy an array of srv/SendDartRemainingTime messages.
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
ROSIDL_GENERATOR_C_PUBLIC_node_interface
bool
node_interface__srv__SendDartRemainingTime_Request__Sequence__copy(
  const node_interface__srv__SendDartRemainingTime_Request__Sequence * input,
  node_interface__srv__SendDartRemainingTime_Request__Sequence * output);

/// Initialize srv/SendDartRemainingTime message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * node_interface__srv__SendDartRemainingTime_Response
 * )) before or use
 * node_interface__srv__SendDartRemainingTime_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_node_interface
bool
node_interface__srv__SendDartRemainingTime_Response__init(node_interface__srv__SendDartRemainingTime_Response * msg);

/// Finalize srv/SendDartRemainingTime message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_node_interface
void
node_interface__srv__SendDartRemainingTime_Response__fini(node_interface__srv__SendDartRemainingTime_Response * msg);

/// Create srv/SendDartRemainingTime message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * node_interface__srv__SendDartRemainingTime_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_node_interface
node_interface__srv__SendDartRemainingTime_Response *
node_interface__srv__SendDartRemainingTime_Response__create();

/// Destroy srv/SendDartRemainingTime message.
/**
 * It calls
 * node_interface__srv__SendDartRemainingTime_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_node_interface
void
node_interface__srv__SendDartRemainingTime_Response__destroy(node_interface__srv__SendDartRemainingTime_Response * msg);

/// Check for srv/SendDartRemainingTime message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_node_interface
bool
node_interface__srv__SendDartRemainingTime_Response__are_equal(const node_interface__srv__SendDartRemainingTime_Response * lhs, const node_interface__srv__SendDartRemainingTime_Response * rhs);

/// Copy a srv/SendDartRemainingTime message.
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
ROSIDL_GENERATOR_C_PUBLIC_node_interface
bool
node_interface__srv__SendDartRemainingTime_Response__copy(
  const node_interface__srv__SendDartRemainingTime_Response * input,
  node_interface__srv__SendDartRemainingTime_Response * output);

/// Initialize array of srv/SendDartRemainingTime messages.
/**
 * It allocates the memory for the number of elements and calls
 * node_interface__srv__SendDartRemainingTime_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_node_interface
bool
node_interface__srv__SendDartRemainingTime_Response__Sequence__init(node_interface__srv__SendDartRemainingTime_Response__Sequence * array, size_t size);

/// Finalize array of srv/SendDartRemainingTime messages.
/**
 * It calls
 * node_interface__srv__SendDartRemainingTime_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_node_interface
void
node_interface__srv__SendDartRemainingTime_Response__Sequence__fini(node_interface__srv__SendDartRemainingTime_Response__Sequence * array);

/// Create array of srv/SendDartRemainingTime messages.
/**
 * It allocates the memory for the array and calls
 * node_interface__srv__SendDartRemainingTime_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_node_interface
node_interface__srv__SendDartRemainingTime_Response__Sequence *
node_interface__srv__SendDartRemainingTime_Response__Sequence__create(size_t size);

/// Destroy array of srv/SendDartRemainingTime messages.
/**
 * It calls
 * node_interface__srv__SendDartRemainingTime_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_node_interface
void
node_interface__srv__SendDartRemainingTime_Response__Sequence__destroy(node_interface__srv__SendDartRemainingTime_Response__Sequence * array);

/// Check for srv/SendDartRemainingTime message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_node_interface
bool
node_interface__srv__SendDartRemainingTime_Response__Sequence__are_equal(const node_interface__srv__SendDartRemainingTime_Response__Sequence * lhs, const node_interface__srv__SendDartRemainingTime_Response__Sequence * rhs);

/// Copy an array of srv/SendDartRemainingTime messages.
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
ROSIDL_GENERATOR_C_PUBLIC_node_interface
bool
node_interface__srv__SendDartRemainingTime_Response__Sequence__copy(
  const node_interface__srv__SendDartRemainingTime_Response__Sequence * input,
  node_interface__srv__SendDartRemainingTime_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // NODE_INTERFACE__SRV__DETAIL__SEND_DART_REMAINING_TIME__FUNCTIONS_H_
