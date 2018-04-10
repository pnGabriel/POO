#include "cerc.h"

void Cerc::set(int x, int y, int raza) {
	this->x = x;
	this->y = y;
	this->raza = raza;
}

void Cerc::Paint() {
	std::string info;
	info += "cerc(";
	info += std::to_string(this->x) +",";
	info += std::to_string(this->y) + ",";
	info += std::to_string(this->raza) + ")";
	std::cout << info;
}