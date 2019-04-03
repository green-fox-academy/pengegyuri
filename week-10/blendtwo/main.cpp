#include <stdio.h>
#include <opencv2/opencv.hpp>


int main(int argc, char** argv )
{
	cv::Mat image1, image2, blended;
	image1 = cv::imread( "../mau.jpg", 1 );
	image2 = cv::imread( "../fish.jpg", 1 );

	if ( !image1.data || !image2.data )
	{
		printf("No image data \n");
		return -1;
	}
	cv::resize(image2, image2, image1.size());
	cv::addWeighted( image1, 0.5, image2, 0.5, 0.0, blended);
	cv::imshow("Display Image", blended);
	cv::waitKey(0);

	return 0;
}