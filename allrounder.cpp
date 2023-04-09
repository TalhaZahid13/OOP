#include<iostream>
#include"allrounder.h"
#include"player.h"
using namespace std;
class Allrounder : public player
{
	public:
//		int jersyno;
//		string name;
		int runs;
		int wickets;
		int rating[3];
		int matches;
		Allrounder()
		{
			//null constructor
			int jersyno='1';
			string name="Asif";
			int runs='100';
			int wickets='50';
			int matches = '70';
			int rating[3] = {20,50,100};
		}
		Allrounder(int jersyno, string name, int rating)
		{
			this->jersyno = jersyno;
			this->name = name;
			this->runs = runs;
			this->wickets = wickets;
			this->rating[3] = rating;
		}
		Allrounder(int jersyno, int wickets, int rating)
		{
			this->jersyno = jersyno;
			this->wickets = wickets;
			this->rating[3] = rating;
		}
		Allrounder(int jersyno, string name, int runs, int wickets)
		{
			this->jersyno = jersyno;
			this->name = name;
			this->runs = runs;
			this->wickets = wickets;
		}
			~Allrounder();
		~Allrounder();
};