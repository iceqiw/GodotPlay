cmake_minimum_required(VERSION 3.10)

# GDNative Binding. Creates "godot-cpp" library target.
add_subdirectory(libs/godot-cpp)

# User codes
add_subdirectory(src)

