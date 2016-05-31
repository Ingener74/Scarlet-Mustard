cmake_minimum_required(VERSION 3.0)

set(AggressiveRoadrunner_SOURCES
    main.cpp
)

add_executable(AggressiveRoadrunner ${AggressiveRoadrunner_SOURCES})
target_link_libraries(AggressiveRoadrunner FierceVenom)