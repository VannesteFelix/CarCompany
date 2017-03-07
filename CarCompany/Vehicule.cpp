#include "stdafx.h"
#include "Vehicule.h"

//	CONSTRUCTORS

Vehicule::Vehicule()
{}

Vehicule::Vehicule(float cost, VehiculeBrand vehiculeBrand) :cost(cost), vehiculeBrand(vehiculeBrand) {
}

//	TO-STRING

void Vehicule::toString(map<VehiculeBrand, string> mapVehiculeBrand) const{
	cout << "Ceci est un vehicule de la marque " << mapVehiculeBrand[vehiculeBrand] << " coutant: " << cost << " euros," << endl;;
}

//	GETTER

float Vehicule::getcost()
{
	return cost;
}

float Vehicule::getMilAge(){
	return mileAge;
}

//	SETTER

void Vehicule::setMileAge(float milaAge) {
	this->mileAge = milaAge;
}

//	DESTRUCTOR

Vehicule::~Vehicule(){
}

