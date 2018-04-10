#pragma once
#ifndef FORME_H
#define FORME_H

#include "forma.h"
#include <list>

class Forme : public Forma {
private:
	std::list<Forma*> list;
public:
	void Paint();
	void Add(Forma*);
};
#endif // !FORME_H

