#pragma once
#ifndef CERC_H
#define CERC_H
#include "forma.h"

class Cerc : public Forma {
private:
	int x;
	int y;
	int raza;
public:
	void Paint();
	void set(int, int, int);
};

#endif // !CERC_H
