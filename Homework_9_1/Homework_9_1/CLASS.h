#ifndef CLASS_H
#define CLASS_H

#include <iostream>

using namespace std;

class Property
{
private:
	double worth;
public:
	Property()
	{
		this->worth = 0;
	}

	Property(double a)
	{
		this->worth = a;
	}

	friend ostream& operator <<(ostream& buff, const Property& n1)
	{
		buff << n1.worth << "\n";
		return buff;
	}

	virtual ~Property() = default;

	virtual double tax(double a) = 0;
};

class Apartment :public Property
{
public:
	Apartment(const double& a) :Property(a)
	{

	}

	double tax(double a) override
	{
		return a / 1000;
	}
};

class Car :public Property
{
public:
	Car(const double& a) :Property(a)
	{

	}

	double tax(double a) override
	{
		return a / 200;
	}
};

class CountryHouse :public Property
{
public:
	CountryHouse(const double& a) :Property(a)
	{

	}

	double tax(double a) override
	{
		return a / 500;
	}
};

#endif
