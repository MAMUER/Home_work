#include "Vector.h"
#include "Circle.h"

int main()
{
	setlocale(LC_ALL, "rus");

	int i = 0;

	Vector a1;

	Vector a2;

	Circle b;

	Circle d;

here:

	cout << "Choose object:\n1 - vector\n2 - circle\n\nÈëè ââåäèòå 0, ÷òîáû âûéòè èç ïðîãðàììû\n\n";

	cin >> i;

	if (i == 1)
	{
		cout << "\nFirst vector x coordinate\n";

		a2.Set_x();

		cout << "\nFirst vector y coordinate\n";

		a2.Set_y();

		cout << "\nFirst vector z coordinate\n";

		a2.Set_z();

		cout << "\nOther vector x coordinate\n";

		a1.Set_x();

		cout << "\nOther vector y coordinate\n";

		a1.Set_y();

		cout << "\nOther vector z coordinate\n";

		a1.Set_z();
	it:		
		cout << "\nÂûáåðèòå äåéñòâèå:\n0 - âûéòè èç ïðîãðàììû\n1 - íàéòè ìîäóëü âåêòîðà\n2 - íàéòè ñêàëÿðíîå ïðîèçâåäåíèå\n3 - íàéòè âåêòîðíîå ïðîèçâåäåíèå\n4 - íàéòè ñóììó âåêòîðîâ\n5 - íàéòè ðàçíîñòü âåêòîðîâ\n6 - íàéòè óìíîæåíèå âåêòîðà íà ÷èñëî\n\n";
		
		cin >> i;

		if (i == 1)
		{
			th:
			cout << "\nÌîäóëü êàêîãî âåêòîðà íàéòè? (1 èëè 2)\n";

			int k = 0;
			cin >> k;

			if (k == 1)
			{
				a2.Get_module(a2);
			}

			else if (k == 2)
			{
				a1.Get_module(a1);
			}

			else
			{
				cout << "Ââåäèòå 1 èëè 2";
				goto th;
			}
			goto it;
		}

		else if (i == 2)
		{		
			a2.Get_scalar_product(a1, a2);
			goto it;
		}

		else if (i == 3)
		{
			a1.Get_vector_product(a1, a2);
			goto it;
		}

		else if (i == 4)
		{
			a1.Get_sum(a1, a2);
			goto it;
		}

		else if (i == 5)
		{
			a1.Get_dif(a1, a2);
			goto it;
		}

		else if (i == 6)
		{
		ht:
			cout << "\nÂâåäèòå ÷èñëî\n";

			double nubmer = 0;

			cin >> nubmer;

			cout << "\nÊàêîé âåêòîð óìíîæèòü íà ÷èñëî? (1 èëè 2)\n";

			int k = 0;
			cin >> k;

			if (k == 1)
			{
				a2.Get_mul_number(a2, nubmer);
			}

			else if (k == 2)
			{
				a1.Get_mul_number(a1, nubmer);
			}

			else
			{
				cout << "Ââåäèòå 1 èëè 2";
				goto ht;
			}
			goto it;
		}

		else if (i == 0)
		{
			return 0;
		}

		else
		{
			cout << "Ââåäèòå 1, 2, 3, 4, 5, 6 èëè 0";
			goto it;
		}
	}

	else if (i == 2)
	{
		cout << "\nÂâåäèòå ðàäèóñ êðóãà\n\n";

		b.Set_r();

	there:

		cout << "\nÂûáåðèòå äåéñòâèå:\n0 - âûéòè èç ïðîãðàììû\n1 - âûâåñòè ïàðàìåòðû êðóãà\n\n";

		cin >> i;

		if (i == 1)
		{
			b.Print_parametres();
			goto there;
		}

		else if (i == 0)
		{
			return 0;
		}

		else
		{
			cout << "Ââåäèòå 1 èëè 0";
			goto there;
		}
	}

	else if (i == 0)
	{
		return 0;
	}

	else
	{
		cout << "\nÂâåäèòå 1 èëè 2\n\n";
		goto here;
	}
}
