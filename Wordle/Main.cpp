#define _CRT_SECURE_NO_WARNINGS
#include <stdint.h>
#include <iostream>
#include <string>

#include "Game.h"
#include "Play.h"
#include "Statistic.h"
#include "Help.h"
#include "GameHelp.h"
#include "Menu.h"

using namespace std;

int main()
{
	
	Menu m;

	do {
		m.show_function();
	} while (m.menu_number != 0);
	
	string test = "apple";
	Play p;

	p.split(test);
	
	return 0;
}
