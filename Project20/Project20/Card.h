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
	
	list <Card> deck; //주는덱
	list<Card> deck2; //받는덱
	list <Card> player1;
	list <Card> player2;

	void show_deck(); //카드 보여주기
	void show_p1();
	void show_p2();
	void show_deck2();

	void make_card(); //덱 리스트에 카드넣고 셔플

	void start(); //5장씩 나눠주기 한장뽑아두기


	void p1_turn1(); //player1의턴 낸다
	void p2_turn1(); //player2의턴 낸다
	
	void p1_turn2(); //player1의턴 받는다
	void p2_turn2(); //player2의턴 받는다

	void run();

};

