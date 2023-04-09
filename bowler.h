#include"string.h"
#ifndef BOWLER_H
#define BOWLER_H
class bowler
{
public:
	int jersyno;
	string name;
	int runs;
	int wickets;
	int rating[3];
	~bowler();
};
#endif // BOWLER_H