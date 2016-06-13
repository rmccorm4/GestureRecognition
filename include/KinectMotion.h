#ifndef KINECTMOTION_H
#define KINECTMOTION_H
#include <string>
#include <opencv\cv.h>
#include "Image.h"

class KinectMotion {
public:
	KinectMotion(std::string iDepth, std::string iRgb);
	Image getDepth();
	Image getRgb();
	cv::Mat updateImage(int upperThresholdVal, int lowerThresholdVal, bool make_binary = true);
	void blob(cv::Mat imMat);
	float blobMax(cv::Mat depth);
	cv::Mat getHand(cv::Mat image, double ratio);
	cv::Mat findEdges(cv::Mat image);
private:
	Image depth;
	Image rgb;
}; 
#endif