#!/bin/bash

#sudo cp ./build/libedgesharpen.so.1.0 /lib/aarch64-linux-gnu/gstreamer-1.0/libedgesharpen.so
sudo cp ./build/libedgesharpen.so.1.0 /usr/lib/x86_64-linux-gnu/gstreamer-1.0/libedgesharpen.so
sudo ldconfig
gst-launch-1.0 -v videotestsrc ! edgesharpen ! videoconvert ! ximagesink
