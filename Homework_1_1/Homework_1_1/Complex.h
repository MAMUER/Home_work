#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

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

	Complex Get_sum(Complex n1, Complex n2);

	Complex Get_dif(Complex n1, Complex n2);

	Complex Get_pro(Complex n1, Complex n2);

	Complex Get_rat(Complex n1, Complex n2);

	double Get_module(Complex x);

	Complex Max_complex(Complex x, Complex y);
};

#endif