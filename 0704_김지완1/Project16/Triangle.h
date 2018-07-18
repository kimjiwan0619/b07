#pragma once
#include <iostream>
#include "Shape.h"

using namespace std;

class Triangle:public Shape
{
	
public:
	int byun;
	int height;
	Triangle(int num1, int num2) :byun(num1), height(num2) {}
public:
	Triangle();
	~Triangle();
	void length();
	void area();
};

