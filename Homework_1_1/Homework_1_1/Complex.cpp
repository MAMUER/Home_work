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

Complex Complex::Get_sum(Complex n1, Complex n2)
{
	Complex sum;

	sum.Change_re(n1.re + n2.re);

	sum.Change_im(n1.im + n2.im);

	cout << "(";

	n1.Print_Complex();

	cout << ") + (";

	n2.Print_Complex();

	cout << ") = ";

	sum.Print_Complex();

	return sum;
}

Complex Complex::Get_dif(Complex n1, Complex n2)
{
	Complex dif;

	dif.Change_re(n1.re - n2.re);

	dif.Change_im(n1.im - n2.im);

	cout << "(";

	n1.Print_Complex();

	cout << ") - (";

	n2.Print_Complex();

	cout << ") = ";

	dif.Print_Complex();

	return dif;
}

Complex Complex::Get_pro(Complex n1, Complex n2)
{
	Complex pro;

	pro.Change_re(n1.re * n2.re - n1.im * n2.im);

	pro.Change_im(n1.im * n2.re + n1.re * n2.im);

	cout << "(";

	n1.Print_Complex();

	cout << ") * (";

	n2.Print_Complex();

	cout << ") = ";

	pro.Print_Complex();

	return pro;
}

Complex Complex::Get_rat(Complex n1, Complex n2)
{
	Complex rat;

	rat.Change_re((n1.re * n2.re + n1.im * n2.im) / (n2.re * n2.re + n2.im * n2.im));

	rat.Change_im((n1.im * n2.re - n1.re * n2.im) / (n2.re * n2.re + n2.im * n2.im));

	cout << "(";

	n1.Print_Complex();

	cout << ") / (";

	n2.Print_Complex();

	cout << ") = ";

	rat.Print_Complex();

	return rat;
}

double Complex::Get_module(Complex x)
{
	cout << "\n|";

	x.Print_Complex();

	cout << "| = ";

	cout << sqrt(x.re * x.re + x.im * x.im) << "\n";

	return sqrt(re * re + im * im);
}

Complex Complex::Max_complex(Complex x, Complex y)
{
	if (x.re == y.re and x.im == y.im)
	{
		cout << "\nЧисла равны\n";

		return x;
	}

	else if (sqrt(x.re * x.re + x.im * x.im) > sqrt(y.re * y.re + y.im * y.im))
	{
		cout << "\nМодуль ";

		x.Print_Complex();

		cout << " > модуля ";

		y.Print_Complex();

		cout << "\n";

		return y;
	}

	else
	{
		cout << "\nМодуль ";

		y.Print_Complex();

		cout << " > модуля ";

		x.Print_Complex();

		cout << "\n";

		return x;
	}
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