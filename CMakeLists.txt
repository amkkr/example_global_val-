cmake_minimum_required(VERSION 3.5.0)
project(example_global_val VERSION 0.1.0 LANGUAGES C)

add_executable(test main.c hoge/hoge.c)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
