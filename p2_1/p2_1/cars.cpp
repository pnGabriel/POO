#include "cars.h"

//DACIA
std::string Dacia::getName() { return "Dacia"; }
int Dacia::getCapacitate() { return this->capacitate; }
std::string Dacia::getCuloare() { return this->culoare; }
void Dacia::setCapacitate(int c) { this->capacitate = c; }
void Dacia::setCuloare(std::string c) { this->culoare = c; }

//OPEL
std::string Opel::getName() { return "Opel"; }
int Opel::getCapacitate() { return this->capacitate; }
std::string Opel::getCuloare() { return this->culoare; }
void Opel::setCapacitate(int c) { this->capacitate = c; }
void Opel::setCuloare(std::string c) { this->culoare = c; }
void Opel::setAnFabricatie(int an) { this->anFabricatie = an; }
int Opel::getAnFabricatie() { return this->anFabricatie; }

//RANGEROVER
std::string RangeRover::getName() { return "Range Rover"; }
int RangeRover::getConsum() { return this->consum; }
void RangeRover::setConsum(int c) { this->consum = c; }