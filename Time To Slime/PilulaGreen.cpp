#include "PilulaGreen.h"

Pilula_Green::Pilula_Green(float x, float y, const char* nameImage) {
	char filename[100] = "";
	strcat(filename, nameImage);
	m_position.set(x, y);
	m_image.load(filename);
}

int Pilula_Green::x1() {
	return m_position.x;
}
int Pilula_Green::x2() {
	return m_position.x + m_image.getWidth();
}
int Pilula_Green::y1() {
	return m_position.y;
}
int Pilula_Green::y2() {
	return m_position.y + m_image.getWidth();
}