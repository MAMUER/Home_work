#include "Animal.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	Cat a(7);

	Dog b(6);

	Parrot c(3);

	Cat d = a;

	a.print();
	d.print();
	b.print();
	c.print();

	return 0;
}