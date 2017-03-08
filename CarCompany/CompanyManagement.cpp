#include "stdafx.h"
#include "CompanyManagement.h"


CompanyManagement::CompanyManagement()
{
}

CompanyManagement::CompanyManagement(string name, vector<Car*>  carAvailable, vector<Motorcycle*> motoAvailable) {
	this->name = name;
	this->carAvailable = carAvailable;
	this->motoAvailable = motoAvailable;
}

vector<Car*> CompanyManagement::getCarAvailable(){
	return carAvailable;
}

vector<Motorcycle*> CompanyManagement::getMotoAvailable()
{
	return motoAvailable;
}

CompanyManagement::~CompanyManagement(){
}

void CompanyManagement::afficher(ostream &flux) const {

	flux << name ;

}