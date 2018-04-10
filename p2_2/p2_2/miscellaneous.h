#pragma once
#ifndef MISCELLANEOUS_H
#define MISCELLANEOUS_H
#include "item.h"

class Miscellaneous : public Item {
private:
	int count;
public:
	std::string getInfo();
	void setCount(int);

};

#endif // !MISCELLANEOUS_H
