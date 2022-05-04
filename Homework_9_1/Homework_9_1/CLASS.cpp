#include "CLASS.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	Property* arr[7];

	double A = rand() % 20'000'000 + 100000;
	
	arr[0] = new Apartment(A);
	A = rand() % 20'000'000 + 100000;
	arr[1] = new Apartment(A);
	arr[2] = new Apartment(A);
	arr[3] = new Car(A);
	arr[4] = new Car(A);
	arr[5] = new CountryHouse(A);
	arr[6] = new CountryHouse(A);

	cout << "Налог = " << a.tax() << endl;

	cout << "Налог = " << b.tax() << endl;

	cout << "Налог = " << c.tax() << endl;

	cout << "Налог = " << d.tax() << endl;

	cout << "Налог = " << e.tax() << endl;

	cout << "Налог = " << f.tax() << endl;

	cout << "Налог = " << g.tax() << endl;

}
