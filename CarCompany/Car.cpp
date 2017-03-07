#include "stdafx.h"
#include "Car.h"


//	CONSTRUCTORS

Car::Car()
{}

Car::Car(float cost, VehiculeBrand vehiculeBrand, int door, CarType carType):Vehicule(cost, vehiculeBrand) {
	this->nbrDoor = door;
	this->carType = carType;
}

//	TO-STRING

void Car::toString(map<VehiculeBrand, string> mapVehiculeBrand, map<CarType, string> mapCarType) const {
	Vehicule::toString(mapVehiculeBrand);
	cout << "C'est une voiture avec " << nbrDoor << " portes de type " << mapCarType[carType] << endl << endl;
}

//	SETTERS

void Car::setOptionTaken(vector<PossibleOption> optionTaken) {
	this->optionTaken = optionTaken;
}

void Car::setTotalPrice(map<PossibleOption, float> mapOptionPrice) {
	int i;
	this->totalCost = getcost();
	
	map<PossibleOption, float>::iterator p;
	for (i = 0; i < optionTaken.size(); i++) {
	  this->totalCost = this->totalCost + mapOptionPrice[optionTaken[i]];
  }
  
}

//	GETTERS

vector<PossibleOption> Car::getOptionTaken() {
	return optionTaken;
}

CarType Car::getCarType(){
	return CarType();
}

PossibleOption Car::getPossobleOption(){
	return PossibleOption();
}

int Car::getNbrDoor(){
	return nbrDoor;
}

float Car::getTotalCost(){
	return totalCost;
}

float Car::getTotalPrice() {
	return totalCost;
}

//	DESTRUCTOR

Car::~Car()
{}