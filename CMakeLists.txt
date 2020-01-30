cmake_minimum_required(VERSION 3.7)

project(pycv_boilerplate)

set(Boost_USE_MULTITHREADED TRUE)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -Wno-unused-function -O3 -msse4")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -O3 -Wno-unknown-pragmas -Wall -msse4")
set(CMAKE_POSITION_INDEPENDENT_CODE ON)
set(CMAKE_SHARED_LINKER_FLAGS "-shared -fPIC")
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_CURRENT_SOURCE_DIR}/cmake-modules)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/lib)

find_package(OpenCV REQUIRED)
find_package(Boost REQUIRED COMPONENTS python37 numpy37)
include_directories("include")
# find_package(PythonLibs 3.7 REQUIRED)
# in the case of homebrew python
set(PYTHON_INCLUDE_DIRS "/usr/local/var/pyenv/versions/3.7.0/include/python3.7m")
set(PYTHON_LIBRARIES "/usr/local/var/pyenv/versions/3.7.0/lib/libpython3.7m.dylib")

find_package(PythonInterp REQUIRED)
find_package(NumPy REQUIRED)

add_subdirectory(pycv_example)
