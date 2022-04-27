#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

using namespace std;

class Animal
{
	int age = 0;
public:
	Animal() { cout << "����������� ���������\n"; }
	Animal(int a)
	{
		cout << "����������� ���������\n";
		this->age = a;
	}

	Animal(const Animal& a)
	{
		cout << "�����������\n";
		this->age = a.age;
	}

	virtual ~Animal() = default;

	int Get_age()
	{
		return this->age;
	}

	virtual void print() = 0;
};

class Cat :public Animal
{
public:
	Cat() :Animal()
	{
		cout << "����������� ����\n";
	}

	Cat(const int& a) :Animal(a)
	{
		cout << "����������� ����\n";
	}

	void print() override
	{
		cout << "������� ���� = " << this->Get_age() << endl;
	}
};

class Dog :public Animal
{
public:
	Dog() { cout << "����������� ������\n"; }

	Dog(const int& a) :Animal(a)
	{
		cout << "����������� ������\n";
	}

	void print() override { cout << "������� ������ = " << this->Get_age() << endl; }
};

class Parrot :public Animal
{
public:
	Parrot() { cout << "����������� �������\n"; }

	Parrot(const int& a) :Animal(a)
	{
		cout << "����������� �������\n";
	}

	void print() override { cout << "������� ������� = " << this->Get_age() << endl; }
};
#endif