#pragma once
#ifndef OVAL_H
#define OVAL_H
#include "forma.h"

class Oval : public Forma {
private:
	int x;
	int y;
	int raza1;
	int raza2;
public:
	void Paint();
	void set(int, int, int, int);
};

#endif // !OVAL_H
