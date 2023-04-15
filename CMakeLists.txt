cmake_minimum_required(VERSION 3.25)
project(Lesson_9)

set(CMAKE_CXX_STANDARD 14)

add_executable(Lesson_9
        main.cpp DemographicInfo.h DemographicInfo.cpp cmake-build-debug/Lesson_9_Data.txt DemographicNode.h DemographicNode.h DemographicNode.cpp DemographicLL.h DemographicLL.cpp)
