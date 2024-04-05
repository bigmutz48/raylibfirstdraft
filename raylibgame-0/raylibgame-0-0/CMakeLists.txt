cmake_minimum_required(VERSION 3.10)
project(Raylibproject VERSION 0.00)


# set c++

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# add our files

set(SOURCES
  main.cpp
  )

# add executable  target??

add_executable(YourExecutableName ${SOURCES})
