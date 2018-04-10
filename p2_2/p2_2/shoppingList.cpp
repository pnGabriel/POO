#include "shoppingList.h"

void ShoppingList::addItem(Item* item) {
	this->list.push_back(item);
}

void ShoppingList::printList() {
	for (auto item : list) {
		std::cout << item->getInfo() << "; ";
	}
	std::cout << std::endl;
}