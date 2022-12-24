// Dog.h

#ifndef DOG_H
#define DOG_H
#include<iostream>
using namespace std;

class Dog
{
private:
	string name = "";
	float weight = 0.;
	int age = 0;
public:
	Dog(string name, float weight, int age)
	{
		this->name = name;
		this->weight = weight;
		this->age = age;
	}
	//-----------------------------------------
	~Dog() {}
	//-----------------------------------------
	void displayDog()
	{
		cout << "NAME:  " << name << endl
			<< "WEIGHT:  " << weight << " pounds" << endl
			<< "AGE:  " << age << " years old." << endl;
	}
	//-----------------------------------------
	bool operator >= (int age)
	{
		if (age >= 2)
			return true;
		else
			return false;
	}
	//-----------------------------------------
	bool operator < (Dog & dog)
	{
		if (weight < dog.weight)
			return true;
		else
			return false;
	}
	//-----------------------------------------
	bool operator == (Dog& dog)
	{
		if (name == dog.name)
			return true;
		else
			return false;
	}
	//-----------------------------------------
	friend ostream& operator << (ostream& stream, Dog& dog)
	{
		stream << "NAME:  " << dog.name << endl
			<< "WEIGHT:  " << dog.weight << " pounds" << endl
			<< "AGE:  " << dog.age << " years old." << endl;
		return stream;
	}
};

#endif