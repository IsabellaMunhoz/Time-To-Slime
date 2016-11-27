#pragma once
#include "ofMain.h"
#include "Labirinto.h"

class Inimigo {
public:
	ofVec2f m_position;
	ofImage m_image;
	float angle = 0;
	Inimigo(float x, float y, const char* nameImage);
	int x1();
	int x2();
	int y1();
	int y2();
};

extern std::vector<Inimigo*> inimigos;