#include "Human.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	Student a("Михайлов", "Пётр", "Сергеевич", 17, true);

	Boss b("Cергеев", "Алексей", "Михайлович", 37, 8);

	a.print();
	b.print();

	return 0;
}