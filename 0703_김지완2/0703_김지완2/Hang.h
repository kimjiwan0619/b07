#pragma once
#include<iostream>

using namespace std;

class Hang
{
private:
	int Y;
	int X;
	int** mat;
public:
	Hang(int number1, int number2) :Y(number1), X(number2) {}
	Hang();
	~Hang();
	void make();
	void show();
	void plus(Hang a, Hang b);
	void minus(Hang a, Hang b);
	void mul(Hang a, Hang b);
	void run();
};

