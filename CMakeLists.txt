cmake_minimum_required(VERSION 3.20)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(NUB_ROOT_DIR "${CMAKE_CURRENT_SOURCE_DIR}")
set(NUB_CMAKE_DIR "${NUB_ROOT_DIR}/cmake")
set(NUB_SRC_DIR "${NUB_ROOT_DIR}/src")

list(APPEND CMAKE_MODULE_PATH "${NUB_CMAKE_DIR}")

project(nub
    VERSION 0.1.0
    DESCRIPTION "Yet another JavaScript Runtime"
)

include(NubHelper)
include(NubBuild)