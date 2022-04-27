#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

using namespace std;

class Animal
{
	int age = 0;
public:
	Animal() { cout << "конструктор животного\n"; }
	Animal(int a)
	{
		cout << "конструктор животного\n";
		this->age = a;
	}

	Animal(const Animal& a)
	{
		cout << "копирование\n";
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
		cout << "конструктор кота\n";
	}

	Cat(const int& a) :Animal(a)
	{
		cout << "конструктор кота\n";
	}

	void print() override
	{
		cout << "Возраст кота = " << this->Get_age() << endl;
	}
};

class Dog :public Animal
{
public:
	Dog() { cout << "конструктор собаки\n"; }

	Dog(const int& a) :Animal(a)
	{
		cout << "конструктор собаки\n";
	}

	void print() override { cout << "Возраст собаки = " << this->Get_age() << endl; }
};

class Parrot :public Animal
{
public:
	Parrot() { cout << "конструктор попугая\n"; }

	Parrot(const int& a) :Animal(a)
	{
		cout << "конструктор попугая\n";
	}

	void print() override { cout << "Возраст попугая = " << this->Get_age() << endl; }
};
#endif