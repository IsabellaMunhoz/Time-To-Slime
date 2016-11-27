#pragma once

class Object {
public:
	float angle = 0;
	virtual void UpdateSetor() = 0;
	virtual void UpdateInimigos() = 0;
	virtual void DrawSetor() = 0;
	virtual void DrawInimigos() = 0;
};
