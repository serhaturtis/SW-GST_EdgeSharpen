cmake_minimum_required(VERSION 3.10.2)
project(edgesharpen VERSION 1.0 DESCRIPTION "Edge sharpening filter for gstreamer.")

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fPIC")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fPIC")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include(GNUInstallDirs)

find_package(PkgConfig REQUIRED)

pkg_search_module(GST REQUIRED gstreamer-1.0>=1.4
    gstreamer-sdp-1.0>=1.4
    gstreamer-video-1.0>=1.4
    gstreamer-app-1.0>=1.4)

include_directories(.)
include_directories(./include)
include_directories(/usr/local/include)
include_directories(/usr/local/include/opencv4)
link_directories(/usr/local/lib)

add_library(edgesharpen SHARED gstedgesharpen.c src/gstedgesharpen_link.cpp)
set_target_properties(edgesharpen PROPERTIES VERSION ${PROJECT_VERSION})

target_include_directories(edgesharpen PRIVATE ${GST_INCLUDE_DIRS})
target_link_libraries(edgesharpen ${GST_LIBRARIES})
target_link_libraries(edgesharpen gstvideo-1.0 opencv_core opencv_imgcodecs opencv_imgproc opencv_highgui opencv_video opencv_videoio)
