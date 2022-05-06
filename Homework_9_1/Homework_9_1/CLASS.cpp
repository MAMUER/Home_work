#include "CLASS.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	Property* arr[7];

	double A = rand() % 20'000'000 + 100'000;

	arr[0] = new Apartment(A);	
	A = rand() % 20'000'000 + 100'000;
	arr[1] = new Apartment(A);
	A = rand() % 20'000'000 + 100'000;
	arr[2] = new Apartment(A);
	A = rand() % 20'000'000 + 100'000;
	arr[3] = new Car(A);
	A = rand() % 20'000'000 + 100'000;
	arr[4] = new Car(A);
	A = rand() % 20'000'000 + 100'000;
	arr[5] = new CountryHouse(A);
	A = rand() % 20'000'000 + 100'000;
	arr[6] = new CountryHouse(A);

	for (int i = 0; i < 7; i++)
	{
		cout << "Налог = " << arr[i]->tax() << endl;
	}	

	for (int i = 0; i < 7; i++)
	{
		delete arr[i];
	}
}
