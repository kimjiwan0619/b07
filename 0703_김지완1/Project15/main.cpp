#include <iostream>
#include "Calc.h"
using namespace std;


int main()
{
	cout << "����,�и�(0ġ�� �ʴ°� ������?)" << endl;
	int a,b;
	cin >> a;
	cin >> b;
	if (b == 0)
	{
		cout << "���ݵ�?" << endl;
		return 0
	}
	Calc nb1(a, b);
	nb1.yakbun();
	nb1.show();
	cout << "����,�и�(0ġ�� �ʴ°� ������?)" << endl;
	int x, y;
	cin >> x >> y;
	if (y == 0)
	{
		cout << "���ݵ�?" << endl;
		exit(0);
	}

	Calc nb2(x, y);
	nb2.yakbun();
	nb2.show();
	while (1) {
		cout << "-------------------------" << endl;
		cout << "1.���ϱ�" << endl;
		cout << "2.����" << endl;
		cout << "3.���ϱ�" << endl;
		cout << "4.������" << endl;
		cout << "0.��" << endl;
		cout << "-------------------------" << endl;
		cout << "�Է�:" << endl;

		int input;
		cin >> input;
		if (input == 1)
		{
			Calc c = nb1+nb2;
			c.show();
		}
		else if (input == 2)
		{
			Calc d = nb1.bbegi(nb2);
			d.show();
		}
		else if (input == 3)
		{
			Calc e = nb1.gobhagi(nb2);
			e.show();
		}
		else if (input == 4)
		{
			Calc f = nb1.nanugi(nb2);
			f.show();
		}
		else
		{
			break;
		}
	}

}