cmake_minimum_required(VERSION 3.11)
project(symbolic-differentiation)

enable_testing()

add_subdirectory(symdiff)
add_subdirectory(tests)

add_executable(main main.cc)
target_link_libraries(main PUBLIC symdiff)