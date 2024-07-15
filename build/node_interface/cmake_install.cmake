# Install script for directory: /home/amwhisper/ros/workspace/nbr2_ws/src/node_interface

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/amwhisper/ros/workspace/nbr2_ws/install/node_interface")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/rosidl_interfaces" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/ament_cmake_index/share/ament_index/resource_index/rosidl_interfaces/node_interface")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/node_interface/node_interface" TYPE DIRECTORY FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_generator_c/node_interface/" REGEX "/[^/]*\\.h$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/environment" TYPE FILE FILES "/opt/ros/humble/lib/python3.10/site-packages/ament_package/template/environment_hook/library_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/environment" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/ament_cmake_environment_hooks/library_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnode_interface__rosidl_generator_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnode_interface__rosidl_generator_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnode_interface__rosidl_generator_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/libnode_interface__rosidl_generator_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnode_interface__rosidl_generator_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnode_interface__rosidl_generator_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnode_interface__rosidl_generator_c.so"
         OLD_RPATH "/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnode_interface__rosidl_generator_c.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/node_interface/node_interface" TYPE DIRECTORY FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_typesupport_fastrtps_c/node_interface/" REGEX "/[^/]*\\.cpp$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnode_interface__rosidl_typesupport_fastrtps_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnode_interface__rosidl_typesupport_fastrtps_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnode_interface__rosidl_typesupport_fastrtps_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/libnode_interface__rosidl_typesupport_fastrtps_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnode_interface__rosidl_typesupport_fastrtps_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnode_interface__rosidl_typesupport_fastrtps_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnode_interface__rosidl_typesupport_fastrtps_c.so"
         OLD_RPATH "/opt/ros/humble/lib:/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnode_interface__rosidl_typesupport_fastrtps_c.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/node_interface/node_interface" TYPE DIRECTORY FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_typesupport_introspection_c/node_interface/" REGEX "/[^/]*\\.h$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnode_interface__rosidl_typesupport_introspection_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnode_interface__rosidl_typesupport_introspection_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnode_interface__rosidl_typesupport_introspection_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/libnode_interface__rosidl_typesupport_introspection_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnode_interface__rosidl_typesupport_introspection_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnode_interface__rosidl_typesupport_introspection_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnode_interface__rosidl_typesupport_introspection_c.so"
         OLD_RPATH "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface:/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnode_interface__rosidl_typesupport_introspection_c.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnode_interface__rosidl_typesupport_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnode_interface__rosidl_typesupport_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnode_interface__rosidl_typesupport_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/libnode_interface__rosidl_typesupport_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnode_interface__rosidl_typesupport_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnode_interface__rosidl_typesupport_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnode_interface__rosidl_typesupport_c.so"
         OLD_RPATH "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface:/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnode_interface__rosidl_typesupport_c.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/node_interface/node_interface" TYPE DIRECTORY FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_generator_cpp/node_interface/" REGEX "/[^/]*\\.hpp$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/node_interface/node_interface" TYPE DIRECTORY FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_typesupport_fastrtps_cpp/node_interface/" REGEX "/[^/]*\\.cpp$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnode_interface__rosidl_typesupport_fastrtps_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnode_interface__rosidl_typesupport_fastrtps_cpp.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnode_interface__rosidl_typesupport_fastrtps_cpp.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/libnode_interface__rosidl_typesupport_fastrtps_cpp.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnode_interface__rosidl_typesupport_fastrtps_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnode_interface__rosidl_typesupport_fastrtps_cpp.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnode_interface__rosidl_typesupport_fastrtps_cpp.so"
         OLD_RPATH "/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnode_interface__rosidl_typesupport_fastrtps_cpp.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/node_interface/node_interface" TYPE DIRECTORY FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_typesupport_introspection_cpp/node_interface/" REGEX "/[^/]*\\.hpp$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnode_interface__rosidl_typesupport_introspection_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnode_interface__rosidl_typesupport_introspection_cpp.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnode_interface__rosidl_typesupport_introspection_cpp.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/libnode_interface__rosidl_typesupport_introspection_cpp.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnode_interface__rosidl_typesupport_introspection_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnode_interface__rosidl_typesupport_introspection_cpp.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnode_interface__rosidl_typesupport_introspection_cpp.so"
         OLD_RPATH "/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnode_interface__rosidl_typesupport_introspection_cpp.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnode_interface__rosidl_typesupport_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnode_interface__rosidl_typesupport_cpp.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnode_interface__rosidl_typesupport_cpp.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/libnode_interface__rosidl_typesupport_cpp.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnode_interface__rosidl_typesupport_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnode_interface__rosidl_typesupport_cpp.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnode_interface__rosidl_typesupport_cpp.so"
         OLD_RPATH "/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnode_interface__rosidl_typesupport_cpp.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/environment" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/ament_cmake_environment_hooks/pythonpath.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/environment" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/ament_cmake_environment_hooks/pythonpath.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/node_interface-0.0.0-py3.10.egg-info" TYPE DIRECTORY FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/ament_cmake_python/node_interface/node_interface.egg-info/")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/node_interface" TYPE DIRECTORY FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_generator_py/node_interface/" REGEX "/[^/]*\\.pyc$" EXCLUDE REGEX "/\\_\\_pycache\\_\\_$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(
        COMMAND
        "/usr/bin/python3" "-m" "compileall"
        "/home/amwhisper/ros/workspace/nbr2_ws/install/node_interface/local/lib/python3.10/dist-packages/node_interface"
      )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/node_interface/node_interface_s__rosidl_typesupport_fastrtps_c.cpython-310-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/node_interface/node_interface_s__rosidl_typesupport_fastrtps_c.cpython-310-x86_64-linux-gnu.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/node_interface/node_interface_s__rosidl_typesupport_fastrtps_c.cpython-310-x86_64-linux-gnu.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/node_interface" TYPE SHARED_LIBRARY FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_generator_py/node_interface/node_interface_s__rosidl_typesupport_fastrtps_c.cpython-310-x86_64-linux-gnu.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/node_interface/node_interface_s__rosidl_typesupport_fastrtps_c.cpython-310-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/node_interface/node_interface_s__rosidl_typesupport_fastrtps_c.cpython-310-x86_64-linux-gnu.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/node_interface/node_interface_s__rosidl_typesupport_fastrtps_c.cpython-310-x86_64-linux-gnu.so"
         OLD_RPATH "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_generator_py/node_interface:/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface:/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/node_interface/node_interface_s__rosidl_typesupport_fastrtps_c.cpython-310-x86_64-linux-gnu.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/node_interface/node_interface_s__rosidl_typesupport_introspection_c.cpython-310-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/node_interface/node_interface_s__rosidl_typesupport_introspection_c.cpython-310-x86_64-linux-gnu.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/node_interface/node_interface_s__rosidl_typesupport_introspection_c.cpython-310-x86_64-linux-gnu.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/node_interface" TYPE SHARED_LIBRARY FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_generator_py/node_interface/node_interface_s__rosidl_typesupport_introspection_c.cpython-310-x86_64-linux-gnu.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/node_interface/node_interface_s__rosidl_typesupport_introspection_c.cpython-310-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/node_interface/node_interface_s__rosidl_typesupport_introspection_c.cpython-310-x86_64-linux-gnu.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/node_interface/node_interface_s__rosidl_typesupport_introspection_c.cpython-310-x86_64-linux-gnu.so"
         OLD_RPATH "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_generator_py/node_interface:/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface:/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/node_interface/node_interface_s__rosidl_typesupport_introspection_c.cpython-310-x86_64-linux-gnu.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/node_interface/node_interface_s__rosidl_typesupport_c.cpython-310-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/node_interface/node_interface_s__rosidl_typesupport_c.cpython-310-x86_64-linux-gnu.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/node_interface/node_interface_s__rosidl_typesupport_c.cpython-310-x86_64-linux-gnu.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/node_interface" TYPE SHARED_LIBRARY FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_generator_py/node_interface/node_interface_s__rosidl_typesupport_c.cpython-310-x86_64-linux-gnu.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/node_interface/node_interface_s__rosidl_typesupport_c.cpython-310-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/node_interface/node_interface_s__rosidl_typesupport_c.cpython-310-x86_64-linux-gnu.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/node_interface/node_interface_s__rosidl_typesupport_c.cpython-310-x86_64-linux-gnu.so"
         OLD_RPATH "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_generator_py/node_interface:/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface:/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/node_interface/node_interface_s__rosidl_typesupport_c.cpython-310-x86_64-linux-gnu.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnode_interface__rosidl_generator_py.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnode_interface__rosidl_generator_py.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnode_interface__rosidl_generator_py.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_generator_py/node_interface/libnode_interface__rosidl_generator_py.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnode_interface__rosidl_generator_py.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnode_interface__rosidl_generator_py.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnode_interface__rosidl_generator_py.so"
         OLD_RPATH "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface:/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libnode_interface__rosidl_generator_py.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/msg/GraphicDataType.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/msg/DebugDataType.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/msg/GameStatus.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/msg/GameResult.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/msg/HealthPoint.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/msg/DartStatus.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/msg/IcraBuffDebuffZoneStatus.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/msg/EventData.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/msg/SupplyProjectileAction.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/msg/RefereeWarning.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/msg/DartRemainingTime.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/msg/GameRobotStatus.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/msg/PowerHeatData.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/msg/GameRobotPos.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/msg/BuffInfo.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/msg/AerialRobotEnergy.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/msg/RobotHurt.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/msg/ShootData.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/msg/BulletRemaining.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/msg/RfidStatus.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/msg/DartClientCmds.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/msg/ClientCustomGraphicDelete.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/msg/ClientCustomGraphicSingle.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/msg/ClientCustomGraphicDouble.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/msg/ClientCustomGraphicFive.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/msg/ClientCustomCharacter.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/msg/ClientCustomGraphicSeven.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/msg/DebugInfo.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/msg/ErrorInfo.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/msg/Heartbeat.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/msg/AutoaimData.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/msg/ChassisData.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/msg/GyroscopeData.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/msg/DbugData.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/msg/JointState.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/msg/JointControl.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/msg/JointCalibration.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/msg/RobotCommunication.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/msg/BoardAlpha.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/msg/BoardBeta.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/srv/SendGameStatus.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/srv/SendGameResult.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/srv/SendHealthPoint.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/srv/SendDartStatus.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/srv/SendIcraBuffDebuffZoneStatus.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/srv/SendEventData.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/srv/SendSupplyProjectileAction.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/srv/SendRefereeWarning.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/srv/SendDartRemainingTime.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/srv/SendGameRobotStatus.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/srv/SendPowerHeatData.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/srv/SendGameRobotPos.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/srv/SendBuffInfo.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/srv/SendAerialRobotEnergy.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/srv/SendRobotHurt.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/srv/SendShootData.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/srv/SendBulletRemaining.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/srv/SendRfidStatus.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/srv/SendDartClientCmds.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/srv/SendClientCustomGraphicDelete.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/srv/SendClientCustomGraphicSingle.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/srv/SendClientCustomGraphicDouble.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/srv/SendClientCustomGraphicFive.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/srv/SendClientCustomCharacter.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/srv/SendClientCustomGraphicSeven.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/srv/SendDebugInfo.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/srv/SendErrorInfo.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/srv/SendHeartbeat.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/srv/SendAutoaimData.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/srv/SendChassisData.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/srv/SendGyroscopeData.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/srv/SendDbugData.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/srv/SendJointState.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/srv/SendJointControl.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/srv/SendJointCalibration.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/srv/SendRobotCommunication.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/srv/SendBoardAlpha.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_adapter/node_interface/srv/SendBoardBeta.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/msg/GraphicDataType.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/msg/DebugDataType.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/msg/GameStatus.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/msg/GameResult.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/msg/HealthPoint.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/msg/DartStatus.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/msg/IcraBuffDebuffZoneStatus.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/msg/EventData.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/msg/SupplyProjectileAction.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/msg/RefereeWarning.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/msg/DartRemainingTime.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/msg/GameRobotStatus.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/msg/PowerHeatData.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/msg/GameRobotPos.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/msg/BuffInfo.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/msg/AerialRobotEnergy.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/msg/RobotHurt.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/msg/ShootData.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/msg/BulletRemaining.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/msg/RfidStatus.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/msg/DartClientCmds.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/msg/ClientCustomGraphicDelete.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/msg/ClientCustomGraphicSingle.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/msg/ClientCustomGraphicDouble.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/msg/ClientCustomGraphicFive.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/msg/ClientCustomCharacter.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/msg/ClientCustomGraphicSeven.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/msg/DebugInfo.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/msg/ErrorInfo.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/msg/Heartbeat.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/msg/AutoaimData.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/msg/ChassisData.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/msg/GyroscopeData.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/msg/DbugData.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/msg/JointState.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/msg/JointControl.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/msg/JointCalibration.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/msg/RobotCommunication.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/msg/BoardAlpha.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/msg" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/msg/BoardBeta.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/srv/SendGameStatus.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendGameStatus_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendGameStatus_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/srv/SendGameResult.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendGameResult_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendGameResult_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/srv/SendHealthPoint.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendHealthPoint_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendHealthPoint_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/srv/SendDartStatus.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendDartStatus_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendDartStatus_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/srv/SendIcraBuffDebuffZoneStatus.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendIcraBuffDebuffZoneStatus_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendIcraBuffDebuffZoneStatus_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/srv/SendEventData.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendEventData_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendEventData_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/srv/SendSupplyProjectileAction.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendSupplyProjectileAction_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendSupplyProjectileAction_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/srv/SendRefereeWarning.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendRefereeWarning_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendRefereeWarning_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/srv/SendDartRemainingTime.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendDartRemainingTime_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendDartRemainingTime_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/srv/SendGameRobotStatus.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendGameRobotStatus_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendGameRobotStatus_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/srv/SendPowerHeatData.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendPowerHeatData_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendPowerHeatData_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/srv/SendGameRobotPos.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendGameRobotPos_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendGameRobotPos_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/srv/SendBuffInfo.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendBuffInfo_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendBuffInfo_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/srv/SendAerialRobotEnergy.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendAerialRobotEnergy_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendAerialRobotEnergy_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/srv/SendRobotHurt.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendRobotHurt_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendRobotHurt_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/srv/SendShootData.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendShootData_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendShootData_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/srv/SendBulletRemaining.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendBulletRemaining_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendBulletRemaining_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/srv/SendRfidStatus.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendRfidStatus_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendRfidStatus_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/srv/SendDartClientCmds.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendDartClientCmds_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendDartClientCmds_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/srv/SendClientCustomGraphicDelete.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendClientCustomGraphicDelete_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendClientCustomGraphicDelete_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/srv/SendClientCustomGraphicSingle.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendClientCustomGraphicSingle_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendClientCustomGraphicSingle_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/srv/SendClientCustomGraphicDouble.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendClientCustomGraphicDouble_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendClientCustomGraphicDouble_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/srv/SendClientCustomGraphicFive.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendClientCustomGraphicFive_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendClientCustomGraphicFive_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/srv/SendClientCustomCharacter.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendClientCustomCharacter_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendClientCustomCharacter_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/srv/SendClientCustomGraphicSeven.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendClientCustomGraphicSeven_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendClientCustomGraphicSeven_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/srv/SendDebugInfo.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendDebugInfo_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendDebugInfo_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/srv/SendErrorInfo.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendErrorInfo_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendErrorInfo_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/srv/SendHeartbeat.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendHeartbeat_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendHeartbeat_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/srv/SendAutoaimData.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendAutoaimData_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendAutoaimData_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/srv/SendChassisData.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendChassisData_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendChassisData_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/srv/SendGyroscopeData.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendGyroscopeData_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendGyroscopeData_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/srv/SendDbugData.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendDbugData_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendDbugData_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/srv/SendJointState.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendJointState_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendJointState_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/srv/SendJointControl.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendJointControl_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendJointControl_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/srv/SendJointCalibration.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendJointCalibration_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendJointCalibration_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/srv/SendRobotCommunication.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendRobotCommunication_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendRobotCommunication_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/srv/SendBoardAlpha.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendBoardAlpha_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendBoardAlpha_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/srv/SendBoardBeta.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendBoardBeta_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/srv" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/srv/SendBoardBeta_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/node_interface")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/node_interface")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/environment" TYPE FILE FILES "/opt/ros/humble/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/environment" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/environment" TYPE FILE FILES "/opt/ros/humble/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/environment" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/ament_cmake_environment_hooks/path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/ament_cmake_environment_hooks/local_setup.bash")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/ament_cmake_environment_hooks/local_setup.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/ament_cmake_environment_hooks/package.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/ament_cmake_index/share/ament_index/resource_index/packages/node_interface")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/node_interface/cmake/export_node_interface__rosidl_generator_cExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/node_interface/cmake/export_node_interface__rosidl_generator_cExport.cmake"
         "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/CMakeFiles/Export/share/node_interface/cmake/export_node_interface__rosidl_generator_cExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/node_interface/cmake/export_node_interface__rosidl_generator_cExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/node_interface/cmake/export_node_interface__rosidl_generator_cExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/cmake" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/CMakeFiles/Export/share/node_interface/cmake/export_node_interface__rosidl_generator_cExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/cmake" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/CMakeFiles/Export/share/node_interface/cmake/export_node_interface__rosidl_generator_cExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/node_interface/cmake/export_node_interface__rosidl_typesupport_fastrtps_cExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/node_interface/cmake/export_node_interface__rosidl_typesupport_fastrtps_cExport.cmake"
         "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/CMakeFiles/Export/share/node_interface/cmake/export_node_interface__rosidl_typesupport_fastrtps_cExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/node_interface/cmake/export_node_interface__rosidl_typesupport_fastrtps_cExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/node_interface/cmake/export_node_interface__rosidl_typesupport_fastrtps_cExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/cmake" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/CMakeFiles/Export/share/node_interface/cmake/export_node_interface__rosidl_typesupport_fastrtps_cExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/cmake" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/CMakeFiles/Export/share/node_interface/cmake/export_node_interface__rosidl_typesupport_fastrtps_cExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/node_interface/cmake/node_interface__rosidl_typesupport_introspection_cExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/node_interface/cmake/node_interface__rosidl_typesupport_introspection_cExport.cmake"
         "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/CMakeFiles/Export/share/node_interface/cmake/node_interface__rosidl_typesupport_introspection_cExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/node_interface/cmake/node_interface__rosidl_typesupport_introspection_cExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/node_interface/cmake/node_interface__rosidl_typesupport_introspection_cExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/cmake" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/CMakeFiles/Export/share/node_interface/cmake/node_interface__rosidl_typesupport_introspection_cExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/cmake" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/CMakeFiles/Export/share/node_interface/cmake/node_interface__rosidl_typesupport_introspection_cExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/node_interface/cmake/node_interface__rosidl_typesupport_cExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/node_interface/cmake/node_interface__rosidl_typesupport_cExport.cmake"
         "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/CMakeFiles/Export/share/node_interface/cmake/node_interface__rosidl_typesupport_cExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/node_interface/cmake/node_interface__rosidl_typesupport_cExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/node_interface/cmake/node_interface__rosidl_typesupport_cExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/cmake" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/CMakeFiles/Export/share/node_interface/cmake/node_interface__rosidl_typesupport_cExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/cmake" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/CMakeFiles/Export/share/node_interface/cmake/node_interface__rosidl_typesupport_cExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/node_interface/cmake/export_node_interface__rosidl_generator_cppExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/node_interface/cmake/export_node_interface__rosidl_generator_cppExport.cmake"
         "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/CMakeFiles/Export/share/node_interface/cmake/export_node_interface__rosidl_generator_cppExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/node_interface/cmake/export_node_interface__rosidl_generator_cppExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/node_interface/cmake/export_node_interface__rosidl_generator_cppExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/cmake" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/CMakeFiles/Export/share/node_interface/cmake/export_node_interface__rosidl_generator_cppExport.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/node_interface/cmake/export_node_interface__rosidl_typesupport_fastrtps_cppExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/node_interface/cmake/export_node_interface__rosidl_typesupport_fastrtps_cppExport.cmake"
         "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/CMakeFiles/Export/share/node_interface/cmake/export_node_interface__rosidl_typesupport_fastrtps_cppExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/node_interface/cmake/export_node_interface__rosidl_typesupport_fastrtps_cppExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/node_interface/cmake/export_node_interface__rosidl_typesupport_fastrtps_cppExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/cmake" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/CMakeFiles/Export/share/node_interface/cmake/export_node_interface__rosidl_typesupport_fastrtps_cppExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/cmake" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/CMakeFiles/Export/share/node_interface/cmake/export_node_interface__rosidl_typesupport_fastrtps_cppExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/node_interface/cmake/node_interface__rosidl_typesupport_introspection_cppExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/node_interface/cmake/node_interface__rosidl_typesupport_introspection_cppExport.cmake"
         "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/CMakeFiles/Export/share/node_interface/cmake/node_interface__rosidl_typesupport_introspection_cppExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/node_interface/cmake/node_interface__rosidl_typesupport_introspection_cppExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/node_interface/cmake/node_interface__rosidl_typesupport_introspection_cppExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/cmake" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/CMakeFiles/Export/share/node_interface/cmake/node_interface__rosidl_typesupport_introspection_cppExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/cmake" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/CMakeFiles/Export/share/node_interface/cmake/node_interface__rosidl_typesupport_introspection_cppExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/node_interface/cmake/node_interface__rosidl_typesupport_cppExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/node_interface/cmake/node_interface__rosidl_typesupport_cppExport.cmake"
         "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/CMakeFiles/Export/share/node_interface/cmake/node_interface__rosidl_typesupport_cppExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/node_interface/cmake/node_interface__rosidl_typesupport_cppExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/node_interface/cmake/node_interface__rosidl_typesupport_cppExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/cmake" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/CMakeFiles/Export/share/node_interface/cmake/node_interface__rosidl_typesupport_cppExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/cmake" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/CMakeFiles/Export/share/node_interface/cmake/node_interface__rosidl_typesupport_cppExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/node_interface/cmake/export_node_interface__rosidl_generator_pyExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/node_interface/cmake/export_node_interface__rosidl_generator_pyExport.cmake"
         "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/CMakeFiles/Export/share/node_interface/cmake/export_node_interface__rosidl_generator_pyExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/node_interface/cmake/export_node_interface__rosidl_generator_pyExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/node_interface/cmake/export_node_interface__rosidl_generator_pyExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/cmake" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/CMakeFiles/Export/share/node_interface/cmake/export_node_interface__rosidl_generator_pyExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/cmake" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/CMakeFiles/Export/share/node_interface/cmake/export_node_interface__rosidl_generator_pyExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/cmake" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/rosidl_cmake-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/cmake" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/ament_cmake_export_include_directories/ament_cmake_export_include_directories-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/cmake" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/ament_cmake_export_libraries/ament_cmake_export_libraries-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/cmake" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/ament_cmake_export_targets/ament_cmake_export_targets-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/cmake" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/rosidl_cmake_export_typesupport_targets-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/cmake" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/ament_cmake_export_dependencies/ament_cmake_export_dependencies-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/cmake" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/rosidl_cmake/rosidl_cmake_export_typesupport_libraries-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface/cmake" TYPE FILE FILES
    "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/ament_cmake_core/node_interfaceConfig.cmake"
    "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/ament_cmake_core/node_interfaceConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/node_interface" TYPE FILE FILES "/home/amwhisper/ros/workspace/nbr2_ws/src/node_interface/package.xml")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/node_interface__py/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/amwhisper/ros/workspace/nbr2_ws/build/node_interface/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
