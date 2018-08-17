cmake_minimum_required(VERSION 2.8.3)
project(simstage_groupJ)
# python scripts included

## Compile as C++11, supported in ROS Kinetic and newer
# add_compile_options(-std=c++11)

# Declare our catkin package.
catkin_package()

# Specify locations of header files.
#include_directories(include ${catkin_INCLUDE_DIRS})

# Declare the executable, along with its source files.
#add_executable(reactive_navigation src/reactive_navigation.cpp)

# Specify libraries against which to link.
#target_link_libraries(reactive_navigation ${catkin_LIBRARIES})

# PYTHON INIT

set(CATKIN_DEPS geometry_msgs rospy sensor_msgs std_srvs)
set(SYS_DEPS python-sys)

# find_package(catkin REQUIRED COMPONENTS ${CATKIN_DEPS})

find_package(catkin REQUIRED COMPONENTS
  geometry_msgs
  nav_msgs
  roscpp
  rospy
  sensor_msgs
  stage_ros
  std_msgs
  tf
)

catkin_python_setup()

catkin_package(
        DEPENDS ${SYS_DEPS}
        CATKIN_DEPENDS ${CATKIN_DEPS}
)

catkin_install_python(PROGRAMS
        scripts/reactive_nav.py

        DESTINATION ${CATKIN_PACKAGE_PYTHON_DESTINATION}
        )
