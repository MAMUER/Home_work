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

	cout << "�������� ������:\n1 - ������\n2 - ����\n\n��� ������� 0, ����� ����� �� ���������\n\n";

	cin >> i;

	if (i == 1)
	{
		cout << "\n������� x ���������� �������\n";

		a2.Set_x();

		cout << "\n������� y ���������� �������\n";

		a2.Set_y();

		cout << "\n������� z ���������� �������\n";

		a2.Set_z();

		cout << "\n������� x ���������� ������� �������\n";

		a1.Set_x();

		cout << "\n������� y ���������� ������� �������\n";

		a1.Set_y();

		cout << "\n������� z ���������� ������� �������\n";

		a1.Set_z();
	it:		
		cout << "\n�������� ��������:\n0 - ����� �� ���������\n1 - ����� ������ �������\n2 - ����� ��������� ������������\n3 - ����� ��������� ������������\n4 - ����� ����� ��������\n5 - ����� �������� ��������\n6 - ����� ��������� ������� �� �����\n\n";
		
		cin >> i;

		if (i == 1)
		{
			th:
			cout << "\n������ ������ ������� �����? (1 ��� 2)\n";

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
				cout << "������� 1 ��� 2";
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
			cout << "\n������� �����\n";

			double nubmer = 0;

			cin >> nubmer;

			cout << "\n����� ������ �������� �� �����? (1 ��� 2)\n";

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
				cout << "������� 1 ��� 2";
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
			cout << "������� 1, 2, 3, 4, 5, 6 ��� 0";
			goto it;
		}
	}

	else if (i == 2)
	{
		cout << "\n������� ������ �����\n\n";

		b.Set_r();

	there:

		cout << "\n�������� ��������:\n0 - ����� �� ���������\n1 - ������� ��������� �����\n\n";

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
			cout << "������� 1 ��� 0";
			goto there;
		}
	}

	else if (i == 0)
	{
		return 0;
	}

	else
	{
		cout << "\n������� 1 ��� 2\n\n";
		goto here;
	}
}