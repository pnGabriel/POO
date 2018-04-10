#include "food.h"
#include <sstream>
#include <iomanip>
void Food::setQuantity(float quantity) {
	this->quantity = quantity;
}

std::string Food::getInfo() {
	std::stringstream ss;
	ss << std::fixed << std::setprecision(1) << this->quantity;

	std::string info;
	info += this->getName() + " : ";
	info += ss.str();
	info += " kg";
	return info;
}
