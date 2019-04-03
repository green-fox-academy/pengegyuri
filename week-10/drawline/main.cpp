#include <stdio.h>
#include <opencv2/opencv.hpp>


int main(int argc, char** argv )
{
	cv::Mat image;
	image = cv::imread( "../mau.jpg", 1 );

	if ( !image.data )
	{
		printf("No image data \n");
		return -1;
	}

	cv::namedWindow("Display Image", cv::WINDOW_NORMAL);
	cv::line(image, cv::Point(image.cols / 2, 0), cv::Point(image.cols / 2, image.rows), cv::Scalar(0, 0, 150), 2);
	cv::imshow("Display Image", image);
	cv::waitKey(0);

	return 0;
}