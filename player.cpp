#include<iostream>
#include<string.h>
#include"player.h"
using namespace std;
class Player
{
public:
	int jersyno;
	string name;
	int runs;
	int wick;
	int stumps;
	int rating[3];
	int matches;
	Player()
	{
		//null constructor
		int jersyno = '1';
		string name = "Kholi ";
		int runs = '1000';
		int wick = '50';
		int matches = '70';
		int rating[3] = {3,3,4};
	}
	Player(int jersyno, string name, int runs, int wick, int rating)
	{
		this->jersyno = jersyno;
		this->name = name;
		this->runs = runs;
		this->wick = wick;
		this->rating[3] = rating;
	}
	Player(int jersyno, int wick, int rating)
	{
		this->jersyno = jersyno;
		this->wick = wick;
		this->rating[3] = rating;
	}
	Player(int jersyno, string name, int runs, int wick)
	{
		this->jersyno = jersyno;
		this->name = name;
		this->runs = runs;
		this->wick = wick;
	}
	~Player();
	~Player();
};