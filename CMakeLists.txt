cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 11) # Feel free to use whatever standard you want

# GDNative Binding. Creates "godot-cpp" library target.
add_subdirectory(libs/godot-cpp)

# User codes
add_subdirectory(src)

