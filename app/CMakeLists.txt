cmake_minimum_required(VERSION 3.4.1)
add_library( # Sets the name of the library.
        native-lib
        SHARED
        src/main/cpp/native-lib.cpp)
include_directories(src/main/cpp/include)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -L${CMAKE_SOURCE_DIR}/src/main/cpp/libs/${ANDROID_ABI}")


message("hhhhhhhhhhhhh ${CMAKE_SOURCE_DIR}")
target_link_libraries(native-lib
        avcodec avfilter avformat avutil swresample swscale
        log)