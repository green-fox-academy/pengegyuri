#include "opencv2/imgproc.hpp"
#include "opencv2/highgui.hpp"
#include <iostream>
using namespace cv;
using namespace std;

int main( int argc, char** argv )
{
	Mat image, erdoded, dilateted;
	image = imread("../fish.jpg", 1);

	if( image.empty() )
	{
		cout << "Could not open or find the image!\n" << endl;
		return -1;
	}

	imshow("Original", image);

	int sz = 10;
	while (sz < 60) {
		Mat stuct_element = getStructuringElement(MORPH_ELLIPSE, Size(sz, sz));
		erode(image, erdoded, stuct_element);
		dilate(image, dilateted, stuct_element);

		imshow("Eroded", erdoded);
		imshow("Dilateted", dilateted);

		sz += 10;
		waitKey(0);
	}
	imwrite("../erodedfish.jpg", erdoded);
	return 0;
}
