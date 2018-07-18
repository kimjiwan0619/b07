#include <iostream>
#include "Calc.h"
using namespace std;


int main()
{
	cout << "분자,분모(0치지 않는게 좋을걸?)" << endl;
	int a,b;
	cin >> a;
	cin >> b;
	if (b == 0)
	{
		cout << "에반데?" << endl;
		return 0
	}
	Calc nb1(a, b);
	nb1.yakbun();
	nb1.show();
	cout << "분자,분모(0치지 않는게 좋을걸?)" << endl;
	int x, y;
	cin >> x >> y;
	if (y == 0)
	{
		cout << "에반데?" << endl;
		exit(0);
	}

	Calc nb2(x, y);
	nb2.yakbun();
	nb2.show();
	while (1) {
		cout << "-------------------------" << endl;
		cout << "1.더하기" << endl;
		cout << "2.빼기" << endl;
		cout << "3.곱하기" << endl;
		cout << "4.나누기" << endl;
		cout << "0.끝" << endl;
		cout << "-------------------------" << endl;
		cout << "입력:" << endl;

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