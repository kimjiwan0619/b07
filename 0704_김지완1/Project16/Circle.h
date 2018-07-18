#pragma once
#include <iostream>
#include "Shape.h"

using namespace std;
class Circle:public Shape
{
public:
	int rad;
	Circle(int num1) :rad(num1) {}
	Circle();
	~Circle();
	
	void length();
	void area();

};

