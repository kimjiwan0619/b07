#pragma once
class Calc
{
private:
	int num1;
	int num2;
public:
	Calc(int number1, int number2) :num1(number1), num2(number2) {}
	Calc();
	~Calc();
	void show();

	void yakbun();
	Calc duhagi(Calc b);
	
	Calc bbegi(Calc b);
	Calc gobhagi(Calc b);
	Calc nanugi(Calc b);

	Calc operator+(Calc b);


	int getNum1() { return num1; }
	int getNum2() { return num2; }

};
