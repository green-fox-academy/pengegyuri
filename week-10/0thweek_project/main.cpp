#include <opencv2/highgui/highgui.hpp>
#include <opencv2/opencv.hpp>
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string>


cv::Mat image;

int size_y;
int size_x;

//mouse event callback function
void CallBackFunc(int event, int x, int y, int flags, void* userdata);
//angle calculation
int calcAngle(int x, int y);

int main(int argc, char** argv)
{
//create image
	image = cv::Mat::zeros(cv::Size(1000, 1000), CV_8UC1);
	size_x = image.size().width;
	size_y = image.size().height;
	//create window
	cv::namedWindow("Display Image", cv::WINDOW_AUTOSIZE);
//set the callback function for any mouse event
	cv::setMouseCallback("Display Image", CallBackFunc, NULL);
//draw ref line
	cv::line(image, cv::Point(size_x / 2, size_y / 2), cv::Point(size_x, size_y / 2), cv::Scalar(255), 2, 8, 0);
//show image
	cv::imshow("Display Image", image);
// Wait until user keypress
	cv::waitKey(0);

	return 0;
}

void CallBackFunc(int event, int x, int y, int flags, void* userdata)
{
//mouse event
	if  ( event == cv::EVENT_LBUTTONDOWN )
	{
	//clear image
		image = cv::Mat::zeros(cv::Size(1000, 1000), CV_8UC1);
	//redraw ref line
		cv::line(image, cv::Point(size_x / 2, size_y / 2), cv::Point(size_x, size_y / 2), cv::Scalar(255), 2, 8, 0);
	//draw custom line
		cv::line(image, cv::Point(size_x / 2, size_y / 2), cv::Point(x, y), cv::Scalar(255), 2, 8, 0);
	//outputs in terminal
		std::cout << "Left button of the mouse is clicked - position (" << x << ", " << y << ")" << std::endl;
		std::string output = "Angle : " + std::to_string(calcAngle(x, y)) + " degries";
		std::cout << output << std::endl;
	//output on image
		cv::putText(image, output, cv::Point(10,40), cv::FONT_HERSHEY_SCRIPT_SIMPLEX, 1,
				(255,255,255), 2, cv::LINE_AA);
	//show image
		cv::imshow("Display Image", image);
	}
}

int calcAngle(int x, int y)
{
//angle calculation
	int angle;
	int b = x - size_x / 2; //b side of triangle
	int a = y - size_y / 2; //a side of tr
	float angleInRad = atan((float)a / (float)b);
	angle = - round((angleInRad / M_PI) * 180);
	if (x >= size_x / 2 && y <= size_y / 2) {
		return angle;
	} else if (x >= size_x / 2 && y > size_y / 2) {
		return 360 + angle;
	} else {
		return 180 + angle;
	}
}