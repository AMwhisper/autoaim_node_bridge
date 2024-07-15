// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from node_interface:msg/ClientCustomGraphicSeven.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__CLIENT_CUSTOM_GRAPHIC_SEVEN__FUNCTIONS_H_
#define NODE_INTERFACE__MSG__DETAIL__CLIENT_CUSTOM_GRAPHIC_SEVEN__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "node_interface/msg/rosidl_generator_c__visibility_control.h"

#include "node_interface/msg/detail/client_custom_graphic_seven__struct.h"

/// Initialize msg/ClientCustomGraphicSeven message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * node_interface__msg__ClientCustomGraphicSeven
 * )) before or use
 * node_interface__msg__ClientCustomGraphicSeven__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_node_interface
bool
node_interface__msg__ClientCustomGraphicSeven__init(node_interface__msg__ClientCustomGraphicSeven * msg);

/// Finalize msg/ClientCustomGraphicSeven message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_node_interface
void
node_interface__msg__ClientCustomGraphicSeven__fini(node_interface__msg__ClientCustomGraphicSeven * msg);

/// Create msg/ClientCustomGraphicSeven message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * node_interface__msg__ClientCustomGraphicSeven__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_node_interface
node_interface__msg__ClientCustomGraphicSeven *
node_interface__msg__ClientCustomGraphicSeven__create();

/// Destroy msg/ClientCustomGraphicSeven message.
/**
 * It calls
 * node_interface__msg__ClientCustomGraphicSeven__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_node_interface
void
node_interface__msg__ClientCustomGraphicSeven__destroy(node_interface__msg__ClientCustomGraphicSeven * msg);

/// Check for msg/ClientCustomGraphicSeven message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_node_interface
bool
node_interface__msg__ClientCustomGraphicSeven__are_equal(const node_interface__msg__ClientCustomGraphicSeven * lhs, const node_interface__msg__ClientCustomGraphicSeven * rhs);

/// Copy a msg/ClientCustomGraphicSeven message.
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
node_interface__msg__ClientCustomGraphicSeven__copy(
  const node_interface__msg__ClientCustomGraphicSeven * input,
  node_interface__msg__ClientCustomGraphicSeven * output);

/// Initialize array of msg/ClientCustomGraphicSeven messages.
/**
 * It allocates the memory for the number of elements and calls
 * node_interface__msg__ClientCustomGraphicSeven__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_node_interface
bool
node_interface__msg__ClientCustomGraphicSeven__Sequence__init(node_interface__msg__ClientCustomGraphicSeven__Sequence * array, size_t size);

/// Finalize array of msg/ClientCustomGraphicSeven messages.
/**
 * It calls
 * node_interface__msg__ClientCustomGraphicSeven__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_node_interface
void
node_interface__msg__ClientCustomGraphicSeven__Sequence__fini(node_interface__msg__ClientCustomGraphicSeven__Sequence * array);

/// Create array of msg/ClientCustomGraphicSeven messages.
/**
 * It allocates the memory for the array and calls
 * node_interface__msg__ClientCustomGraphicSeven__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_node_interface
node_interface__msg__ClientCustomGraphicSeven__Sequence *
node_interface__msg__ClientCustomGraphicSeven__Sequence__create(size_t size);

/// Destroy array of msg/ClientCustomGraphicSeven messages.
/**
 * It calls
 * node_interface__msg__ClientCustomGraphicSeven__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_node_interface
void
node_interface__msg__ClientCustomGraphicSeven__Sequence__destroy(node_interface__msg__ClientCustomGraphicSeven__Sequence * array);

/// Check for msg/ClientCustomGraphicSeven message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_node_interface
bool
node_interface__msg__ClientCustomGraphicSeven__Sequence__are_equal(const node_interface__msg__ClientCustomGraphicSeven__Sequence * lhs, const node_interface__msg__ClientCustomGraphicSeven__Sequence * rhs);

/// Copy an array of msg/ClientCustomGraphicSeven messages.
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
node_interface__msg__ClientCustomGraphicSeven__Sequence__copy(
  const node_interface__msg__ClientCustomGraphicSeven__Sequence * input,
  node_interface__msg__ClientCustomGraphicSeven__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // NODE_INTERFACE__MSG__DETAIL__CLIENT_CUSTOM_GRAPHIC_SEVEN__FUNCTIONS_H_
