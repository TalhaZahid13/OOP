#include<string.h>
#ifndef WICKETKEEPER_H
#define WICKETKEEPER_H
class wicketkeeper
{
public:
	int jersyno;
	string name;
	int runs;
	int stumps;
	int rating[3];
	~wicketkeeper();
};
#endif // WICKETKEEPER_H