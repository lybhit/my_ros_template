cmake_minimum_required(VERSION 3.0.2)
project(liyb_msg)

set(PACKAGE_DEPENDENCIES
    geometry_msgs
    std_msgs
    sensor_msgs
    nav_msgs
)
find_package(catkin REQUIRED COMPONENTS
    message_generation
    ${PACKAGE_DEPENDENCIES})

add_message_files(
    FILES
    id.msg
	)

generate_messages(DEPENDENCIES ${PACKAGE_DEPENDENCIES})

catkin_package(CATKIN_DEPENDS message_runtime ${PACKAGE_DEPENDENCIES})
