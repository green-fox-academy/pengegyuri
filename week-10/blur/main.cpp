#include <iostream>
#include "opencv2/imgproc.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"


int main( int argc, char ** argv )
{
	cv::Mat image, blurred;
	image = imread( "../fish.jpg", cv::IMREAD_COLOR );
	if(image.empty())
	{
		std::cout << "Error opening image" << std::endl;
		return -1;
	}
	blur(image, blurred, cv::Size( 100, 100));
	imshow("original", image);
	imshow("blurred", blurred );

	cv::waitKey(0);

	return 0;
}
