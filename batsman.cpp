#include<iostream>
#include"batsman.h"
#include"player.h"
using namespace std;
class Batsman : public player
{
public:
//	int jersyno;
//	string name;
	int runs;
	int rating[3];
	int matches;
	Batsman()
	{
		//null constructor
		int jersyno = '1';
		string name = "BABAR AZAM";
		int runs = '1000';
		int matches = '70';
		int rating[3] = {1,1,3};
	}
	Batsman(int jersyno, string name, int rating)
	{
		this->jersyno = jersyno;
		this->name = name;
		this->runs = runs;
		this->rating[3] = rating;
	}
	Batsman(int jersyno, int rating)
	{
		this->jersyno = jersyno;
		this->rating[3] = rating;
	}
	Batsman(int jersyno, string name, int runs)
	{
		this->jersyno = jersyno;
		this->name = name;
		this->runs = runs;
	}
	~Batsman();
	~Batsman();
};