#pragma once
#ifndef FORMA_H
#define FORMA_H
#include "forme.h"
#include <list>

class Forma : public Forme {
private:
	std::list<Forme*> list;
public:
	void Print();
	void Add(Forma*);
};

#endif // !FORMA_H
