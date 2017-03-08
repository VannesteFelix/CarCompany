#pragma once
class CompanyManagement
{
private:

	string name;
	vector<Car*> carAvailable;
	vector<Motorcycle*> motoAvailable;
	static int nbrOfCompany;

	void afficher(ostream &flux) const;


public:

	CompanyManagement();
	CompanyManagement(string name, vector<Car*> carAvailable,vector<Motorcycle*> motoAvailable);

	vector<Car*> getCarAvailable();
	vector<Motorcycle*> getMotoAvailable();
	int getNbrOfCompany();

	//	operator overload
	friend std::ostream& operator<<(ostream &flux, CompanyManagement const& duree);

	~CompanyManagement();
};

