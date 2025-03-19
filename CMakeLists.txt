cmake_minimum_required(VERSION 3.10)
project(OrbitalSimulation)

# Use C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Find eigen lib
find_package(Eigen3 REQUIRED)

# Add executable target
add_executable(orbital_sim
                src/main.cpp
                src/body.cpp
                src/simulator.cpp
                src/integrator.cpp)

# Include Eigen directory
target_include_directories(orbital_sim PRIVATE ${EIGEN3_INCLUDE_DIR})