cmake_minimum_required(VERSION 3.0)

set(FierceVenom_SOURCES
    Base.cpp
    Base.h
    Delegate.cpp
    Delegate.h
)

add_library(FierceVenom ${FierceVenom_SOURCES})
