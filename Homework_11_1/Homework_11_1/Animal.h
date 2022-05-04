#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

using namespace std;

class Animal
{
	int age = 0;
public:
	Animal() { cout << "Constructor Animal\n"; }
	Animal(int a)
	{
		cout << "Constructor animal\n";
		this->age = a;
	}

	Animal(const Animal& a)
	{
		cout << "Animal copy\n";
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
		cout << "Constructor Cat\n";
	}

	Cat(const int& a) :Animal(a)
	{
		cout << "Cat copy\n";
	}

	void print() override
	{
		cout << "Cat age = " << this->Get_age() << endl;
	}
};

class Dog :public Animal
{
public:
	Dog() { cout << "Constructor Dog\n"; }

	Dog(const int& a) :Animal(a)
	{
		cout << "Dog copy\n";
	}

	void print() override { cout << "Dog age = " << this->Get_age() << endl; }
};

class Parrot :public Animal
{
public:
	Parrot() { cout << "Constructor Parrot\n"; }

	Parrot(const int& a) :Animal(a)
	{
		cout << "Parrot copy\n";
	}

	void print() override { cout << "Parrot age = " << this->Get_age() << endl; }
};
#endif
