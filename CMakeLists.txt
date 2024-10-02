cmake_minimum_required(VERSION 3.10)

# set the project name
project(logc VERSION 0.1.0 LANGUAGES C)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
include_directories("./src/")
option(LOGC_BUILD_TEST "Builds a test file." OFF)
add_library(logc STATIC ./src/log.c ./src/log.h)

if (LOGC_BUILD_TEST)
  add_executable(test ./test/main.c)
  target_link_libraries(test logc)
endif(LOGC_BUILD_TEST)
