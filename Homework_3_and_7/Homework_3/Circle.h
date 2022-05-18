#ifndef Circle_H
#define Circle_H

#include <iostream>

using namespace std;

class Circle
{
private:

    double r = 0;

public:
	Circle() //Constructor
	{

	}

	Circle(double r) //Constructor
	{
		this->r = r;
	}

	Circle(const Circle& a) //Copy
	{
		this->r = a.r;
	}

	~Circle() //Destructor
	{

	}

    double Set_r();

    void Print_parametres();

    double Get_diameter();

    double Get_circumference_length();

    double Get_area();
};

#endif
