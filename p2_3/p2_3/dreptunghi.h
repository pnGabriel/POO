#pragma once
#ifndef DREPTUNGHI_H
#define DREPTUNGHI_H
#include "forma.h"

class Dreptunghi : public Forma {
private:
	int x;
	int y;
	int lungime;
	int latime;
public:
	void Paint();
	void set(int, int, int, int);
};


#endif // !DREPTUNGHI_H

