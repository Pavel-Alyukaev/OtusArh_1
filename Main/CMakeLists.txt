cmake_minimum_required(VERSION 3.24)
project(Arh_1)

set(CMAKE_CXX_STANDARD 20)

add_executable(Arh_1 src/main.cpp)
set_target_properties( ${PROJECT_NAME} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${BIN_DIR} )

target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/Lib/include)

target_link_libraries(${PROJECT_NAME} PRIVATE lib)

if (MSVC)
    target_compile_options(${PROJECT_NAME} PRIVATE
            /W4
            )
else ()
    target_compile_options(${PROJECT_NAME} PRIVATE
            -Wall -Wextra -pedantic -Werror
            )
endif()