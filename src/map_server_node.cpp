#include <ros/ros.h>
#include <my_pkg/PointHeight.h>

bool map_height(my_pkg::PointHeight::Request  &req,
         my_pkg::PointHeight::Response &res)
{
  res.z = 0;
  return true;
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "map_server");
  ros::NodeHandle n;

  ros::ServiceServer service = n.advertiseService("point_height", map_height);
  ROS_INFO("Map server ready.");
  ros::spin();

  return 0;
}
