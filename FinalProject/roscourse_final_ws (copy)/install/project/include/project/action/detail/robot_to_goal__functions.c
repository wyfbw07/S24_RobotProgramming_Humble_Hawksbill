// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from project:action/RobotToGoal.idl
// generated code does not contain a copyright notice
#include "project/action/detail/robot_to_goal__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `goal_poses`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
project__action__RobotToGoal_Goal__init(project__action__RobotToGoal_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // goal_poses
  if (!geometry_msgs__msg__Pose__Sequence__init(&msg->goal_poses, 0)) {
    project__action__RobotToGoal_Goal__fini(msg);
    return false;
  }
  return true;
}

void
project__action__RobotToGoal_Goal__fini(project__action__RobotToGoal_Goal * msg)
{
  if (!msg) {
    return;
  }
  // goal_poses
  geometry_msgs__msg__Pose__Sequence__fini(&msg->goal_poses);
}

bool
project__action__RobotToGoal_Goal__are_equal(const project__action__RobotToGoal_Goal * lhs, const project__action__RobotToGoal_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_poses
  if (!geometry_msgs__msg__Pose__Sequence__are_equal(
      &(lhs->goal_poses), &(rhs->goal_poses)))
  {
    return false;
  }
  return true;
}

bool
project__action__RobotToGoal_Goal__copy(
  const project__action__RobotToGoal_Goal * input,
  project__action__RobotToGoal_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_poses
  if (!geometry_msgs__msg__Pose__Sequence__copy(
      &(input->goal_poses), &(output->goal_poses)))
  {
    return false;
  }
  return true;
}

project__action__RobotToGoal_Goal *
project__action__RobotToGoal_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  project__action__RobotToGoal_Goal * msg = (project__action__RobotToGoal_Goal *)allocator.allocate(sizeof(project__action__RobotToGoal_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(project__action__RobotToGoal_Goal));
  bool success = project__action__RobotToGoal_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
project__action__RobotToGoal_Goal__destroy(project__action__RobotToGoal_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    project__action__RobotToGoal_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
project__action__RobotToGoal_Goal__Sequence__init(project__action__RobotToGoal_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  project__action__RobotToGoal_Goal * data = NULL;

  if (size) {
    data = (project__action__RobotToGoal_Goal *)allocator.zero_allocate(size, sizeof(project__action__RobotToGoal_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = project__action__RobotToGoal_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        project__action__RobotToGoal_Goal__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
project__action__RobotToGoal_Goal__Sequence__fini(project__action__RobotToGoal_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      project__action__RobotToGoal_Goal__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

project__action__RobotToGoal_Goal__Sequence *
project__action__RobotToGoal_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  project__action__RobotToGoal_Goal__Sequence * array = (project__action__RobotToGoal_Goal__Sequence *)allocator.allocate(sizeof(project__action__RobotToGoal_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = project__action__RobotToGoal_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
project__action__RobotToGoal_Goal__Sequence__destroy(project__action__RobotToGoal_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    project__action__RobotToGoal_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
project__action__RobotToGoal_Goal__Sequence__are_equal(const project__action__RobotToGoal_Goal__Sequence * lhs, const project__action__RobotToGoal_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!project__action__RobotToGoal_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
project__action__RobotToGoal_Goal__Sequence__copy(
  const project__action__RobotToGoal_Goal__Sequence * input,
  project__action__RobotToGoal_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(project__action__RobotToGoal_Goal);
    project__action__RobotToGoal_Goal * data =
      (project__action__RobotToGoal_Goal *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!project__action__RobotToGoal_Goal__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          project__action__RobotToGoal_Goal__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!project__action__RobotToGoal_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
project__action__RobotToGoal_Result__init(project__action__RobotToGoal_Result * msg)
{
  if (!msg) {
    return false;
  }
  // ret
  return true;
}

void
project__action__RobotToGoal_Result__fini(project__action__RobotToGoal_Result * msg)
{
  if (!msg) {
    return;
  }
  // ret
}

bool
project__action__RobotToGoal_Result__are_equal(const project__action__RobotToGoal_Result * lhs, const project__action__RobotToGoal_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // ret
  if (lhs->ret != rhs->ret) {
    return false;
  }
  return true;
}

bool
project__action__RobotToGoal_Result__copy(
  const project__action__RobotToGoal_Result * input,
  project__action__RobotToGoal_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // ret
  output->ret = input->ret;
  return true;
}

project__action__RobotToGoal_Result *
project__action__RobotToGoal_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  project__action__RobotToGoal_Result * msg = (project__action__RobotToGoal_Result *)allocator.allocate(sizeof(project__action__RobotToGoal_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(project__action__RobotToGoal_Result));
  bool success = project__action__RobotToGoal_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
project__action__RobotToGoal_Result__destroy(project__action__RobotToGoal_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    project__action__RobotToGoal_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
project__action__RobotToGoal_Result__Sequence__init(project__action__RobotToGoal_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  project__action__RobotToGoal_Result * data = NULL;

  if (size) {
    data = (project__action__RobotToGoal_Result *)allocator.zero_allocate(size, sizeof(project__action__RobotToGoal_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = project__action__RobotToGoal_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        project__action__RobotToGoal_Result__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
project__action__RobotToGoal_Result__Sequence__fini(project__action__RobotToGoal_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      project__action__RobotToGoal_Result__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

project__action__RobotToGoal_Result__Sequence *
project__action__RobotToGoal_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  project__action__RobotToGoal_Result__Sequence * array = (project__action__RobotToGoal_Result__Sequence *)allocator.allocate(sizeof(project__action__RobotToGoal_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = project__action__RobotToGoal_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
project__action__RobotToGoal_Result__Sequence__destroy(project__action__RobotToGoal_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    project__action__RobotToGoal_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
project__action__RobotToGoal_Result__Sequence__are_equal(const project__action__RobotToGoal_Result__Sequence * lhs, const project__action__RobotToGoal_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!project__action__RobotToGoal_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
project__action__RobotToGoal_Result__Sequence__copy(
  const project__action__RobotToGoal_Result__Sequence * input,
  project__action__RobotToGoal_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(project__action__RobotToGoal_Result);
    project__action__RobotToGoal_Result * data =
      (project__action__RobotToGoal_Result *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!project__action__RobotToGoal_Result__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          project__action__RobotToGoal_Result__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!project__action__RobotToGoal_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `mid_goal_pose`
// already included above
// #include "geometry_msgs/msg/detail/pose__functions.h"

bool
project__action__RobotToGoal_Feedback__init(project__action__RobotToGoal_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // mid_goal_pose
  if (!geometry_msgs__msg__Pose__init(&msg->mid_goal_pose)) {
    project__action__RobotToGoal_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
project__action__RobotToGoal_Feedback__fini(project__action__RobotToGoal_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // mid_goal_pose
  geometry_msgs__msg__Pose__fini(&msg->mid_goal_pose);
}

bool
project__action__RobotToGoal_Feedback__are_equal(const project__action__RobotToGoal_Feedback * lhs, const project__action__RobotToGoal_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // mid_goal_pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->mid_goal_pose), &(rhs->mid_goal_pose)))
  {
    return false;
  }
  return true;
}

bool
project__action__RobotToGoal_Feedback__copy(
  const project__action__RobotToGoal_Feedback * input,
  project__action__RobotToGoal_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // mid_goal_pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->mid_goal_pose), &(output->mid_goal_pose)))
  {
    return false;
  }
  return true;
}

project__action__RobotToGoal_Feedback *
project__action__RobotToGoal_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  project__action__RobotToGoal_Feedback * msg = (project__action__RobotToGoal_Feedback *)allocator.allocate(sizeof(project__action__RobotToGoal_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(project__action__RobotToGoal_Feedback));
  bool success = project__action__RobotToGoal_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
project__action__RobotToGoal_Feedback__destroy(project__action__RobotToGoal_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    project__action__RobotToGoal_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
project__action__RobotToGoal_Feedback__Sequence__init(project__action__RobotToGoal_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  project__action__RobotToGoal_Feedback * data = NULL;

  if (size) {
    data = (project__action__RobotToGoal_Feedback *)allocator.zero_allocate(size, sizeof(project__action__RobotToGoal_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = project__action__RobotToGoal_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        project__action__RobotToGoal_Feedback__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
project__action__RobotToGoal_Feedback__Sequence__fini(project__action__RobotToGoal_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      project__action__RobotToGoal_Feedback__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

project__action__RobotToGoal_Feedback__Sequence *
project__action__RobotToGoal_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  project__action__RobotToGoal_Feedback__Sequence * array = (project__action__RobotToGoal_Feedback__Sequence *)allocator.allocate(sizeof(project__action__RobotToGoal_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = project__action__RobotToGoal_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
project__action__RobotToGoal_Feedback__Sequence__destroy(project__action__RobotToGoal_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    project__action__RobotToGoal_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
project__action__RobotToGoal_Feedback__Sequence__are_equal(const project__action__RobotToGoal_Feedback__Sequence * lhs, const project__action__RobotToGoal_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!project__action__RobotToGoal_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
project__action__RobotToGoal_Feedback__Sequence__copy(
  const project__action__RobotToGoal_Feedback__Sequence * input,
  project__action__RobotToGoal_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(project__action__RobotToGoal_Feedback);
    project__action__RobotToGoal_Feedback * data =
      (project__action__RobotToGoal_Feedback *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!project__action__RobotToGoal_Feedback__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          project__action__RobotToGoal_Feedback__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!project__action__RobotToGoal_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "project/action/detail/robot_to_goal__functions.h"

bool
project__action__RobotToGoal_SendGoal_Request__init(project__action__RobotToGoal_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    project__action__RobotToGoal_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!project__action__RobotToGoal_Goal__init(&msg->goal)) {
    project__action__RobotToGoal_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
project__action__RobotToGoal_SendGoal_Request__fini(project__action__RobotToGoal_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  project__action__RobotToGoal_Goal__fini(&msg->goal);
}

bool
project__action__RobotToGoal_SendGoal_Request__are_equal(const project__action__RobotToGoal_SendGoal_Request * lhs, const project__action__RobotToGoal_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!project__action__RobotToGoal_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
project__action__RobotToGoal_SendGoal_Request__copy(
  const project__action__RobotToGoal_SendGoal_Request * input,
  project__action__RobotToGoal_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!project__action__RobotToGoal_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

project__action__RobotToGoal_SendGoal_Request *
project__action__RobotToGoal_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  project__action__RobotToGoal_SendGoal_Request * msg = (project__action__RobotToGoal_SendGoal_Request *)allocator.allocate(sizeof(project__action__RobotToGoal_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(project__action__RobotToGoal_SendGoal_Request));
  bool success = project__action__RobotToGoal_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
project__action__RobotToGoal_SendGoal_Request__destroy(project__action__RobotToGoal_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    project__action__RobotToGoal_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
project__action__RobotToGoal_SendGoal_Request__Sequence__init(project__action__RobotToGoal_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  project__action__RobotToGoal_SendGoal_Request * data = NULL;

  if (size) {
    data = (project__action__RobotToGoal_SendGoal_Request *)allocator.zero_allocate(size, sizeof(project__action__RobotToGoal_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = project__action__RobotToGoal_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        project__action__RobotToGoal_SendGoal_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
project__action__RobotToGoal_SendGoal_Request__Sequence__fini(project__action__RobotToGoal_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      project__action__RobotToGoal_SendGoal_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

project__action__RobotToGoal_SendGoal_Request__Sequence *
project__action__RobotToGoal_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  project__action__RobotToGoal_SendGoal_Request__Sequence * array = (project__action__RobotToGoal_SendGoal_Request__Sequence *)allocator.allocate(sizeof(project__action__RobotToGoal_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = project__action__RobotToGoal_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
project__action__RobotToGoal_SendGoal_Request__Sequence__destroy(project__action__RobotToGoal_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    project__action__RobotToGoal_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
project__action__RobotToGoal_SendGoal_Request__Sequence__are_equal(const project__action__RobotToGoal_SendGoal_Request__Sequence * lhs, const project__action__RobotToGoal_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!project__action__RobotToGoal_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
project__action__RobotToGoal_SendGoal_Request__Sequence__copy(
  const project__action__RobotToGoal_SendGoal_Request__Sequence * input,
  project__action__RobotToGoal_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(project__action__RobotToGoal_SendGoal_Request);
    project__action__RobotToGoal_SendGoal_Request * data =
      (project__action__RobotToGoal_SendGoal_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!project__action__RobotToGoal_SendGoal_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          project__action__RobotToGoal_SendGoal_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!project__action__RobotToGoal_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
project__action__RobotToGoal_SendGoal_Response__init(project__action__RobotToGoal_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    project__action__RobotToGoal_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
project__action__RobotToGoal_SendGoal_Response__fini(project__action__RobotToGoal_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
project__action__RobotToGoal_SendGoal_Response__are_equal(const project__action__RobotToGoal_SendGoal_Response * lhs, const project__action__RobotToGoal_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
project__action__RobotToGoal_SendGoal_Response__copy(
  const project__action__RobotToGoal_SendGoal_Response * input,
  project__action__RobotToGoal_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

project__action__RobotToGoal_SendGoal_Response *
project__action__RobotToGoal_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  project__action__RobotToGoal_SendGoal_Response * msg = (project__action__RobotToGoal_SendGoal_Response *)allocator.allocate(sizeof(project__action__RobotToGoal_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(project__action__RobotToGoal_SendGoal_Response));
  bool success = project__action__RobotToGoal_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
project__action__RobotToGoal_SendGoal_Response__destroy(project__action__RobotToGoal_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    project__action__RobotToGoal_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
project__action__RobotToGoal_SendGoal_Response__Sequence__init(project__action__RobotToGoal_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  project__action__RobotToGoal_SendGoal_Response * data = NULL;

  if (size) {
    data = (project__action__RobotToGoal_SendGoal_Response *)allocator.zero_allocate(size, sizeof(project__action__RobotToGoal_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = project__action__RobotToGoal_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        project__action__RobotToGoal_SendGoal_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
project__action__RobotToGoal_SendGoal_Response__Sequence__fini(project__action__RobotToGoal_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      project__action__RobotToGoal_SendGoal_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

project__action__RobotToGoal_SendGoal_Response__Sequence *
project__action__RobotToGoal_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  project__action__RobotToGoal_SendGoal_Response__Sequence * array = (project__action__RobotToGoal_SendGoal_Response__Sequence *)allocator.allocate(sizeof(project__action__RobotToGoal_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = project__action__RobotToGoal_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
project__action__RobotToGoal_SendGoal_Response__Sequence__destroy(project__action__RobotToGoal_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    project__action__RobotToGoal_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
project__action__RobotToGoal_SendGoal_Response__Sequence__are_equal(const project__action__RobotToGoal_SendGoal_Response__Sequence * lhs, const project__action__RobotToGoal_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!project__action__RobotToGoal_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
project__action__RobotToGoal_SendGoal_Response__Sequence__copy(
  const project__action__RobotToGoal_SendGoal_Response__Sequence * input,
  project__action__RobotToGoal_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(project__action__RobotToGoal_SendGoal_Response);
    project__action__RobotToGoal_SendGoal_Response * data =
      (project__action__RobotToGoal_SendGoal_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!project__action__RobotToGoal_SendGoal_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          project__action__RobotToGoal_SendGoal_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!project__action__RobotToGoal_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
project__action__RobotToGoal_GetResult_Request__init(project__action__RobotToGoal_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    project__action__RobotToGoal_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
project__action__RobotToGoal_GetResult_Request__fini(project__action__RobotToGoal_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
project__action__RobotToGoal_GetResult_Request__are_equal(const project__action__RobotToGoal_GetResult_Request * lhs, const project__action__RobotToGoal_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
project__action__RobotToGoal_GetResult_Request__copy(
  const project__action__RobotToGoal_GetResult_Request * input,
  project__action__RobotToGoal_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

project__action__RobotToGoal_GetResult_Request *
project__action__RobotToGoal_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  project__action__RobotToGoal_GetResult_Request * msg = (project__action__RobotToGoal_GetResult_Request *)allocator.allocate(sizeof(project__action__RobotToGoal_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(project__action__RobotToGoal_GetResult_Request));
  bool success = project__action__RobotToGoal_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
project__action__RobotToGoal_GetResult_Request__destroy(project__action__RobotToGoal_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    project__action__RobotToGoal_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
project__action__RobotToGoal_GetResult_Request__Sequence__init(project__action__RobotToGoal_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  project__action__RobotToGoal_GetResult_Request * data = NULL;

  if (size) {
    data = (project__action__RobotToGoal_GetResult_Request *)allocator.zero_allocate(size, sizeof(project__action__RobotToGoal_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = project__action__RobotToGoal_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        project__action__RobotToGoal_GetResult_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
project__action__RobotToGoal_GetResult_Request__Sequence__fini(project__action__RobotToGoal_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      project__action__RobotToGoal_GetResult_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

project__action__RobotToGoal_GetResult_Request__Sequence *
project__action__RobotToGoal_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  project__action__RobotToGoal_GetResult_Request__Sequence * array = (project__action__RobotToGoal_GetResult_Request__Sequence *)allocator.allocate(sizeof(project__action__RobotToGoal_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = project__action__RobotToGoal_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
project__action__RobotToGoal_GetResult_Request__Sequence__destroy(project__action__RobotToGoal_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    project__action__RobotToGoal_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
project__action__RobotToGoal_GetResult_Request__Sequence__are_equal(const project__action__RobotToGoal_GetResult_Request__Sequence * lhs, const project__action__RobotToGoal_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!project__action__RobotToGoal_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
project__action__RobotToGoal_GetResult_Request__Sequence__copy(
  const project__action__RobotToGoal_GetResult_Request__Sequence * input,
  project__action__RobotToGoal_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(project__action__RobotToGoal_GetResult_Request);
    project__action__RobotToGoal_GetResult_Request * data =
      (project__action__RobotToGoal_GetResult_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!project__action__RobotToGoal_GetResult_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          project__action__RobotToGoal_GetResult_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!project__action__RobotToGoal_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "project/action/detail/robot_to_goal__functions.h"

bool
project__action__RobotToGoal_GetResult_Response__init(project__action__RobotToGoal_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!project__action__RobotToGoal_Result__init(&msg->result)) {
    project__action__RobotToGoal_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
project__action__RobotToGoal_GetResult_Response__fini(project__action__RobotToGoal_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  project__action__RobotToGoal_Result__fini(&msg->result);
}

bool
project__action__RobotToGoal_GetResult_Response__are_equal(const project__action__RobotToGoal_GetResult_Response * lhs, const project__action__RobotToGoal_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!project__action__RobotToGoal_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
project__action__RobotToGoal_GetResult_Response__copy(
  const project__action__RobotToGoal_GetResult_Response * input,
  project__action__RobotToGoal_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!project__action__RobotToGoal_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

project__action__RobotToGoal_GetResult_Response *
project__action__RobotToGoal_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  project__action__RobotToGoal_GetResult_Response * msg = (project__action__RobotToGoal_GetResult_Response *)allocator.allocate(sizeof(project__action__RobotToGoal_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(project__action__RobotToGoal_GetResult_Response));
  bool success = project__action__RobotToGoal_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
project__action__RobotToGoal_GetResult_Response__destroy(project__action__RobotToGoal_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    project__action__RobotToGoal_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
project__action__RobotToGoal_GetResult_Response__Sequence__init(project__action__RobotToGoal_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  project__action__RobotToGoal_GetResult_Response * data = NULL;

  if (size) {
    data = (project__action__RobotToGoal_GetResult_Response *)allocator.zero_allocate(size, sizeof(project__action__RobotToGoal_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = project__action__RobotToGoal_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        project__action__RobotToGoal_GetResult_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
project__action__RobotToGoal_GetResult_Response__Sequence__fini(project__action__RobotToGoal_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      project__action__RobotToGoal_GetResult_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

project__action__RobotToGoal_GetResult_Response__Sequence *
project__action__RobotToGoal_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  project__action__RobotToGoal_GetResult_Response__Sequence * array = (project__action__RobotToGoal_GetResult_Response__Sequence *)allocator.allocate(sizeof(project__action__RobotToGoal_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = project__action__RobotToGoal_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
project__action__RobotToGoal_GetResult_Response__Sequence__destroy(project__action__RobotToGoal_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    project__action__RobotToGoal_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
project__action__RobotToGoal_GetResult_Response__Sequence__are_equal(const project__action__RobotToGoal_GetResult_Response__Sequence * lhs, const project__action__RobotToGoal_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!project__action__RobotToGoal_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
project__action__RobotToGoal_GetResult_Response__Sequence__copy(
  const project__action__RobotToGoal_GetResult_Response__Sequence * input,
  project__action__RobotToGoal_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(project__action__RobotToGoal_GetResult_Response);
    project__action__RobotToGoal_GetResult_Response * data =
      (project__action__RobotToGoal_GetResult_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!project__action__RobotToGoal_GetResult_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          project__action__RobotToGoal_GetResult_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!project__action__RobotToGoal_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "project/action/detail/robot_to_goal__functions.h"

bool
project__action__RobotToGoal_FeedbackMessage__init(project__action__RobotToGoal_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    project__action__RobotToGoal_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!project__action__RobotToGoal_Feedback__init(&msg->feedback)) {
    project__action__RobotToGoal_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
project__action__RobotToGoal_FeedbackMessage__fini(project__action__RobotToGoal_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  project__action__RobotToGoal_Feedback__fini(&msg->feedback);
}

bool
project__action__RobotToGoal_FeedbackMessage__are_equal(const project__action__RobotToGoal_FeedbackMessage * lhs, const project__action__RobotToGoal_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!project__action__RobotToGoal_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
project__action__RobotToGoal_FeedbackMessage__copy(
  const project__action__RobotToGoal_FeedbackMessage * input,
  project__action__RobotToGoal_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!project__action__RobotToGoal_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

project__action__RobotToGoal_FeedbackMessage *
project__action__RobotToGoal_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  project__action__RobotToGoal_FeedbackMessage * msg = (project__action__RobotToGoal_FeedbackMessage *)allocator.allocate(sizeof(project__action__RobotToGoal_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(project__action__RobotToGoal_FeedbackMessage));
  bool success = project__action__RobotToGoal_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
project__action__RobotToGoal_FeedbackMessage__destroy(project__action__RobotToGoal_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    project__action__RobotToGoal_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
project__action__RobotToGoal_FeedbackMessage__Sequence__init(project__action__RobotToGoal_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  project__action__RobotToGoal_FeedbackMessage * data = NULL;

  if (size) {
    data = (project__action__RobotToGoal_FeedbackMessage *)allocator.zero_allocate(size, sizeof(project__action__RobotToGoal_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = project__action__RobotToGoal_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        project__action__RobotToGoal_FeedbackMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
project__action__RobotToGoal_FeedbackMessage__Sequence__fini(project__action__RobotToGoal_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      project__action__RobotToGoal_FeedbackMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

project__action__RobotToGoal_FeedbackMessage__Sequence *
project__action__RobotToGoal_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  project__action__RobotToGoal_FeedbackMessage__Sequence * array = (project__action__RobotToGoal_FeedbackMessage__Sequence *)allocator.allocate(sizeof(project__action__RobotToGoal_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = project__action__RobotToGoal_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
project__action__RobotToGoal_FeedbackMessage__Sequence__destroy(project__action__RobotToGoal_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    project__action__RobotToGoal_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
project__action__RobotToGoal_FeedbackMessage__Sequence__are_equal(const project__action__RobotToGoal_FeedbackMessage__Sequence * lhs, const project__action__RobotToGoal_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!project__action__RobotToGoal_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
project__action__RobotToGoal_FeedbackMessage__Sequence__copy(
  const project__action__RobotToGoal_FeedbackMessage__Sequence * input,
  project__action__RobotToGoal_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(project__action__RobotToGoal_FeedbackMessage);
    project__action__RobotToGoal_FeedbackMessage * data =
      (project__action__RobotToGoal_FeedbackMessage *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!project__action__RobotToGoal_FeedbackMessage__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          project__action__RobotToGoal_FeedbackMessage__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!project__action__RobotToGoal_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
