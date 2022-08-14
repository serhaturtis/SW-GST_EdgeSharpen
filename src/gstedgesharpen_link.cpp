#include <opencv2/opencv.hpp>

extern "C"
{

int sharpen_filter(int height, int width, uint8_t *i, uint8_t *o)
{
	cv::Mat kernel = (cv::Mat_<double>(3, 3) << 0, -1, 0, -1, 5, -1, 0, -1, 0);
	cv::Mat input(height, width, CV_8UC3, i);
	cv::Mat output(height, width, CV_8UC3, o);
	cv::filter2D(input, output, -1, kernel, cv::Point(-1, -1), 0.0, cv::BORDER_REFLECT_101);

	return 0;
}

}
