FROM ros:humble

SHELL ["/bin/bash", "-c"] 

RUN apt-get update -y && apt-get install -y --allow-unauthenticated \
    clang-14 \
    clang-format-14 \
    clang-tidy-14 \
    python3-pip \
    libpoco-dev \
    libeigen3-dev \
    ros-humble-hardware-interface \
    ros-humble-generate-parameter-library \
    ros-humble-ros2-control-test-assets \
    ros-humble-controller-manager \
    ros-humble-control-msgs \
    ros-humble-xacro \
    ros-humble-angles \
    ros-humble-ros2-control \
    ros-humble-realtime-tools \
    ros-humble-control-toolbox \
    ros-humble-moveit \
    ros-humble-ros2-controllers \
    ros-humble-joint-state-publisher \
    ros-humble-joint-state-publisher-gui \
    ros-humble-ament-cmake \
    ros-humble-ament-cmake-clang-format \
    python3-colcon-common-extensions \
    libpoco-dev \
    libeigen3-dev \
    build-essential \
    cmake \
    git \
    nano \
    python3-pip


RUN pip3 install --upgrade pip

WORKDIR /home
RUN git clone --recursive https://github.com/frankaemika/libfranka --branch 0.13.2

WORKDIR /home/libfranka
RUN mkdir /home/libfranka/build
WORKDIR /home/libfranka/build

RUN cmake -DCMAKE_BUILD_TYPE=Release -DBUILD_TESTS=OFF ..
RUN cmake --build . -j$(nproc)
RUN cpack -G DEB
RUN dpkg -i libfranka-*.deb

RUN mkdir -p /home/ros2_ws/src
WORKDIR /home/ros2_ws
# RUN git clone https://github.com/frankaemika/franka_ros2.git src/franka_ros2
# RUN source /opt/ros/humble/setup.bash && colcon build --cmake-args -DCMAKE_BUILD_TYPE=Release
RUN echo "source /opt/ros/humble/setup.bash" >> ~/.bashrc
RUN echo "source /home/ros2_ws/install/setup.bash" >> ~/.bashrc

