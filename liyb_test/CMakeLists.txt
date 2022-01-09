cmake_minimum_required(VERSION 3.0.2)
project(liyb_test)

find_package(catkin REQUIRED COMPONENTS
    roscpp
    rospy
    std_msgs
    liyb_msg)

catkin_package(CATKIN_DEPENDS liyb_msg)

include_directories(${catkin_INCLUDE_DIRS})

add_executable(${PROJECT_NAME}_node src/main.cpp)

target_link_libraries(${PROJECT_NAME}_node ${catkin_LIBRARIES})
