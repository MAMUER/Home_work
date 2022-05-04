#include "CLASS.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	Property* arr[7];

	double A = rand() % 20000000 + 100000;

	Apartment a(A);

	double B = rand() % 20000000 + 100000;

	Apartment b(B);

	double C = rand() % 20000000 + 100000;

	Apartment c(C);

	double D = rand() % 20000000 + 100000;

	Car d(D);

	double E = rand() % 20000000 + 100000;

	Car e(E);

	double F = rand() % 20000000 + 100000;

	CountryHouse f(F);

	double G = rand() % 20000000 + 100000;

	CountryHouse g(G);

	arr[0] = &a;
	arr[1] = &b;
	arr[2] = &c;
	arr[3] = &d;
	arr[4] = &e;
	arr[5] = &f;
	arr[6] = &g;

	cout << "Налог = " << a.tax(A) << endl;

	cout << "Налог = " << b.tax(B) << endl;

	cout << "Налог = " << c.tax(C) << endl;

	cout << "Налог = " << d.tax(D) << endl;

	cout << "Налог = " << e.tax(E) << endl;

	cout << "Налог = " << f.tax(F) << endl;

	cout << "Налог = " << g.tax(G) << endl;

}
