#include <opencv2/highgui/highgui.hpp>
#include <opencv2/opencv.hpp>
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string>

using namespace std;
using namespace cv;
Mat image;
int size_y;
int size_x;

//mouse event callback function
void CallBackFunc(int event, int x, int y, int flags, void* userdata);
//angle calculation
int calcAngle(int x, int y);

int main(int argc, char** argv)
{
//create image
	image = Mat::zeros(Size(1000, 1000), CV_8UC1);
	size_x = image.size().width;
	size_y = image.size().height;
	//create window
	namedWindow("Display Image", WINDOW_AUTOSIZE);
//set the callback function for any mouse event
	setMouseCallback("Display Image", CallBackFunc, NULL);
//draw ref line
	line(image, Point(size_x / 2, size_y / 2), Point(size_x, size_y / 2), Scalar(255), 2, 8, 0);
//show image
	imshow("Display Image", image);
// Wait until user keypress
	waitKey(0);

	return 0;
}

void CallBackFunc(int event, int x, int y, int flags, void* userdata)
{
//mouse event
	if  ( event == EVENT_LBUTTONDOWN )
	{
	//clear image
		image = Mat::zeros(Size(1000, 1000), CV_8UC1);
	//redraw ref line
		line(image, Point(size_x / 2, size_y / 2), Point(size_x, size_y / 2), Scalar(255), 2, 8, 0);
	//draw custom line
		line(image, Point(size_x / 2, size_y / 2), Point(x, y), Scalar(255), 2, 8, 0);
	//outputs in terminal
		cout << "Left button of the mouse is clicked - position (" << x << ", " << y << ")" << endl;
		string output = "Angle : " + to_string(calcAngle(x, y)) + " degries";
		cout << output << endl;
	//output on image
		putText(image, output, Point(10,40), FONT_HERSHEY_SCRIPT_SIMPLEX, 1,(255,255,255), 2, LINE_AA);
	//show image
		imshow("Display Image", image);
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