cmake_minimum_required(VERSION 3.0)

add_definitions(-std=c++11)

include_directories(FierceVenom)

option(ENABLE_FIERCE_VENOM "" ON)
if(ENABLE_FIERCE_VENOM)
    add_subdirectory(FierceVenom)
endif()

option(ENABLE_AGGRESSIVE_ROADRUNNER "" ON)
if(ENABLE_AGGRESSIVE_ROADRUNNER)
    add_subdirectory(AggressiveRoadrunner)
endif()