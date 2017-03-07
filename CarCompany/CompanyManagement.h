#pragma once
class CompanyManagement
{
private:

	vector<Car*> carAvailable;
	vector<Motorcycle*> motoAvailable;

public:

	CompanyManagement();
	CompanyManagement(vector<Car*> carAvailable,vector<Motorcycle*> motoAvailable);

	vector<Car*> getCarAvailable();
	vector<Motorcycle*> getMotoAvailable();

	~CompanyManagement();
};

