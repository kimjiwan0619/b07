#pragma once
#include <iostream>
#include "Shape.h"

using namespace std;
class Rectangle:public Shape
{
public:
	int byun1;
	int byun2;
	Rectangle(int num1, int num2) :byun1(num1), byun2(num2) {}
public:
	Rectangle();
	~Rectangle();
	void length();
	void area();
};

