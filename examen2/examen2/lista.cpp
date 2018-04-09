#include "lista.h"

Cumparaturi::Cumparaturi(const char * a, int c) {
	this->s = a;
	this->count = c;
}

int Cumparaturi::GetCount() { return this->count; }

std::string Cumparaturi::GetString() { return this->s; }

void Cumparaturi::incrementCount(int c) { this->count += c; }

ListaCumparaturi& ListaCumparaturi::operator +=(Cumparaturi &c) {
	std::string s = c.GetString();
	int count = c.GetCount();
	bool check = false;
	for (auto &el : this->list) {
		if (el.GetString() == s) {
			el.incrementCount(count);
			check = true;
		}
	}
	if (!check)
		this->list.push_back(c);
	return (*this);
}

bool ListaCumparaturi::operator-=(const char * a) {
	std::string s = a;
	for (std::vector<Cumparaturi>::iterator it = list.begin(); it != list.end(); it++) {
		if ((*it).GetString() == s) {
			list.erase(it);
			list.shrink_to_fit();
			return true;
		}
	}
	return false;
}

ListaCumparaturi operator |(ListaCumparaturi a, ListaCumparaturi b) {
	ListaCumparaturi temp;
	for (auto li : a) {
		temp += li;
	}
	for (auto li : b) {
		temp += li;
	}
	return temp;
}

std::vector<Cumparaturi>::iterator ListaCumparaturi::begin() { return this->list.begin(); }
std::vector<Cumparaturi>::iterator ListaCumparaturi::end() { return this->list.end(); }

void ListaCumparaturi::Print() {
	for (auto el : this->list) {
		std::cout << el.GetString() << ": " << el.GetCount() << std::endl;
	}
	std::cout << std::endl;
}