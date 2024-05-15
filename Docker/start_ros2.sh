#!/bin/bash
xhost +local:docker
docker start $1
docker exec -it $1 /bin/bash
