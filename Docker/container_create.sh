#!/bin/bash
xhost +local:docker
docker run -it --name $1 --ulimit rtprio=99 --cap-add=sys_nice --privileged --env="DISPLAY" --network="host" --env="QT_X11_NO_MITSHM=1" --volume="/tmp/.X11-unix:/tmp/.X11-unix:rw" --volume="/home/proroc2/Desktop/ws/ros2_ws:/home/ros2_ws" --volume="/dev/ttyACM0:/dev/ttyACM0" $2 /bin/bash
