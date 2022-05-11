#ifndef HUMAN_H
#define HUMAN_H

#include <iostream>
#include <string>

using namespace std;

class Human
{
protected:
	string surname;
	string name;
	string midname;
	int age;

public:
	Human()
	{
		this->surname = "";
		this->name = "";
		this->midname = "";
		this->age = 0;
	}

	Human(string a, string b, string c, int d)
	{
		this->surname = a;
		this->name = b;
		this->midname = c;
		this->age = d;
	}

	virtual ~Human() = default;

	virtual void print() = 0;
};

class Student :public Human
{
	bool on_lesson = false;
public:
	Student()
	{
		this->on_lesson = false;
	}

	Student(const string& a, const string& b, const string& c, const int& d, const bool& e) :Human(a, b, c, d)
	{
		this->on_lesson = e;
	}

	void print() override
	{
		cout << surname << " " << name << " " << midname << " " << age << " лет,";

		if (on_lesson)
		{
			cout << " на уроке " << endl;
		}

		else 
		{
			cout << " не на уроке " << endl;
		}
	}
};

class Boss :public Human
{
	int number_of_workers;
public:
	Boss()
	{
		this->number_of_workers = 0;
	}

	Boss(const string& a, const string& b, const string& c, const int& d, const int& e) :Human(a, b, c, d)
	{
		this->number_of_workers = e;
	}

	void print() override
	{
		cout << surname << " " << name << " " << midname << " " << age << " лет, " << number_of_workers << " работников" << endl;
	}
};
#endif
