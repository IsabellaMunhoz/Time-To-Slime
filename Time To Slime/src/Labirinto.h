#pragma once

#include "ofMain.h"
#include <vector>

class Labirinto {
    public:
    ofVec2f parede;
    ofImage imagem;
    
    Labirinto(float x, float y, const char* arquivoImagem);
    int x1();
    int x2();
    int y1();
    int y2();
};

extern std::vector<Labirinto*> paredes;    