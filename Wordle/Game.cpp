#include "Game.h"
#include <map>
#include "Session.h"
using namespace std;

//Game::Game()
//{
//	
//}
//
//Game::~Game()
//{
//}

void Game::play()
{
	//Session session;
	//Session();
	auto new_session = new Session();
	delete new_session;
}

void Game::statistics()
{
}

void Game::help()
{
	const char* help = "Guess the WERDLE in six tries.\n\n\
Each guess must be a five-letter word. Hit the enter button to submit.\n\n\
Examples\n\
[A] P P L E\n\
The letter A is in the correct position.\n\
D |E| A L T\n\
The letter E is in the word but in the wrong position.\n\n";

	printf("%s", help);
}

void Game::select()
{
	

	/*int select = 0;
	int* ptr = &select;
	printf("Welcome to Werdle\nSelect an option: \n\n");
	printf(" 1.Play a game.\n 2.View statistic.\n 3.View help.\n");*/
	
}
