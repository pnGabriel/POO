#include "dreptunghi.h"

void Dreptunghi::set(int x, int y, int lungime, int latime) {
	this->x = x;
	this->y = y;
	this->lungime = lungime;
	this->latime = latime;
}

void Dreptunghi::Paint() {
	std::string info;
	info += "dreptunghi(";
	info += std::to_string(this->x) + ",";
	info += std::to_string(this->y) + ",";
	info += std::to_string(this->lungime) + ",";
	info += std::to_string(this->latime) + ")";
	std::cout << info;
}