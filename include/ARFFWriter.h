#ifndef ARFFWRITER_H
#define ARFFWRITER_H

#include "LeapData.h"

class ARFFWriter {
public:
	ARFFWriter(std::string path, std::vector<LeapData> data);
	std::string getNumFingers(LeapData leap);
	std::string getFingertipDist(LeapData leap);
	std::string getFingertipInterDist(LeapData leap);
	std::string getFingertipPosition(LeapData leap);
	std::string getHandDirection(LeapData leap);
	std::string getHandSphereCenter(LeapData leap);
	std::string getHandSphereRadius(LeapData leap);
	std::string getPalmNormal(LeapData leap);
	std::string getPalmPosition(LeapData leap);
	std::string getPalmPositionRefined(LeapData leap);
	std::string getPalmVelocity(LeapData leap);
	std::string getRotationAngle(LeapData leap);
	std::string getRotationAxis(LeapData leap);
	std::string getRotationMatrix(LeapData leap);
	std::string getRotationProbability(LeapData leap);
	std::string getTranslation(LeapData leap);
	std::string getTranslationProbability(LeapData leap);
	std::string getFingertipDistRefined(LeapData leap);

	//new attributes
	std::string getNewScaleFactor(LeapData leap);
	std::string getNewFingertipDistRefined(LeapData leap);
	std::string getFingertipAngles(LeapData leap);
	std::string getProjectionPoints(LeapData leap);
	std::string getFingertipElevation(LeapData leap);
	std::string getGesture(LeapData leap);
	std::string getFingersExtends(LeapData leap);
	std::string getFingersArea(LeapData leap);

};
#endif // !ARFFWRITER_H

