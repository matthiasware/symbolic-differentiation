cmake_minimum_required(VERSION 3.11)
enable_testing()

find_package(doctest REQUIRED)

if(NOT TARGET symdiff)
  message(SEND_ERROR "\nNO TESTING TARGET!")
endif()

add_executable(main_test test.cc)
target_link_libraries(main_test
					  PRIVATE
					  doctest::doctest
					  symdiff)

add_test(test_test main_test)