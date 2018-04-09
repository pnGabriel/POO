#pragma once
#ifndef LISTA_H
#define LISTA_H
#include<iostream>
#include<map>
#include<string>
#include<vector>

class ListaCumparaturi;
class Cumparaturi;

class ListaCumparaturi {
private:
	std::vector<Cumparaturi> list;
public:
	void Print();
	ListaCumparaturi& operator +=(Cumparaturi &);

	//friend bool operator +=(ListaCumparaturi &a, ListaCumparaturi &b);

	bool operator -=(const char *);
	friend ListaCumparaturi operator |(ListaCumparaturi, ListaCumparaturi);
	std::vector<Cumparaturi>::iterator begin();
	std::vector<Cumparaturi>::iterator end();
};


class Cumparaturi {
private:
	std::string s;
	int count;
public:
	Cumparaturi(const char *, int);
	std::string GetString();
	int GetCount();
	void incrementCount(int);
};

#endif // !LISTA>H
