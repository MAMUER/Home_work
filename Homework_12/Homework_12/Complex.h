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

	friend ostream& operator <<(ostream& out, const Complex& n1);

	bool operator >(const Complex& n2);

	bool operator <=(const Complex& n2);

	double Change_re(double x);

	double Change_im(double y);
};

#endif