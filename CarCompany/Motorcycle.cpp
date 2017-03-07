#include "stdafx.h"
#include "Motorcycle.h"

Motorcycle::Motorcycle()
{}

Motorcycle::Motorcycle(float prix, VehiculeBrand vehiculeBrand, double speed) :Vehicule(prix,vehiculeBrand), speed(speed){
}

void Motorcycle::toString(map<VehiculeBrand, string> mapVehiculeBrand) const {
	Vehicule::toString(mapVehiculeBrand);
	cout << "C'est une moto allant a jusqu'à " << speed << " km/h." << endl << endl ;

}

Motorcycle::~Motorcycle()

{}
