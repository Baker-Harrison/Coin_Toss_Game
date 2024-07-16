#include "../include/Game.h"
#include "../include/Coin.h"
#include <ctime>

Game::Game() : totalScore(0), rounds(1)
{
	srand(time(0));
}

void Game::playGame()
{

	while (true) {


		if (getScore() < 100) {
			cout << "Round " << rounds << endl;
			flipCoins();
			printFlipResults();


			for (int i = 0; i < 3; i++) {
				if (coins[i].isTails() == false) {
					totalScore += coins[i].getCentValue();
				}

			}

			rounds++;


		}
		else
		{
			printScore();
			break;
		}


	}




}

void Game::flipCoins()
{
	for (Coin &coin: coins)
	{
		coin.flip();
	}
}

void Game::printFlipResults()
{
	for (Coin coin : coins)
	{
		cout << coin.getSideUp() << endl;
	}
}

void Game::printScore() {
	cout << "You reached 100"  << " in " << getRounds() << " rounds!!" << endl;
}

int Game::getRounds() const{
	return rounds;
}

int Game::getScore() const {
	return totalScore;
}


