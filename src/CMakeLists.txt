# dependencies

# Target(s)
set(SRCS
  player.cpp
  player.h
  gdlibrary.cpp
)
add_library(player1 SHARED ${SRCS})

target_link_libraries(player1 godot-cpp)
