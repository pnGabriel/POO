#include "dreptunghiRotit.h"

void DreptunghiRotit::set(int x, int y, int lungime, int latime, int unghi) {
	Dreptunghi::set(x, y, lungime, latime);
	this->unghi = unghi;
}

void DreptunghiRotit::Paint() {
	Dreptunghi::Paint();
	std::string info;
	info += " rotit la  de grade";
	info.insert(10, std::to_string(this->unghi).c_str());
	std::cout << info;
}