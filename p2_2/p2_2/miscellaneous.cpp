#include "miscellaneous.h"

std::string Miscellaneous::getInfo() {
	std::string info;
	info += this->getName() + " : ";
	info += std::to_string(this->count);
	info += " items";
	return info;
}

void Miscellaneous::setCount(int count) {
	this->count = count;
}