#include<iostream>
#include"wicketkeeper.h"
#include"player.h"
using namespace std;
class Wicketkeeper : public player
{
public:
//	int jersyno;
//	string name;
	int runs;
	int stumps;
	int rating[3];
	int matches;
	Wicketkeeper()
	{
		//null constructor
		int jersyno = '1';
		string name = "Razzaq";
		int runs = '100';
		int stumps = '50';
		int matches = '70';
		int rating[3] = {110,134,30};
	}
	Wicketkeeper(int jersyno, string name, int runs, int stumps, int rating)
	{
		this->jersyno = jersyno;
		this->name = name;
		this->runs = runs;
		this->stumps = stumps;
		this->rating[3] = rating;
	}
	Wicketkeeper(int jersyno, int stumps, int rating)
	{
		this->jersyno = jersyno;
		this->stumps = stumps;
		this->rating[3] = rating;
	}
	Wicketkeeper(int jersyno, string name, int runs, int stumps)
	{
		this->jersyno = jersyno;
		this->name = name;
		this->runs = runs;
		this->stumps = stumps;
	}
	~Wicketkeeper();
	~Wicketkeeper();
};