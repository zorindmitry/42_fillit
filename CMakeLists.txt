cmake_minimum_required(VERSION 3.9)
project(42_fillit)

set(CMAKE_C_STANDARD 99)

add_executable(42_fillit
        src/main.c
        src/read.c
        libft/libft.a)

target_link_libraries(42_fillit ${CMAKE_SOURCE_DIR}/libft/libft.a)