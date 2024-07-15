// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from node_interface:msg/GameResult.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__GAME_RESULT__FUNCTIONS_H_
#define NODE_INTERFACE__MSG__DETAIL__GAME_RESULT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "node_interface/msg/rosidl_generator_c__visibility_control.h"

#include "node_interface/msg/detail/game_result__struct.h"

/// Initialize msg/GameResult message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * node_interface__msg__GameResult
 * )) before or use
 * node_interface__msg__GameResult__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_node_interface
bool
node_interface__msg__GameResult__init(node_interface__msg__GameResult * msg);

/// Finalize msg/GameResult message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_node_interface
void
node_interface__msg__GameResult__fini(node_interface__msg__GameResult * msg);

/// Create msg/GameResult message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * node_interface__msg__GameResult__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_node_interface
node_interface__msg__GameResult *
node_interface__msg__GameResult__create();

/// Destroy msg/GameResult message.
/**
 * It calls
 * node_interface__msg__GameResult__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_node_interface
void
node_interface__msg__GameResult__destroy(node_interface__msg__GameResult * msg);

/// Check for msg/GameResult message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_node_interface
bool
node_interface__msg__GameResult__are_equal(const node_interface__msg__GameResult * lhs, const node_interface__msg__GameResult * rhs);

/// Copy a msg/GameResult message.
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
node_interface__msg__GameResult__copy(
  const node_interface__msg__GameResult * input,
  node_interface__msg__GameResult * output);

/// Initialize array of msg/GameResult messages.
/**
 * It allocates the memory for the number of elements and calls
 * node_interface__msg__GameResult__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_node_interface
bool
node_interface__msg__GameResult__Sequence__init(node_interface__msg__GameResult__Sequence * array, size_t size);

/// Finalize array of msg/GameResult messages.
/**
 * It calls
 * node_interface__msg__GameResult__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_node_interface
void
node_interface__msg__GameResult__Sequence__fini(node_interface__msg__GameResult__Sequence * array);

/// Create array of msg/GameResult messages.
/**
 * It allocates the memory for the array and calls
 * node_interface__msg__GameResult__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_node_interface
node_interface__msg__GameResult__Sequence *
node_interface__msg__GameResult__Sequence__create(size_t size);

/// Destroy array of msg/GameResult messages.
/**
 * It calls
 * node_interface__msg__GameResult__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_node_interface
void
node_interface__msg__GameResult__Sequence__destroy(node_interface__msg__GameResult__Sequence * array);

/// Check for msg/GameResult message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_node_interface
bool
node_interface__msg__GameResult__Sequence__are_equal(const node_interface__msg__GameResult__Sequence * lhs, const node_interface__msg__GameResult__Sequence * rhs);

/// Copy an array of msg/GameResult messages.
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
node_interface__msg__GameResult__Sequence__copy(
  const node_interface__msg__GameResult__Sequence * input,
  node_interface__msg__GameResult__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // NODE_INTERFACE__MSG__DETAIL__GAME_RESULT__FUNCTIONS_H_
