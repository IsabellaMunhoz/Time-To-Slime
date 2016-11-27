#pragma once
#include <vector>
#include "ofMain.h"
#include "Labirinto.h"
#include "Inimigo.h"
#include "Setor_0_0.h"
#include "Setor_0_1.h"
#include "Setor_0_2.h"
#include "Setor_1_0.h"
#include "Setor_1_1.h"
#include "Setor_1_2.h"
#include "Derrota.h"

using namespace std;

class ofApp : public ofBaseApp{
public:
	struct Jogador
	{
		ofVec2f posicao;
		ofImage sprite;
		float velX, velY;
		float tamanho;
		float frameTime;
		float velocidade;
		float velocidadeAnimacao;
		int spriteIndex;
		int imagemFrames = 7;

		bool keyLeft, keyRight, keyUp, keyDown, keySpace;

		int x1() {
			return posicao.x - tamanho / 2;
		}
		int x2() {
			return posicao.x + tamanho / 2;
		}
		int y1() {
			return posicao.y - tamanho / 2;
		}
		int y2() {
			return posicao.y + tamanho / 2;
		}
	};

	struct Item
	{
		ofVec2f posic;
		ofImage sprit;
		float taman;
		int x1() {
			return posic.x;
		}
		int x2() {
			return posic.x + taman;
		}
		int y1() {
			return posic.y;
		}
		int y2() {
			return posic.y + taman;
		}
	};

	/*struct Inimigo {
		float tam;
		float angulo = 0;
		ofImage imagem;
		ofVec2f pos;
		int x1() {
			return pos.x - tam / 2;
		}
		int x2() {
			return pos.x + tam / 2;
		}
		int y1() {
			return pos.y - tam / 2;
		}
		int y2() {
			return pos.y + tam / 2;
		}
	};*/

	float angle;

	Setor_0_0 setor0_0;
	Setor_0_1 s0_1;
	Setor_0_2 s0_2;
	Setor_1_0 setor1_0;
	Setor_1_1 s1_1;
    Setor_1_2 s1_2;
	Derrota setorDerrota;
    
	Jogador gosma;

	Item pilVerm;
	Item pilAzul;
	Item pilVerCl;
	Item pilRosa;
	Item pilAma;

	int tela = 7;

		void setup();
		void update();
		void drawNaTela(Jogador& objeto);
		void draw();

		bool colidiuJogador_Inimigo(Jogador& jogador, Inimigo& inimigo);
		bool colidiuInimigos();

		bool colidiuJogador_Labirinto(Jogador& jogador, Labirinto& parede);
		bool colidiuParedes();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);		
};
