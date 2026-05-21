cmake_minimum_required(VERSION 3.20)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
project(nub)

function(nub_target_policies target_name)
    target_compile_features(${target_name} PUBLIC cxx_std_17)
    target_compile_options(${target_name} PUBLIC 
        -Wall -Wextra -pedantic
    )
endfunction(nub_target_policies target_name)

set(NUB_SRCDIR "${CMAKE_CURRENT_SOURCE_DIR}/src")
add_subdirectory("${NUB_SRCDIR}")