#include "ofApp.h"
#include <time.h>

float tempoAtual;
float before;

//--------------------------------------------------------------
void ofApp::setup(){
		srand(time(NULL));
		before = ofGetElapsedTimef();

		ofSetBackgroundColor(255, 255, 255);

		//Gosma 1
		gosma.posicao.x = 512;
		gosma.posicao.y = 350;
		gosma.sprite.load("SlimeGordinha.png");
		gosma.imagemFrames = gosma.sprite.getWidth() / gosma.sprite.getHeight();// - Animaçao
		gosma.tamanho = gosma.sprite.getHeight();
		gosma.spriteIndex = 0;// - Animaçao
		gosma.velocidadeAnimacao = 0.2f;// - Animaçao
		gosma.velocidade = 200.f;
		gosma.sprite.setAnchorPoint(gosma.tamanho / 2, gosma.tamanho / 2);

		//Pilulas
		pilVerm.posic.x = 40;
		pilVerm.posic.y = 45;
		pilVerm.sprit.load("Pilulas/Pilula_Vermelha.png");

		pilAzul.posic.x = 920;
		pilAzul.posic.y = 305;
		pilAzul.sprit.load("Pilulas/Pilula_Azul.png");

		pilVerCl.posic.x = 50;
		pilVerCl.posic.y = 570;
		pilVerCl.sprit.load("Pilulas/Pilula_VerdeClaro.png");

		pilRosa.posic.x = 50;
		pilRosa.posic.y = 305;
		pilRosa.sprit.load("Pilulas/Pilula_Rosa.png");

		pilAma.posic.x = 482;
		pilAma.posic.y = 300;
		pilAma.sprit.load("Pilulas/Pilula_Amarela.png");

		switch (tela) {
		case 1: //Menu
			//menu.UpdateMenu();
			break;
		case 2: //Instruçoes
			//instrucao.UpdateInstrucao();
			break;

			//------------------------------------------------------------------------------------------------
		case 3: //Fase (0,0)
			setor0_0.UpdateSetor();
			setor0_0.UpdateInimigos();
			break;

			//------------------------------------------------------------------------------------------------
		case 4: //Fase (0,1)
			s0_1.UpdateSetor_0_1();
			break;

			//------------------------------------------------------------------------------------------------
		case 5: //Fase (0,2)
			s0_2.UpdateSetor_0_2();
			break;

			//------------------------------------------------------------------------------------------------
		case 6: //Fase (1,0)
			setor1_0.UpdateSetor();
			setor1_0.UpdateInimigos();
			break;

			//------------------------------------------------------------------------------------------------
		case 7: //Fase (1,1)
			s1_1.UpdateSetor();
			break;
			//------------------------------------------------------------------------------------------------
		case 8: //Fase (1,2)
			s1_2.UpdateSetor_1_2();
			break;

			//------------------------------------------------------------------------------------------------
		case 9: //Fase Derrota
			setorDerrota.UpdateDerrota();
			break;

			//------------------------------------------------------------------------------------------------
		case 10: //Fase Vitoria
			break;
		}
}

//--------------------------------------------------------------
void ofApp::update(){
	tempoAtual = ofGetElapsedTimef() - before;
	before = ofGetElapsedTimef();

	//inimigos.angulo += ofGetLastFrameTime();
		//angle += ofGetLastFrameTime();

	//Animação Gosma 1
	gosma.frameTime += tempoAtual;
	if (gosma.frameTime >= gosma.velocidadeAnimacao) {
		gosma.spriteIndex = (gosma.spriteIndex + 1) % gosma.imagemFrames;
		gosma.frameTime = 0;
	}

	//Andar Gosma
	ofVec2f passo;

	if (gosma.keyUp) {
		passo.y = -gosma.velocidade * tempoAtual;
	}
	if (gosma.keyRight) {
		passo.x = gosma.velocidade * tempoAtual;
	}
	if (gosma.keyDown) {
		passo.y = gosma.velocidade * tempoAtual;
	}
	if (gosma.keyLeft) {
		passo.x = -gosma.velocidade * tempoAtual;
	}

	gosma.posicao += passo;

	//Colisao Paredes
	if (colidiuParedes()) {		
		gosma.posicao -= passo;
	}
	/*else if (colidiuInimigos()) {
		tela = 9;
	}*/

	switch (tela) {
	case 1: //Menu
		if (gosma.x1() <= 100) {
			tela = 2;
			//instrucao.UpdateInstrucao();
			gosma.posicao.x = 100;
			gosma.posicao.y = 100;
		}
		else if (gosma.x2() >= 980) {
			tela = 3;
			s1_1.UpdateSetor();
			gosma.posicao.x = 512;
			gosma.posicao.y = 350;
		}
		break;
	case 2: //Instruçoes
		break;

		//------------------------------------------------------------------------------------------------
	case 3: //Fase (0,0)
		if (gosma.y2() >= 700) {
			tela = 6;
			setor1_0.UpdateSetor();
			setor1_0.UpdateInimigos();
			gosma.posicao.y = 50;
			gosma.posicao.x = 535;
		}
		break;

		//------------------------------------------------------------------------------------------------
	case 4: //Fase (0,1)
		break;

		//------------------------------------------------------------------------------------------------
	case 5: //Fase (0,2)
		if (gosma.y2() >= 700) {
			tela = 8;
			s1_2.UpdateSetor_1_2();
			gosma.posicao.y = 100;
		}
		break;

		//------------------------------------------------------------------------------------------------
	case 6: //Fase (1,0)
		if (gosma.x2() >= 1022) {
			tela = 7;
			s1_1.UpdateSetor();
			gosma.posicao.x = 100;
		}

		else if (gosma.y1() <= 0) {
			tela = 3;
			setor0_0.UpdateSetor();
			setor0_0.UpdateInimigos();
			gosma.posicao.y = 600;
		}
		else if (colidiuInimigos()) {
			tela = 9;
			setorDerrota.UpdateDerrota();
			gosma.posicao.set(512, 350);
		}
		break;

		//------------------------------------------------------------------------------------------------
	case 7: //Fase (1,1)
		if (gosma.x1() <= 0) {
			tela = 6;
			setor1_0.UpdateSetor();
			gosma.posicao.x = 954;
		}

		else if (gosma.x2() >= 1022) {
			tela = 8;
			s1_2.UpdateSetor_1_2();
			gosma.posicao.x = 100;
		}

		else if (gosma.y1() <= 0) {
			tela = 4;
			s0_1.UpdateSetor_0_1();
			gosma.posicao.y = 600;
		}
		break;

		//------------------------------------------------------------------------------------------------
	case 8: //Fase (1,2)
		if (gosma.y1() <= 0) {
			tela = 5;
			s0_2.UpdateSetor_0_2();
			gosma.posicao.y = 600;
		}
		else if (gosma.x1() <= 0) {
			tela = 7;
			s1_1.UpdateSetor();
			gosma.posicao.x = 980;
		}
		break;

		//------------------------------------------------------------------------------------------------
	case 9: //Fase Derrota

		break;

		//------------------------------------------------------------------------------------------------
	case 10: //Fase Vitoria
		break;
	}

	//Para os angles funcionarem dentro das classes
		setor0_0.UpdateInimigos();
		setor1_0.UpdateInimigos();
}

//--------------------------------------------------------------
void ofApp::drawNaTela(Jogador& objeto) {
	objeto.sprite.drawSubsection(
		objeto.posicao.x,
		objeto.posicao.y,
		objeto.tamanho,
		objeto.tamanho,
		objeto.spriteIndex*objeto.tamanho,
		0
	);
}

//--------------------------------------------------------------
void ofApp::draw(){
	float x = sin(angle) * 290 / 2;
	float y = cos(angle) * 500 / 2;

	drawNaTela(gosma);

	switch (tela) {
	case 1: //Menu
		break;
	case 2: //Instruçoes
		break;
	case 3: //Fase (0,0)
		setor0_0.DrawSetor();
		setor0_0.DrawInimigos();
		pilRosa.sprit.draw(pilRosa.posic.x, pilRosa.posic.y);
		break;
	case 4: //Fase (0,1)
		s0_1.DesenharSetor_0_1();
		break;
	case 5: //Fase (0,2)
		s0_2.DesenharSetor_0_2();
		pilAma.sprit.draw(pilAma.posic.x, pilAma.posic.y);
		break;
	case 6: //Fase (1,0)
		setor1_0.DrawSetor();
		setor1_0.DrawInimigos();
		pilVerCl.sprit.draw(pilVerCl.posic.x, pilVerCl.posic.y);
		break;
	case 7: //Fase (1,1)
		pilVerm.sprit.draw(pilVerm.posic.x,pilVerm.posic.y);
		s1_1.DrawSetor();
		break;
	case 8: //Fase (1,2)
        s1_2.DesenharSetor_1_2();
		pilAzul.sprit.draw(pilAzul.posic.x, pilAzul.posic.y);
		//i1.imagem.draw(350 + x, 200);
		//i1.imagem.draw(330 + x, 450);
		//i1.imagem.draw(745, 330 + y);
		break;
	case 9: //Fase Derrota
		setorDerrota.DrawDerrota();
		break;
	}
}

bool ofApp::colidiuJogador_Inimigo(Jogador& jogador, Inimigo& inimigo) {
	if (inimigo.x2() < jogador.x1()) {
		return false;
	}
	if (jogador.x2() < inimigo.x1()) {
		return false;
	}
	if (inimigo.y2() < jogador.y1()) {
		return false;
	}
	if (jogador.y2() < inimigo.y1()) {
		return false;
	}
	return true;
}

bool ofApp::colidiuInimigos() {
	for (int i = 0; i < inimigos.size(); i++) {
		if (colidiuJogador_Inimigo(gosma, *(inimigos[i]))) {
			return true;
		}
	}
	return false;
}

//--------------------------------------------------------------
bool ofApp::colidiuJogador_Labirinto(Jogador &jogador, Labirinto& parede) {
	if (parede.x2() < jogador.x1()) {
		return false;
	}
	if (jogador.x2() < parede.x1()) {
		return false;
	}
	if (parede.y2() < jogador.y1()) {
		return false;
	}
	if (jogador.y2() < parede.y1()) {
		return false;
	}

	return true;
}

//--------------------------------------------------------------
bool ofApp::colidiuParedes() {		
	for (int i = 0; i < paredes.size(); i++) {
		if (colidiuJogador_Labirinto(gosma, *(paredes[i]))){
			return true;
		}
	}
	return false;
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
		if (key == OF_KEY_LEFT)
			gosma.keyLeft = true;
		if (key == OF_KEY_RIGHT)
			gosma.keyRight = true;
		if (key == OF_KEY_UP)
			gosma.keyUp = true;
		if (key == OF_KEY_DOWN)
			gosma.keyDown = true;
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
		if (key == OF_KEY_LEFT)
			gosma.keyLeft = false;
		if (key == OF_KEY_RIGHT)
			gosma.keyRight = false;
		if (key == OF_KEY_UP)
			gosma.keyUp = false;
		if (key == OF_KEY_DOWN)
			gosma.keyDown = false;
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
