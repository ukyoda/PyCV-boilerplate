#include <boost/python.hpp>
#include "cv2.hpp"
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <string>

// BGRカラー画像をRGBに変換
PyObject* bgr2gray(PyObject* in_data)
{
  cv::Mat src;
  cv::Mat gray;
  pyopencv_to(in_data, src);
  cv::cvtColor(src, gray, cv::COLOR_BGR2GRAY);
  return pyopencv_from(gray);
}

PyObject* loadimage(const std::string& filename) {
  cv::Mat src = cv::imread(filename);
  return pyopencv_from(src);
}

#if (PY_VERSION_HEX >= 0x03000000)
    static void *init_ar() {
#else
    static void init_ar() {
#endif
    Py_Initialize();
    import_array();
    return NUMPY_IMPORT_ARRAY_RETVAL;
}

BOOST_PYTHON_MODULE(pycv_example)
{
  using namespace boost::python;
  init_ar();
  def("bgr2gray", &bgr2gray);
  def("loadimage", &loadimage);
}