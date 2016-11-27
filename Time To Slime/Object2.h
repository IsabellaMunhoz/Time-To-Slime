#pragma once
#include "ofMain.h"

class Object2 {
public:
	ofVec2f m_position;
	ofImage m_image;
	virtual int x1() = 0;
	virtual int x2() = 0;
	virtual int y1() = 0;
	virtual int y2() = 0;
};