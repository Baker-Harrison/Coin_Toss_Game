#include "../include/Coin.h"



Coin::Coin(int value) : centValue(value)
{}

void Coin::flip()
{
	isHeads = rand() % 2;
}

bool Coin::isTails() const
{
	if (isHeads == false)
	{
		return true;
	}
	else
	{
		return false;
	}
}


string Coin::getSideUp() const
{
	if (isTails() == true)
	{
		return "Side up is tails";
	}
	else
	{
		return "Side up is heads";
	}
}
