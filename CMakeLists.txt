cmake_minimum_required(VERSION 2.8)

find_package(Qt4 REQUIRED)

include_directories(${QT_QTCORE_INCLUDE_DIR})
set(CMAKE_AUTOMOC TRUE)

add_library(automoctest SHARED automoctest.cpp)
target_link_libraries(automoctest ${QT_QTCORE_LIBRARY})