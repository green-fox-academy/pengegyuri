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
	cv::cvtColor(image, image, cv::COLOR_RGB2GRAY);
	cv::imshow("Display Image", image);
	cv::waitKey(0);

	return 0;
}