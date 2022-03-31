#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Complex
{
private:

	double re = 0;
	double im = 0;

public:

	double Set_re();

	double Set_im();

	double Change_re(double x);

	double Change_im(double y);

	void Print_Complex();

	double Get_module(Complex x);
};

#endif