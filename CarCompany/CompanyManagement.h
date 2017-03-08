#pragma once
class CompanyManagement
{
private:

	string name;
	vector<Car*> carAvailable;
	vector<Motorcycle*> motoAvailable;

public:

	CompanyManagement();
	CompanyManagement(string name, vector<Car*> carAvailable,vector<Motorcycle*> motoAvailable);

	vector<Car*> getCarAvailable();
	vector<Motorcycle*> getMotoAvailable();

	void afficher(ostream &flux) const;

	~CompanyManagement();
};

