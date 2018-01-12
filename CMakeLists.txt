cmake_minimum_required(VERSION 3.9)
project(42_fillit)

set(CMAKE_CXX_STANDARD 11)

add_executable(42_fillit
        includes/fillit.h
        libft/includes/libft.h
        src/main.c
        src/read.c)

link_directories(42_fillit/libft)
target_link_libraries(42_fillit libft)
