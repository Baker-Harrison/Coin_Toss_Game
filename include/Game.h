#ifndef GAME_H
#define GAME_H

#include "Coin.h"





class Game
{
private:
	Coin coins[3] = {Coin(25), Coin(10), Coin(5)};
	int totalScore;
	int rounds;

	void printFlipResults();
	void flipCoins();



public:
	Game();
	void printScore();
	int getRounds() const;
	int getScore() const;
	void playGame();



};



#endif
