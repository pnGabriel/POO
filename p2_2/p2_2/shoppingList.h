#pragma once
#ifndef SHOPPINGLIST_H
#define SHOPPINGLIST_H

#include "item.h"
#include <list>
#include<iostream>

class ShoppingList {
private:
	std::list<Item*> list;
public:
	void addItem(Item*);
	void printList(); 
};

#endif // !SHOPPINGLIST_H
