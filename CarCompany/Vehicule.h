#pragma once

class Vehicule {

protected:

	float cost;
	float mileAge = 0;
	VehiculeBrand vehiculeBrand;

public:

	Vehicule();
	Vehicule(float cost, VehiculeBrand vehiculeBrand);

	float getcost();
	float getMilAge();
	void setMileAge(float milaAge);

	virtual void toString(map<VehiculeBrand, string> mapVehiculeBrand) const;
	virtual ~Vehicule();          
};
