#pragma once
#ifndef FOOD_H
#define FOOD_H

#include "item.h"

class Food : public Item {
private:
	float quantity;
public:
	void setQuantity(float);
	std::string getInfo();
};
#endif // !FOOD_H
