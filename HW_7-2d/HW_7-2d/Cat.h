// Cat.h

#include<iostream>
#include<string>
using namespace std;

#ifndef CAT_H
#define CAT_H

class Cat
{
private:
	int weight;
	string color;
public:
	Cat();
	~Cat();
	void setWeight(int weight);
	void setColor(string color);
	void displayInfo();
	void meow();
};
#endif 