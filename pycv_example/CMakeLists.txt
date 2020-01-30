project(boost_opencv)

include_directories(${OpenCV_INCLUDE_DIRS} ${Boost_INCLUDE_DIRS} ${PYTHON_INCLUDE_DIRS} ${NUMPY_INCLUDE_DIR})
add_library(pycv_example SHARED main.cpp) 
set_target_properties(pycv_example PROPERTIES PREFIX "")
set_target_properties(pycv_example PROPERTIES SUFFIX ".so")
target_link_libraries(pycv_example ${OpenCV_LIBS} ${Boost_LIBRARIES} ${PYTHON_LIBRARIES})