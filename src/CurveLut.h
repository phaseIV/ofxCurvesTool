#pragma once

#include "ofMain.h"

class CurveLut {
public:
	void setup(int n = 256);
	void add(ofVec2f controlPoint);
	void set(int i, ofVec2f controlPoint);
	void remove(int i);
	void update();
	float operator[](int i) const;
	int size() const;
	
protected:
	vector<float> getSecondDerivative();
	int n;
	vector<float> lut;
	vector<ofVec2f> controlPoints;
};