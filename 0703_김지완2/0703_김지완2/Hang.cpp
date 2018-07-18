#include "Hang.h"





Hang::Hang()
{

}


Hang::~Hang()
{
	for (int i = 0; i < Y; i++)
		delete[] mat[i];
	delete[] mat;
}


void Hang::make()
{
	mat = new int*[Y];
	for (int i = 0; i < Y; i++)
		mat[i] = new int[X];
	for (int i = 0; i < Y; i++)
	{
		for (int j = 0; j < X; j++)
		{
			int c;

			cin >> c;
			mat[i][j] = c;
		}
	}
}

void Hang::show()
{
	for (int i = 0; i < Y; i++)
	{
		for (int j = 0; j < X; j++)
		{
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}
}

void Hang::plus(Hang a, Hang b)
{
	if (a.Y == b.Y&&a.X == b.X)
	{
		Y = a.Y;
		X = a.X;
		mat = new int*[Y];
		for (int i = 0; i < Y; i++)
			mat[i] = new int[X];
	
		
		for (int i = 0; i < a.Y; i++)
		{
			for (int j = 0; j < a.X; j++)
			{
				int A = a.mat[i][j];
				int B = b.mat[i][j];
				int C = A + B;
				mat[i][j] = C;
				
			}
		}
	}
	
	else
	{
		cout << "행렬 개못하네" << endl;
	}
}

void Hang::minus(Hang a, Hang b)
{
	if (a.Y == b.Y&&a.X == b.X)
	{
		Y = a.Y;
		X = a.X;
		mat = new int*[Y];
		for (int i = 0; i < Y; i++)
			mat[i] = new int[X];

		for (int i = 0; i < a.Y; i++)
		{
			for (int j = 0; j < a.X; j++)
			{
				int A = a.mat[i][j];
				int B = b.mat[i][j];
				int C = A - B;
				mat[i][j] = C;
			}
		}
	}
	else
	{
		cout << "행렬 개못하네" << endl;
	}
}

void Hang::mul(Hang a, Hang b)
{
	if (a.X == b.Y)
	{
		Y = a.Y;
		X = b.X;
		mat = new int*[Y];
		for (int i = 0; i < Y; i++)
			mat[i] = new int[X];
		for (int i = 0; i < Y;i++)
			for (int j = 0; j < X; j++)
				mat[i][j] = 0;

		for (int i = 0; i < a.Y; i++)
		{
			for (int s = 0; s < b.X; s++)
			{
				for (int j = 0; j < a.X; j++)
				{

					int A=a.mat[i][j] * b.mat[j][s];

					mat[i][s] = mat[i][s]+A;
				}
			}		
		}
		
	}
	else
	{
		cout << "행렬 개못하네" << endl;
	}
}

void Hang::run()
{
	int b, a;
	cout << "행,열:";
	cin >> b >> a;

	Hang h1(b, a);
	h1.make();
	cout << endl;
	h1.show();


	int d, c;
	cout << "행,열:";
	cin >> d >> c;
	Hang h2(d, c);
	h2.make();
	cout << endl;
	h2.show();
	Hang h3;

	cout << "---------------------" << endl;
	cout << "1.더하기" << endl;
	cout << "2.빼기" << endl;
	cout << "3.곱하기" << endl;
	cout << "0.끝" << endl;
	cout << "---------------------" << endl;
	

		int input;
		cout << "입력::";
		cin >> input;
		if (input == 1)
		{
			h3.plus(h1, h2);
			h3.show();
		}
		else if (input == 2)
		{
			h3.minus(h1, h2);
			h3.show();
		}
		else if (input == 3)
		{
			h3.mul(h1, h2);
			h3.show();
		}
		else
		{
			exit(0);
		}


}






