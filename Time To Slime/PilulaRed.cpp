#include "PilulaRed.h"

Pilula_Red::Pilula_Red(float x, float y, const char* nameImage) {
	char filename[100] = "";
	strcat(filename, nameImage);
	m_position.set(x, y);
	m_image.load(filename);
}

int Pilula_Red::x1() {
	return m_position.x;
}
int Pilula_Red::x2() {
	return m_position.x + m_image.getWidth();
}
int Pilula_Red::y1() {
	return m_position.y;
}
int Pilula_Red::y2() {
	return m_position.y + m_image.getWidth();
}