#include "forme.h"

void Forme::Add(Forma* forma) {
	this->list.push_back(forma);
}

void Forme::Paint() {
	for (auto el : list) {
		el->Paint();
		std::cout << std::endl;
	}
}