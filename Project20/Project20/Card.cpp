#include "Card.h"


Card::Card()
{
}


Card::~Card()
{
}


void Card::show_deck()
{
	cout << deck << endl;
}

void Card::show_p1()
{
	cout << player1 << endl;
}

void Card::show_p2()
{
	cout << player2 << endl;
}

void Card::show_deck2()
{
	cout << deck2.back().shape <<"/"<<deck2.back().card_num<< endl;
}



void Card::make_card()
{
	for (int i = 1;i < 13;++i)
	{

		string clover;
		deck.push_back(Card(clover, i));
		
		string spade;
		deck.push_back(Card(spade, i));
		
		string heart;
		deck.push_back(Card(heart, i));

		string diamond;
		deck.push_back(Card(diamond, i));
		
	}
	for (int i = 1;i < 3;i++)
	{
		string jocker;
		deck.push_back(Card(jocker, i));
	}
	srand(time(NULL));
	for (int i = 0;i < 54;++i)
	{
		int randNum1 = rand() % 54;

		int randNum2 = rand() % 54;

		int temp;

		temp = deck[randNum1];

		deck[randNum1] = deck[randNum2];

		deck[randNum2] = temp;
	}
}

void Card::start()
{
	for (int i = 0;i < 5;++i)
	{
		player1.push_back(deck.pop_front());
		player2.push_back(deck.pop_front());
	}
	deck2.push_back(deck.pop_front());
}

void Card::p1_turn1()
{
		cout << "������(�ε���)::" << endl;
		int i;
		do
		{
			cin >> i;
			if (player1[i].card_num != deck.front().card_num && player1[i].shape != deck.front().shape)
			{
				cout << "���ݵ�" << endl;
				cout << "������(�ε���)" << endl;
			}

		} while (player1[i].card_num == deck.front().card_num || player1[i].shape == deck.front().shape);
		
}

void Card::p2_turn1()
{
	cout << "������(�ε���)::" << endl;
	int i;
	do
	{
		cin >> i;
		if (player2[i].card_num != deck.front().card_num && player2[i].shape != deck.front().shape) //���絵 ���ڵ� �ٸ��� �ȵǿ�
		{
			cout << "���ݵ�" << endl;
			cout << "������(�ε���)" << endl;
		}

	} while (player2[i].card_num == deck.front().card_num || player2[i].shape == deck.front().shape);
	deck2.push_front(player2[i]);
	player2.erase(player2[i]);
	if (player2[i].card_num == 11 || player2[i].card_num == 13) //J�� K �ѹ���
	{
		do
		{
			cout << "�ѹ���(�ε���)" << endl;
			int j;
			cin >>j;
			deck2.push_front(player2[j]);
			player2.erase(player2[j]);

		} while (player2[j].card_num != 11 && player2[j].card_num != 13);
	}
	if (player2[i].card_num == 7) //7�� ������ �ٲܼ��ֳ�
	{
		cout << "������ �ٲ� �� �ִ�. " << endl;
		cout << "---------------------------" << endl;
		cout << "1.�����̵� 2.Ŭ�ι� 3.��Ʈ 4. ���̾�" << endl;
		int k;
		cin >> k;
		int copynum;
		copynum = deck2.front().card_num;
		string spade,clover,heart,diamond;
		if (k == 1)
		{
			deck2.push_front(Card(spade, copynum));
		}
		else if (k == 2)
		{
			deck2.push_front(Card(clover, copynum));
		}
		else if (k == 3)
		{
			deck2.push_front(Card(heart, copynum));
		}
		else if (k == 4)
		{
			deck2.push_front(Card(diamond, copynum));
		}
	}

}

void Card::p1_turn2()
{
	player1.push_back(deck.pop_front);
}

void Card::p2_turn2()
{
	player2.push_back(deck.pop_front);
}

void Card::run()
{
	cout << "--------------------------" << endl;
	cout << endl;
	cout << "       <<<��ī��>>>" << endl;
	cout << endl;
	cout << "        1.����" << endl;
	cout << endl;
	cout << "        0.����" << endl;
	cout << endl;
	cout << endl;
	cout << "--------------------------" << endl;
	
	int input;
	cin >> input;
	if (input == 1)
	{
		Card a;
		a.make_card();
		a.start();
		a.show_deck();
		a.show_deck2();
		a.show_p1();
		a.show_p2();
		while (player1.empty == 0||player2.empty==0)
		{
			cout << "P1�� ����" << endl;
			cout << "P1�� ������ �ұ�?" << endl;
			cout << "-------------------------" << endl;
			cout << "1.����  2.�ް� �ѱ��" << endl;
			int i;
			cin >> i;
			while (i==1)
			{
				a.p1_turn1();
				cout << "P1�� ������ �ұ�?" << endl;
				cout << "-------------------------" << endl;
				cout << "1.����  2.�ѱ��" << endl;
				int j;
				cin >> j;
				if (j == 2)
				{
					break;
				}
			}
			if (i == 2)
			{
				a.p1_turn2();
			}
			a.show_deck();
			a.show_deck2();
			a.show_p1();
			a.show_p2();
			if (player2.size() > 20)  //20�� ������ �ʰ�
			{
				cout << "P2 20�� �ʰ�!" << endl;
				break;
			}
			else if()
			cout << "P2�� ����" << endl;
			cout << "P2�� ������ �ұ�?" << endl;
			cout << "-------------------------" << endl;
			cout << "1.����  2.�޴´�" << endl;
			int i;
			cin >> i;
			if (i == 1)
			{
				a.p2_turn1();

			}
			else if (i == 2)
			{
				a.p2_turn2();
			}
			
			a.show_deck();
			a.show_deck2();
			a.show_p1();
			a.show_p2();
		}
		if (player1.empty() == 1)
		{
			cout << "P1�� �̰ܺ��Ǵ�" << endl;
		}
		else if (player2.empty() == 1)
		{
			cout << "P2�� �̰ܺ��Ǵ�" << endl;
		}
		
	}
	else if (input == 0)
	{
		cout << "��" << endl;
	}
}

