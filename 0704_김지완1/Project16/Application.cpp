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
	cout << "��������" << endl;
	cout << "-----------------------------" << endl;
	cout << "1.���簢��" << endl;
	cout << "2.���簢��" << endl;
	cout << "3.�ﰢ��" << endl;
	cout << "4.���ﰢ��" << endl;
	cout << "5.��" << endl;
	cout << "-----------------------------" << endl;
	cout << "�Է�::" << endl;

	int input;
	cin >> input;
	if (input == 1)
	{
		cout << "��2��:";
			int a, b;
		cin >> a >> b;
		Rectangle r1(a, b);
		r1.length();
		r1.area();

	}
	if (input == 2)
	{
		cout << "��1��:";
		int a;
		cin >> a;
		Square r1(a);
		r1.length();
		r1.area();
	}
	if (input == 3)
	{
		cout << "�Ѻ� ����:";
		int a, b;
		cin >> a >> b;
		Triangle r1(a, b);
		r1.area();
	}
	if (input == 4)
	{
		cout << "��1�� ����:";
		int a,b;
		cin >> a>>b;
		Jungtriangle r1(a,b);
		r1.length();
		r1.area();
	}
	if (input == 5)
	{
		cout << "������:";
		int a, b;
		cin >> a >> b;
		Circle r1(a);
		r1.length();
		r1.area();
	}
}
