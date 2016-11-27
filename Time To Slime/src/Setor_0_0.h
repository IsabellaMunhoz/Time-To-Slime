#pragma once
#include "ofMain.h"
#include "Labirinto.h"
#include "Object.h"
#include "Inimigo.h"
#include <iostream>

using namespace std;

class Setor_0_0 : public Object{
private:
public:
	void UpdateSetor();
	void UpdateInimigos();
	void DrawSetor();
	void DrawInimigos();
};