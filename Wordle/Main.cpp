#define _CRT_SECURE_NO_WARNINGS
#include <stdint.h>
#include <iostream>
#include <string>

#include "Game.h"
#include "Play.h"
#include "Statistic.h"
#include "Help.h"
#include "GameHelp.h"

int main()
{
	Game* gamePtr = NULL;

	int select = 0;
	int* ptr = &select;

	printf("Welcome to Werdle\nSelect an option: ");
	scanf("%d", ptr);
	if (*ptr == 1) {
		gamePtr = new Play();
		printf("%s",gamePtr->option().c_str());
	}
	else if (*ptr == 2) {
		gamePtr = new Statistic();
		printf("%s", gamePtr->option().c_str());
	}
	else if (*ptr == 3) {
		gamePtr = new Help();
		printf("%s", gamePtr->option().c_str());
	}
	else {
		printf("Please choose from 1 to 3");
	}
	return 0;
}
