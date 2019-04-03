#include <stdio.h>
#include <opencv2/opencv.hpp>
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"


int main(int argc, char** argv )
{
	cv::Mat image;
	image = cv::imread( "mau.jpg", 1 );
	if ( !image.data )
	{
		printf("No image data \n");
		return -1;
	}
	cv::Mat newcon_image = cv::Mat::zeros(image.size(), image.type());

	for( int y = 0; y < image.rows; y++ ) {
		for( int x = 0; x < image.cols; x++ ) {
			for( int c = 0; c < image.channels(); c++ ) {
				newcon_image.at<cv::Vec3b>(y,x)[c] =
						cv::saturate_cast<uchar>( 2*image.at<cv::Vec3b>(y,x)[c] + 20 );
			}
		}
	}
	cv::imshow("Original Image", image);
	cv::imshow("New Image", newcon_image);
	cv::waitKey(0);

	return 0;
}