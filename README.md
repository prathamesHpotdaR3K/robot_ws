# Trajectory Logging and Visualization 
This directory is built to demonstrate how to log the trajectory data of the robot while it is moving into a .csv file and visualize it with the help of service server which takes the name of csv file and duration for which it has to logged and saves it into the file at particular destination.
Visualization can be done with the help of other node by passing path to csv file as parameter and can be visualized as MarkerArray message which is standard message for visualization and is supported on RViz.

## Repository Structure
Here's an overview of the directory structure:
```
robot_ws/
├── demo_video/                 # Configuration files for Nav2, robot parameters, and sensors
├── src/                        # Launch files for starting simulation, navigation, and localization
    ├── robot_bringup
        ├── config              # yaml configuration files 
        ├── launch              # launch files for launching robot, map and localization
        ├── maps                # pre-built map
        ├── robot_bringup       # code for visualization node and logging server
        ├── robot_desc          # urdf files
        ├── rviz                # rviz configuration file
        ├── trajectory_log      # log files of different robot trajectories
        ├── world               # world file
    ├── robot_msg
        ├── srv                 # custom srv config

```

## To run the simulation:
Launch robot with 
```ros2 launch robot_bringup robot_gazebo_classic.launch.py```
Launch map and amcl localization
```ros2 launch robot_bringup map_and_localization.launch.py```
Launch nav2 for autonomously navigating robot
```ros2 launch nav2_bringup navigation_launch.py use_sim_time:=true```
Start service server for logging trajectory data
```ros2 run robot_bringup viz_server.py```
Make sure to give a goal pose and robot is navigating

Call service server to start logging, give name of file and add .csv at the ending example: my_log.csv and give time for how log you want to log the data (in sec)
```ros2 service call /save_trajectory robot_msg/srv/TrajTime "filename: 'my_log.csv' time: 90```
Node will start adding pose data and will inform once time is over.

To visualize data, run vizualization node and give name of log file to be visualized to filepath parameter
```ros2 run robot_bringup log_traj_viz.py --ros-args -p ./src/robot_bringup/trajectory_log/my_robot_traj_3.csv ```
Add MarkerArray message from diff_cont/trajectory to see visualization

### How does the logging server works?
Visualization server continuously reads the filtered odometry data published by robot_localization node which fuses imu data with odometry to get best results. We need to subscribe to the odometry/filtered topic in order to get filtered data and callback function is invoked each time pose data is read from topic. This callback message then store the valuse in pose object. 
When the service is called, a csv file is generated with the provided filename and name of the file on succesful generation is returned while timer object is created which asynchronously calls another function which takes stores the pose data into file at the interval of time decided by the timer. Once the time specified by user is reached, it stops saving the data to file and cancels the timer. Now we have a log file with the pose data of robot throughout its travel from one point to other.

### How does visualization node works?
It is simple node which published on the diff_cont/trajectory topic the pose data of robot. It used timer object which calls a function which is invoked at particular intervals of time. Every time the function is called, it reads from the log file whose path is given by user in a filepath parameter line by line and published it as a MarkerArray message. This can be visualized in RViz, by adding the message from the topic to visualize. 
