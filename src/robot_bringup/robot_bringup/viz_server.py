#!/usr/bin/env python3

import os
import csv
import rclpy
from rclpy.node import Node
from robot_msg.srv import TrajTime
from nav_msgs.msg import Odometry
from geometry_msgs.msg import Pose
from visualization_msgs.msg import MarkerArray, Marker

class VizServer(Node):
    def __init__(self):
        super().__init__('viz_server')

        self.declare_parameter('traj_pub_topic', 'diff_cont/trajectory')
        self.declare_parameter('odom_sub_topic', 'odometry/filtered')
        self.traj_pub_topic = self.get_parameter('traj_pub_topic').value
        self.odom_sub_topic = self.get_parameter('odom_sub_topic').value

        self.traj_pub = self.create_publisher(MarkerArray, self.traj_pub_topic, 10)
        self.sub_ = self.create_subscription(Odometry, self.odom_sub_topic, self.markerCallback, 10)

        self.marker_arr = MarkerArray()
        self.marker_id = 0
        self.ns = "robot_trajectory" 

        self.msg_sub = self.create_subscription(Odometry, self.odom_sub_topic, self.msgCallback, 10)
        self.service = self.create_service(TrajTime, 'save_trajectory', self.serviceCallback)

        self.get_logger().info('Service to save robot trajectory ready!')
        self.start_time = self.get_clock().now()

    def markerCallback(self, msg):
        marker = Marker()
        marker.header.frame_id = "map"
        marker.header.stamp = self.get_clock().now().to_msg()
        marker.ns = self.ns
        marker.id = self.marker_id
        marker.type = Marker.SPHERE
        marker.action = Marker.ADD
        marker.pose = msg.pose.pose
        marker.scale.x = 0.1
        marker.scale.y = 0.1
        marker.scale.z = 0.1
        marker.color.r = 1.0 
        marker.color.g = 0.0
        marker.color.b = 0.0
        marker.color.a = 1.0  
        self.marker_arr.markers.append(marker)
        self.traj_pub.publish(self.marker_arr)
        self.marker_id += 1

    def msgCallback(self, msg):
        self.pose = Pose()
        self.pose.position = msg.pose.pose.position 

    def serviceCallback(self, req, res):
        self.get_logger().info(f'Duration for saving the trajectory: {req.time}')
        
        self.file_name = req.filename
        folderpath = './src/robot_bringup/trajectory_log'
        file = os.path.join(folderpath, self.file_name)
        self.logfile = open(file, mode='a', newline='')
        self.file_writer = csv.writer(self.logfile)
        self.file_writer.writerow(['Position-x', 'Position-y', 'Position-z'])

        self.target_time = self.get_clock().now().nanoseconds + int(req.time*1e9)
                    
        self.get_logger().info('Data collected successfully!')

        self.timer = self.create_timer(0.1, self.saveTrajectory)

        res.result = f'Trajectory saved in {self.file_name}!'
        return res
    
    def saveTrajectory(self):
        current_time = self.get_clock().now().nanoseconds

        if current_time < self.target_time:
            if self.pose:
                self.file_writer.writerow([
                    self.pose.position.x, 
                    self.pose.position.y, 
                    self.pose.position.z
                ])
                self.get_logger().warn('Pose added to log file!')
            else:
                self.get_logger().info('Pose data not available')
        else:
            self.timer.cancel()
            self.get_logger().info('Trajectory saved!')


def main():
    rclpy.init()
    node = VizServer()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()



