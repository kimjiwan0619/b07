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

	cout << "1.추가" << endl;
	cout << "2.제거(숫자로)" << endl;
	cout << "3.제거(인덱스로)" << endl;
	cout << "4.파일로 저장(언제든지가능)" << endl;
	cout << "5.파일에서 불러오기(언제든지가능), 기존존재하면 기존껀 파일로 저장)" << endl;
	cout << "0.종료" << endl;
	Node* list;
	Node* step;
	int num;
	cout << "미안한데 숫자하나만춰주라";
	cin >> num;
	list = new Node;
	list->info = num;
	step = list;

	
	while (1)
	{
		cout << "1.추가" << endl;
		cout << "2.제거(숫자로)" << endl;
		cout << "3.제거(인덱스로)" << endl;
		cout << "4.파일로 저장(언제든지가능)" << endl;
		cout << "5.파일에서 불러오기(언제든지가능), 기존존재하면 기존껀 파일로 저장)" << endl;
		cout<<"0.종료"<<endl;
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
				cout << "입력: ";
				cin >> num;
				step->next = new Node;
				step->next->info = num;
				step = step->next;
				
			}
		if (input == 2)
		{
			cout << "입력:";
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
			cout << "입력";
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
