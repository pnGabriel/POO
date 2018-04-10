#include "oval.h"

void Oval::set(int x, int y, int raza1, int raza2) {
	this->x = x;
	this->y = y;
	this->raza1 = raza1;
	this->raza2 = raza2;
}

void Oval::Paint() {
	std::string info;
	info += "oval(";
	info += std::to_string(this->x) + ",";
	info += std::to_string(this->y) + ",";
	info += std::to_string(this->raza1) + ",";
	info += std::to_string(this->raza2) + ")";
	std::cout << info;
}