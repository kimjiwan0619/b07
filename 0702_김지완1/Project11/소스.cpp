#include <iostream>
#include <fstream>
using namespace std;

struct Node
{
	int info;
	Node* next = nullptr;
};

int main()
{

	cout << "1.�߰�" << endl;
	cout << "2.����(���ڷ�)" << endl;
	cout << "3.����(�ε�����)" << endl;
	cout << "4.���Ϸ� ����(������������)" << endl;
	cout << "5.���Ͽ��� �ҷ�����(������������), ���������ϸ� ������ ���Ϸ� ����)" << endl;
	cout << "0.����" << endl;
	Node* list;
	Node* step;
	int num;
	cout << "�̾��ѵ� �����ϳ������ֶ�";
	cin >> num;
	list = new Node;
	list->info = num;
	step = list;

	
	while (1)
	{
		cout << "1.�߰�" << endl;
		cout << "2.����(���ڷ�)" << endl;
		cout << "3.����(�ε�����)" << endl;
		cout << "4.���Ϸ� ����(������������)" << endl;
		cout << "5.���Ͽ��� �ҷ�����(������������), ���������ϸ� ������ ���Ϸ� ����)" << endl;
		cout<<"0.����"<<endl;
		Node* a = list;
		while (1) 
		{
			
			cout << a->info<< "  ";
			a = a->next;
			if (a == nullptr)
			{
				a = list;
				break;
			}
		}
		cout << endl;
		int input;
		cin >> input; 

					
		if (input == 1)
			{
				cout << "�Է�: ";
				cin >> num;
				step->next = new Node;
				step->next->info = num;
				step = step->next;
				
			}
		if (input == 2)
		{
			cout << "�Է�:";
			cin >> num;
			
			Node* prev = list;
			Node* current = list;

			if (prev->info == num)
			{
				list = list->next;
			}
			else
			{
				while (current->info != num)
				{
					prev=current;
					current = current->next;
						
				}

				prev->next = current->next;
				delete current;
				prev = list;
				current = list;
				
			}

		}
		if (input == 3)
		{
			cout << "�Է�";
			cin >> num;
			Node* index = list;
			if (num == 0) 
			{
				list = list->next;
			}
			else
			{
				for (int i = 0;i < num-1;i++)
				{
					index = index->next;
				}

				index->next = index->next->next;
				index = list;
			}
		}
		
		if (input == 4)
		{
			ofstream outFile("123456.txt");

			while (1)
			{

				outFile << a->info << "  ";
				a = a->next;
				if (a == nullptr)
				{
					a = list;
					break;
				}
			}
			outFile.close();

		}

		if (input == 0)
		{
			break;
		}
	}
}
