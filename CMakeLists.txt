cmake_minimum_required(VERSION 3.10.2)
project(SP4)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/${OUTPUT_DEBUG})

message("Runtime Folder: ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}")
message("Output Debug: ${OUTPUT_DEBUG}")

add_executable(SP4
        main.cpp
        test_1.cpp
        test_2.cpp
        test_3.cpp
        test_4.cpp
        test_5.cpp
        SP4.cpp SP4.h)

configure_file(test_1.in ${CMAKE_RUNTIME_OUTPUT_DIRECTORY} COPYONLY)
configure_file(test_2.in ${CMAKE_RUNTIME_OUTPUT_DIRECTORY} COPYONLY)
configure_file(test_3.in ${CMAKE_RUNTIME_OUTPUT_DIRECTORY} COPYONLY)
configure_file(test_4.in ${CMAKE_RUNTIME_OUTPUT_DIRECTORY} COPYONLY)
configure_file(test_5.in ${CMAKE_RUNTIME_OUTPUT_DIRECTORY} COPYONLY)
