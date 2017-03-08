#include "stdafx.h"

ostream& operator<<(ostream &flux, CompanyManagement const& duree) {
	duree.afficher(flux);
	return flux;
}

int main()
{

	//	MAP	ENUM

	map<VehiculeBrand, string> mapVehiculeBrand = {
		{ VehiculeBrand::renault,"renault" },
		{ VehiculeBrand::citroen,"citroen" } ,
		{ VehiculeBrand::toyota,"toyota" } 
	};

	map<CarType, string> mapCarType = { 
		{ CarType::decapotable,"decapotable" },
		{ CarType::coupe,"coupe" } ,
		{ CarType::sedan,"sedan" } 
	};

	map<CarType, vector<PossibleOption>> mapCarOption = {
		{ CarType::decapotable,{PossibleOption::fenetre,PossibleOption::moteur,PossibleOption::porte,PossibleOption::roue,PossibleOption::volant}},
		{ CarType::coupe,{PossibleOption::fenetre,PossibleOption::moteur,PossibleOption::porte,PossibleOption::roue}},
		{ CarType::sedan,{PossibleOption::fenetre,PossibleOption::moteur,PossibleOption::porte}}
	};

	map<PossibleOption, float> mapOptionPrice = { 
		{PossibleOption::fenetre,10 },
		{PossibleOption::moteur,12 },
		{PossibleOption::porte,14 },
		{PossibleOption::roue,20 },
		{PossibleOption::volant,25 } 
	
	};
	
	//	INITIALIZATION VEHICULE

	Motorcycle moto(15, VehiculeBrand::renault, 80);

	Car car(10, VehiculeBrand::citroen, 4, CarType::coupe);
	vector<PossibleOption> optionTaken{ PossibleOption::fenetre,PossibleOption::porte };
	car.setOptionTaken(optionTaken);
	car.setTotalPrice(mapOptionPrice);

	//	TO-STRING
	car.toString(mapVehiculeBrand, mapCarType);
	moto.toString(mapVehiculeBrand);

	//	INITIALIZATION CAR COMPANY

	vector<Car*> carAvailable;
	vector<Motorcycle*> motoAvailable;
	carAvailable.push_back(&car);
	motoAvailable.push_back(&moto);

	CompanyManagement myVehiculeCompany("first try",carAvailable,motoAvailable);
	CompanyManagement myVehiculeCompany2("second try", carAvailable, motoAvailable);

	//	TO-STRING

	myVehiculeCompany.getCarAvailable()[0]->toString(mapVehiculeBrand, mapCarType);
	myVehiculeCompany.getMotoAvailable()[0]->toString(mapVehiculeBrand);
	
	cout << myVehiculeCompany << " et " << myVehiculeCompany2 << endl;


    return 0;
}