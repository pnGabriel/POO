#pragma once
#ifndef CARS_H
#define CARS_H

#include <string>
#include <iostream>

class MasinaOras;
class Masina;
class SUV;
class Dacia;
class Opel;
class RangeRover;

class Masina {
public:
	virtual std::string getName()=0;
};

class MasinaOras : public Masina {
public:
	virtual int getCapacitate()=0;
	virtual std::string getCuloare()=0;
};

class Dacia : public MasinaOras {
private:
	int capacitate;
	std::string culoare;

public:
	std::string getName();
	int getCapacitate();
	std::string getCuloare();
	void setCapacitate(int);
	void setCuloare(std::string);
};

class Opel : public MasinaOras {
private:
	int capacitate;
	std::string culoare;
	int anFabricatie;

public:
	int getCapacitate();
	std::string getName();
	std::string getCuloare();
	void setCapacitate(int);
	void setCuloare(std::string);
	void setAnFabricatie(int);
	int getAnFabricatie();
};

class SUV : public Masina {
public:
	virtual std::string getName()=0;
	virtual int getConsum()=0;
};

class RangeRover :public SUV {
private:
	int consum;

public:
	std::string getName();
	int getConsum();
	void setConsum(int);
};


#endif // !CARS_H
