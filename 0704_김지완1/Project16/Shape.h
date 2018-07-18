#pragma once
#include <iostream>

using namespace std;
class Shape
{

public:
	Shape();
	~Shape();
	virtual void length()=0;
	virtual void area()=0;
	
	
};

