cmake_minimum_required(VERSION 2.8.4)

project(b64_sample)

set(SOURCE_FILES sample.c src/b64.c)

include_directories("/usr/local/include" ${PROJECT_SOURCE_DIR}/src)

link_directories("/usr/local/lib")

add_executable(b64_sample ${SOURCE_FILES})
