#include "ros/ros.h"
#include "liyb_msg/id.h"


int main(int argc, char** argv){
    ros::init(argc, argv, "id_msg_test");
    ros::NodeHandle nh;

    ros::Publisher id_pub;
    id_pub = nh.advertise<liyb_msg::id>("id", 2);

    ros::Rate r(5);

    while(ros::ok()){
        liyb_msg::id id;

        id.first_name = "yongbing";
        id.last_name = "li";
        id.age = 30;
        id.score = 99.99;

        id_pub.publish(id);

        ros::spinOnce();

        r.sleep();
    }

    return 0;
}
