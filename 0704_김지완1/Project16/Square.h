#pragma once
#include <iostream>
#include "Shape.h"

using namespace std;
class Square:public Shape
{
	
public:
	int byun;
	Square(int num1) :byun(num1) {}
public:
	Square();
	~Square();
	void length();
	void area();
};

