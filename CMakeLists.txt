project(borrar)

cmake_minimum_required(VERSION 2.8)


#set the default path for built executables to the "bin" directory
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
#set the default path for built libraries to the "lib" directory
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

find_package(OpenGL)
find_package(X11)
find_package(ZLIB)

#add_executable(borrar main.cpp)
INCLUDE_DIRECTORIES(
    "/usr/include/"
    "/usr/include/irrlicht"
    ${PROJECT_SOURCE_DIR}/include
)


FILE(GLOB SRCS src/*.cpp)
FILE(GLOB HDRS include/*.h)

ADD_EXECUTABLE(borrar
   ${SRCS}
   ${HDRS}
)

TARGET_LINK_LIBRARIES(borrar
    "/usr/lib/libIrrlicht.so"
)


set(CMAKE_CXX_FLAGS "-g -Wall")

