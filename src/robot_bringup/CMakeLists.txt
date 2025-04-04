cmake_minimum_required(VERSION 3.8)
project(robot_bringup)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(xacro REQUIRED)
find_package(ament_cmake_python REQUIRED)
find_package(rclpy REQUIRED)

install(
  DIRECTORY robot_desc launch rviz config world maps robot_bringup
  DESTINATION share/${PROJECT_NAME}
)

install(PROGRAMS 
  robot_bringup/viz_server.py
  robot_bringup/log_traj_viz.py
  DESTINATION lib/${PROJECT_NAME}  
)

ament_python_install_package(${PROJECT_NAME})

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
