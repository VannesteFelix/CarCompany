#include "stdafx.h"
#include "CompanyManagement.h"

//	init static element

int CompanyManagement::nbrOfCompany = 0;

//	operator overload

ostream& operator<<(ostream &flux, CompanyManagement const& duree) {
	duree.afficher(flux);
	return flux;
}

//	-------------------------------------------------------

CompanyManagement::CompanyManagement()
{
}

CompanyManagement::CompanyManagement(string name, vector<Car*>  carAvailable, vector<Motorcycle*> motoAvailable) {
	this->name = name;
	this->carAvailable = carAvailable;
	this->motoAvailable = motoAvailable;
	++nbrOfCompany;
}

vector<Car*> CompanyManagement::getCarAvailable(){
	return carAvailable;
}

vector<Motorcycle*> CompanyManagement::getMotoAvailable()
{
	return motoAvailable;
}

int CompanyManagement::getNbrOfCompany()
{
	return nbrOfCompany;
}

CompanyManagement::~CompanyManagement(){
}

void CompanyManagement::afficher(ostream &flux) const {

	flux << name ;

}