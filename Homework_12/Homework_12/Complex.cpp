#include "Complex.h"

using namespace std;

bool Complex::operator >(const Complex& n2)
{
	if (sqrt(this->re * this->re + this->im * this->im) > sqrt(n2.re * n2.re + n2.im * n2.im))
	{
		return 1;
	}

	else
	{
		return 0;
	}
}

bool Complex::operator <=(const Complex& n2)
{
	if (sqrt(this->re * this->re + this->im * this->im) <= sqrt(n2.re * n2.re + n2.im * n2.im))
	{
		return 1;
	}

	else
	{
		return 0;
	}
}

ostream& operator <<(ostream& out, const Complex& n1)
{
	if (n1.im == 0)
	{
		out << n1.re;
	}

	else if (n1.re == 0)
	{
		out << n1.im;
	}

	else if (n1.im < 0)
	{
		out << n1.re << " - " << n1.im * (-1) << "*i";
	}

	else if (n1.im == 1)
	{
		out << n1.re << " + i";
	}

	else
	{
		out << n1.re << " + " << n1.im << "*i";
	}
	return out;
}

double Complex::Change_re(double x)
{
	return  re = x;
}

double Complex::Change_im(double y)
{
	return  im = y;
}