#pragma once

class Car : public Vehicule {

private:
	
	CarType carType;

	vector<PossibleOption> optionTaken;
	int nbrDoor;
	float totalCost;

public:

	Car();
	Car(float cost, VehiculeBrand vehiculeBrand, int doors, CarType carType);
	
	void setOptionTaken(vector<PossibleOption> optionTaken);
	void setTotalPrice(map<PossibleOption, float> mapOptionPrice);

	vector<PossibleOption> getOptionTaken();
	CarType getCarType();
	PossibleOption getPossobleOption();
	int getNbrDoor();
	float getTotalCost();
	float getTotalPrice();

	virtual void toString(map<VehiculeBrand, string> mapVehiculeBrand, map<CarType, string> mapCarType) const;

	virtual ~Car();


};