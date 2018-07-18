#pragma once
#include <iostream>
#include "Shape.h"

using namespace std;
class Jungtriangle:public Shape
{	
public:
	int byun;
	int height;
	Jungtriangle(int num1,int num2) :byun(num1), height(num2) {}
	Jungtriangle();
	~Jungtriangle();
	void length();
	void area();

};

