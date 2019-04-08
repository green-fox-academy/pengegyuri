//Uncomment the following line if you are compiling this code in Visual Studio
//#include "stdafx.h"

#include <opencv2/opencv.hpp>
#include <iostream>


cv::Mat frame;
std::vector<cv::Mat> images = {};
int events_num = 0;


void CallBackFunc(int event, int x, int y, int flags, void* userdata);

int main(int argc, char* argv[])
{
	//open the video file for reading
	cv::VideoCapture cap(0);

	// if not success, exit program
	if (cap.isOpened() == false)
	{
		std::cout << "Cannot open the video file" << std::endl;
		std::cin.get(); //wait for any key press
		return -1;
	}

	//get the frames rate of the video
	double fps = cap.get(cv::CAP_PROP_FPS);
	std::cout << "Frames per seconds : " << fps << std::endl;

	std::string window_name = "My WebCam";

	cv::namedWindow(window_name, cv::WINDOW_NORMAL); //create a window
	cv::setMouseCallback(window_name, CallBackFunc, NULL);

	while (true)
	{
		
		bool bSuccess = cap.read(frame); // read a new frame from video 
		cv::setMouseCallback("Display Image", CallBackFunc, NULL);

		//show the frame in the created window
		imshow(window_name, frame);

		if (cv::waitKey(10) == 27 || events_num == 3)
		{
			std::cout << "Esc key is pressed by user. Stoppig the video" << std::endl;
			break;
		}
	}
	cv::Mat blended;
	images[0].copyTo(blended);
	for (int i = 1; i < 3; i++) {
		cv::addWeighted(images[i], 0.5, blended, 0.5, 0.0, blended);
	}
	cv::imwrite("blended.jpg", blended);
	return 0;

}

void CallBackFunc(int event, int x, int y, int flags, void* userdata)
{
	//mouse event
	if (event == cv::EVENT_LBUTTONDOWN)
	{	
		if (events_num < 3) 
		{
			cv::Mat tempimg;
			char filename[] = "image1.jpg";
			filename[5] += events_num;
			frame.copyTo(tempimg);
			images.push_back(tempimg);
			cv::imwrite(filename, images[events_num]);
			events_num++;
		}	
	}
}
