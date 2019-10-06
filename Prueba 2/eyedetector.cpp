#include <iostream>

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/objdetect/objdetect.hpp>

using namespace cv;
using namespace std;

int main()
{

//initialize and allocate memory to load the video stream from camera
cv::VideoCapture camera0(0);
//cv::VideoCapture camera1(1);

if( !camera0.isOpened() ) return 1;
//if( !camera1.isOpened() ) return 1;
int nbImage=0;
while(true) {
    //grab and retrieve each frames of the video sequentially
    cv::Mat frame0;
    camera0 >> frame0;
    //cv::Mat frame1;
    //camera1 >> frame1;

    cv::imshow("Video0", frame0);
    //cv::imshow("Video1", frame1);

    //wait for 40 milliseconds
    int c = cvWaitKey(40);
    if (static_cast<char>(c)=='s')
   {
       imwrite(format("image0_%d.jpg",nbImage),frame0);
       //imwrite(format("image1_%d.jpg",nbImage++),frame1);
   }
    //exit the loop if user press "Esc" key  (ASCII value of "Esc" is 27)
    if(27 == char(c)) break;
}
}
