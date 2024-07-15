#ifndef COIN_H
#define COIN_H

#include <iostream>

using namespace std;

class Coin
{
private:
	const int centValue; // Coins[3] --> Quarter, Dime, Nickel (adds if its heads)
	bool isHeads;


public:
	Coin(int value);
	void flip();
	bool isTails() const;
	string getSideUp() const;
	int getCentValue() const
	{
		return centValue;
	}


};



#endif
