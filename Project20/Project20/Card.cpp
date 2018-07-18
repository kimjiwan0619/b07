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
		cout << "뭘내지(인덱스)::" << endl;
		int i;
		do
		{
			cin >> i;
			if (player1[i].card_num != deck.front().card_num && player1[i].shape != deck.front().shape)
			{
				cout << "에반데" << endl;
				cout << "뭘내지(인덱스)" << endl;
			}

		} while (player1[i].card_num == deck.front().card_num || player1[i].shape == deck.front().shape);
		
}

void Card::p2_turn1()
{
	cout << "뭘내지(인덱스)::" << endl;
	int i;
	do
	{
		cin >> i;
		if (player2[i].card_num != deck.front().card_num && player2[i].shape != deck.front().shape) //문양도 숫자도 다르면 안되요
		{
			cout << "에반데" << endl;
			cout << "뭘내지(인덱스)" << endl;
		}

	} while (player2[i].card_num == deck.front().card_num || player2[i].shape == deck.front().shape);
	deck2.push_front(player2[i]);
	player2.erase(player2[i]);
	if (player2[i].card_num == 11 || player2[i].card_num == 13) //J와 K 한번더
	{
		do
		{
			cout << "한번더(인덱스)" << endl;
			int j;
			cin >>j;
			deck2.push_front(player2[j]);
			player2.erase(player2[j]);

		} while (player2[j].card_num != 11 && player2[j].card_num != 13);
	}
	if (player2[i].card_num == 7) //7은 문양을 바꿀수있네
	{
		cout << "문양을 바꿀 수 있다. " << endl;
		cout << "---------------------------" << endl;
		cout << "1.스페이드 2.클로버 3.하트 4. 다이아" << endl;
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
	cout << "       <<<원카드>>>" << endl;
	cout << endl;
	cout << "        1.시작" << endl;
	cout << endl;
	cout << "        0.안해" << endl;
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
			cout << "P1의 차례" << endl;
			cout << "P1은 무엇을 할까?" << endl;
			cout << "-------------------------" << endl;
			cout << "1.낸다  2.받고 넘긴다" << endl;
			int i;
			cin >> i;
			while (i==1)
			{
				a.p1_turn1();
				cout << "P1은 무엇을 할까?" << endl;
				cout << "-------------------------" << endl;
				cout << "1.낸다  2.넘긴다" << endl;
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
			if (player2.size() > 20)  //20장 넘으면 초과
			{
				cout << "P2 20장 초과!" << endl;
				break;
			}
			else if()
			cout << "P2의 차례" << endl;
			cout << "P2은 무엇을 할까?" << endl;
			cout << "-------------------------" << endl;
			cout << "1.낸다  2.받는다" << endl;
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
			cout << "P1이 이겨보렷다" << endl;
		}
		else if (player2.empty() == 1)
		{
			cout << "P2이 이겨보렷다" << endl;
		}
		
	}
	else if (input == 0)
	{
		cout << "ㅗ" << endl;
	}
}

