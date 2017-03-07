#pragma once

class Motorcycle : public Vehicule {

private:

	double speed;

public:

	Motorcycle();
	Motorcycle(float prix, VehiculeBrand vehiculeBrand, double vitesseMax);

	virtual void toString(map<VehiculeBrand, string> mapVehiculeBrand) const;
	virtual ~Motorcycle();

};