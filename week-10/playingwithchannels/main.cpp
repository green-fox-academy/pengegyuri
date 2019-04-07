#include <stdio.h>
#include <opencv2/opencv.hpp>
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include <vector>


int main(int argc, char** argv )
{
	cv::Mat image, red_image, blured_red_image, gray_image, b_and_w_image, blured_gray, sharpened_img, drawing;
	image = cv::imread( "../fish.jpg", 1 );
	if ( !image.data )
	{
		printf("No image data \n");
		return -1;
	}
	image.copyTo(red_image);
	for( int y = 0; y < image.rows; y++ ) {
		for( int x = 0; x < image.cols; x++ ) {
			red_image.at<cv::Vec3b>( y, x)[0] = 0;
			red_image.at<cv::Vec3b>( y, x)[1] = 0;
			if (red_image.at<cv::Vec3b>( y, x)[2] < 50) {
				red_image.at<cv::Vec3b>( y, x)[2] = 0;
			}
		}
	}

	//blur(red_image, blured_red_image, cv::Size( 50, 50));
	//cv::addWeighted(red_image, 1.5, blured_red_image, -0.5, 0, sharpened_img);
	cv::cvtColor(red_image, gray_image, cv::COLOR_RGB2GRAY);
	blur(gray_image, blured_gray, cv::Size( 50, 50));
	cv::addWeighted(gray_image, 1.5, blured_gray, -0.5, 0, sharpened_img);
	blured_gray.copyTo(b_and_w_image);
	//std::vector<std::vector<cv::Point>> contours;
	//std::vector<cv::Vec4i> hierarchy;
	//cv::findContours(gray_image, contours, hierarchy, 1, 0);
	//drawing = cv::Mat::zeros(gray_image.size(), gray_image.type());
	//cv::drawContours( drawing, contours, 1, cv::Scalar(255));
	for( int y = 0; y < b_and_w_image.rows; y++ ) {
		for( int x = 0; x < b_and_w_image.cols; x++ ) {
			if (b_and_w_image.at<cv::Vec3b>( y, x)[0] < 15) {
				b_and_w_image.at<cv::Vec3b>( y, x)[0] = 0;
			} else b_and_w_image.at<cv::Vec3b>( y, x)[0] = 255;
		}
	}

	cv::imshow("Original Image", image);
	cv::waitKey(0);
	cv::imshow("Red Image", red_image);
	cv::waitKey(0);

	cv::imshow("Gray Image", gray_image);
	cv::waitKey(0);
	//cv::imshow("Blured red Image", blured_gray);
	//cv::waitKey(0);
	cv::imshow("Sharpened", sharpened_img);
	cv::waitKey(0);
	cv::imshow("Black & White Image", b_and_w_image);
	cv::waitKey(0);*/
	//cv::imshow("Contour", drawing);
	cv::waitKey(0);

	return 0;
}