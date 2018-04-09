#ifndef DEF_H
#define DEF_H

#include <iostream>
#include <string>
#include <vector>
#include <map>

class ListaParagrafe;
class Procesator;
class ProcesatorNumaraCuvinte;
class ProcesatorNumaraPropozitii;
class Iterator;


class Procesator {
public:
	virtual void Proceseaza(const char *)=0;
	virtual void Print() = 0;
};

class ProcesatorNumaraCuvinte : public Procesator {
private:
	std::map<std::string, int> mp;
	const char del[6] = ".?!, ";
public:
	void Proceseaza(const char *);
	void Print();
};

class ProcesatorNumaraPropozitii : public Procesator {
private:
	int count=0;
	const char del[4] = ".?!";
public:
	void Proceseaza(const char *);
	void Print();
};

class ListaParagrafe {
public:
	std::vector<const char *> vec;
	std::vector<const char *>::iterator begin();
	std::vector<const char *>::iterator end();
	void Add(const char *);
};


#endif