#include "PilulaBlue.h"

Pilula_Blue::Pilula_Blue(float x, float y, const char* nameImage) {
	char filename[100] = "";
	strcat(filename, nameImage);
	m_position.set(x, y);
	m_image.load(filename);
}

int Pilula_Blue::x1() {
	return m_position.x;
}
int Pilula_Blue::x2() {
	return m_position.x + m_image.getWidth();
}
int Pilula_Blue::y1() {
	return m_position.y;
}
int Pilula_Blue::y2() {
	return m_position.y + m_image.getWidth();
}