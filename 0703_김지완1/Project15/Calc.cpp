#include "Calc.h"
#include <iostream>

using namespace std;



Calc::Calc()
{
}

Calc::~Calc()
{
}

void Calc::show()
{

		cout <<  num1 << "/" << num2 << endl;

}



void Calc::yakbun()
{

		if (num1 > num2)
		{
			for (int i = num2;i > 0; i = i - 1)
			{
				if (num1%i == 0 && num2%i == 0)
				{
					num1 = num1 / i;
					num2 = num2 / i;
					break;
				}
			}
		}
		else if (num1 < num2)
		{
			for (int i = num1;i > 0; i = i - 1)
			{
				if (num1%i == 0 && num2%i == 0)
				{
					num1 = num1 / i;
					num2 = num2 / i;
					break;
				}
			}
		}
		else
		{
			num1 = 1;
			num2 = 1;
		}
}

Calc Calc::duhagi(Calc b)
{
	
	int a1 = num1 * b.getNum2() + num2 * b.getNum1();
	int a2 = num2 * b.getNum2();
	Calc c(a1, a2);
	c.yakbun();
	return c;
}

Calc Calc::bbegi(Calc b)
{
	int a1 = num1 * b.getNum2() - num2 * b.getNum1();
	int a2 = num2 * b.getNum2();
	Calc c(a1, a2);
	c.yakbun();
	return c;
}

Calc Calc::gobhagi(Calc b)
{
	int a1 = num1 * b.getNum1();
	int a2 = num2 * b.getNum2();
	Calc c(a1, a2);
	c.yakbun();
	return c;
}

Calc Calc::nanugi(Calc b)
{
	int a1 = num1 * b.getNum2();
	int a2 = num2 * b.getNum1();
	Calc c(a1, a2);
	c.yakbun();
	return c;
}

Calc Calc::operator+(Calc b)
{
	Calc c;
	c = duhagi(b);
	return c;
}
