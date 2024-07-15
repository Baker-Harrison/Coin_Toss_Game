cmake_minimum_required(VERSION 3.26)
project(Coin_Toss_Game)

set(CMAKE_CXX_STANDARD 17)

add_executable(Coin_Toss_Game main.cpp
        src/Coin.cpp
        include/Coin.h
        src/Game.cpp
        include/Game.h
)
