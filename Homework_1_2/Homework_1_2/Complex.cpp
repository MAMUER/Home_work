#include "Complex.h"

using namespace std;

double Complex::Set_re()
{
	cin >> re;

	return re;
}

double Complex::Set_im()
{
	cin >> im;

	return im;
}

double Complex::Change_re(double x)
{
	return  re = x;
}

double Complex::Change_im(double y)
{
	return  im = y;
}

double Complex::Get_module(Complex x)
{
	cout << "\n|";

	x.Print_Complex();

	cout << "| = ";

	cout << sqrt(x.re * x.re + x.im * x.im) << "\n";

	return sqrt(re * re + im * im);
}

void Complex::Print_Complex()
{
	if (im == 0)
	{
		cout << re;
	}

	else if (re == 0)
	{
		cout << im << "*i";
	}

	else if (im < 0)
	{
		cout << re << " - " << im * (-1) << "*i";
	}

	else if (im == 1)
	{
		cout << re << " + i";
	}

	else
	{
		cout << re << " + " << im << "*i";
	}
}