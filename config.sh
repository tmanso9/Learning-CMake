#!/bin/sh

mkdir -p out/build/ && cmake -DGLFW_BUILD_DOCS=OFF -DBUILD_SHARED_LIBS=ON -S . -B out/build/