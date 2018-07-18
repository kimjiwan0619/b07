#pragma once
#include <iostream>
#include <String>
#include<list>
#include<time.h>

using namespace std;

class Card
{
public:
	Card();
	~Card();
	
	string shape;
	int card_num;
	Card(string shape_, int card_num_) : shape(shape_), card_num(card_num) {}
	
	list <Card> deck; //�ִµ�
	list<Card> deck2; //�޴µ�
	list <Card> player1;
	list <Card> player2;

	void show_deck(); //ī�� �����ֱ�
	void show_p1();
	void show_p2();
	void show_deck2();

	void make_card(); //�� ����Ʈ�� ī��ְ� ����

	void start(); //5�徿 �����ֱ� ����̾Ƶα�


	void p1_turn1(); //player1���� ����
	void p2_turn1(); //player2���� ����
	
	void p1_turn2(); //player1���� �޴´�
	void p2_turn2(); //player2���� �޴´�

	void run();

};

