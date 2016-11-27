#include "Inimigo.h"

std::vector<Inimigo*> inimigos;

Inimigo::Inimigo(float x, float y, const char* nameImage) {
	char filename[100] = "";
	strcat(filename, nameImage);
	m_position.set(x, y);
	m_image.load(filename);
}

int Inimigo::x1() {
	return m_position.x;
}

int Inimigo::x2() {
	return m_position.x + m_image.getWidth();
}

int Inimigo::y1() {
	return m_position.y;
}

int Inimigo::y2() {
	return m_position.y + m_image.getWidth();
}