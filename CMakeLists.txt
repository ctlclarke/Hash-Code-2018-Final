cmake_minimum_required(VERSION 3.0)
project(hashcode-final-2018)
file(GLOB_RECURSE sources src/*.cpp src/*.h)
add_executable(hashcode-final-2018 ${sources})

include(CheckCXXCompilerFlag)
CHECK_CXX_COMPILER_FLAG("-march=native" COMPILER_SUPPORTS_MARCH_NATIVE)
if(COMPILER_SUPPORTS_MARCH_NATIVE)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -march=native")
endif()

target_compile_options(hashcode-final-2018 PUBLIC -std=c++17 -Wall -O3)
#target_compile_options(hashcode-final-2018 PUBLIC -std=c++17 -Wall -pg)
target_link_libraries(hashcode-final-2018 PUBLIC pthread)
# Use the following for profiling:
#target_link_libraries(hashcode-final-2018 PUBLIC -pg)
target_include_directories(hashcode-final-2018 PUBLIC src)
