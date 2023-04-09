#include<iostream>
#include"bowler.h"
#include"player.h"
using namespace std;
class Bowler : private player
{
public:
//	int jersyno;
//	string name;
	int runs;
	int wickets;
	int rating[3];
	int matches;
	Bowler()
	{
		//null constructor
		int jersyno = '1';
		string name = "Shaheen";
		int runs = '100';
		int wickets = '50';
		int matches = '70';
		int rating[3] = {1,2,4};
	}
	Bowler(int jersyno, string name, int rating)
	{
		this->jersyno = jersyno;
		this->name = name;
		this->runs = runs;
		this->wickets = wickets;
		this->rating[3] = rating;
	}
	Bowler(int jersyno, int rating)
	{
		this->jersyno = jersyno;
		this->wickets = wickets;
		this->rating[3] = rating;
	}
	Bowler(int jersyno, string name, int runs, int wickets)
	{
		this->jersyno = jersyno;
		this->name = name;
		this->runs = runs;
		this->wickets = wickets;
	}
	~Bowler();
	~Bowler();
};