#include "Application.h"
#include<iostream>

using namespace std;


Application::Application()
{
}


Application::~Application()
{
}

void Application::run()
{
	cout << "도형선택" << endl;
	cout << "-----------------------------" << endl;
	cout << "1.직사각형" << endl;
	cout << "2.정사각형" << endl;
	cout << "3.삼각형" << endl;
	cout << "4.정삼각형" << endl;
	cout << "5.원" << endl;
	cout << "-----------------------------" << endl;
	cout << "입력::" << endl;

	int input;
	cin >> input;
	if (input == 1)
	{
		cout << "변2개:";
			int a, b;
		cin >> a >> b;
		Rectangle r1(a, b);
		r1.length();
		r1.area();

	}
	if (input == 2)
	{
		cout << "변1개:";
		int a;
		cin >> a;
		Square r1(a);
		r1.length();
		r1.area();
	}
	if (input == 3)
	{
		cout << "한변 높이:";
		int a, b;
		cin >> a >> b;
		Triangle r1(a, b);
		r1.area();
	}
	if (input == 4)
	{
		cout << "변1개 높이:";
		int a,b;
		cin >> a>>b;
		Jungtriangle r1(a,b);
		r1.length();
		r1.area();
	}
	if (input == 5)
	{
		cout << "반지름:";
		int a, b;
		cin >> a >> b;
		Circle r1(a);
		r1.length();
		r1.area();
	}
}
