#pragma once
#ifndef DREPTUNGHIROTIT_H
#define DREPTUNGHIROTIT_H
#include "dreptunghi.h"

class DreptunghiRotit : public Dreptunghi {
private:
	int unghi;
public:
	void Paint();
	void set(int, int, int, int, int);
};


#endif // !DREPTUNGHIROTIT_H
