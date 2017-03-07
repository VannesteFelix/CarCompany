#include "stdafx.h"
#include "CompanyManagement.h"


CompanyManagement::CompanyManagement()
{
}

CompanyManagement::CompanyManagement(vector<Car*>  carAvailable, vector<Motorcycle*> motoAvailable) {
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
