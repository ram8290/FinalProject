#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Race.h"
#include "ClassType.h"
#include "Character.h"
#include "Stats.h"
#include <stdlib.h>
#include <time.h>

#undef max

Character Player;

void randPlayer()
{
	Player.randRace();
	Player.randPlayerClass();
	Player.randStat();
}
void player()
{
	Player.race();
	Player.playerClass();
	Player.stat();
}

int main()
{
	srand(static_cast<unsigned int>(time(0)));
	int num;

	std::cout << "\n\t\tWelcome to my Dungeons & Dragons \n\t\tCharacter Creator Program!\n\n";

	std::cout << "Here we will help you create a Character to play for D&D.\n";
	std::cout << "Once created there will be a .txt file created on your desktop\n";
	std::cout << "for you to do with as you please.\n\n";

	std::cout << "DO NOTE once code is rerun it will write over file!\n";
	std::cout << "If you wish to save it please rename or move.\n\n";

	std::cout << "what would you like to do?\n";
	std::cout << "1: Create a Character\n";
	std::cout << "2: Create a Random Character\n";
	std::cout << "3: Why not both? :3\n";

	while (!(std::cin >> num))
	{
		//clears the input for a retry if not a integer.
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		//lets the person out they input something wrong 
		//and re enter an input.
		std::cout << "Incorrect input, please enter again:\n";
	}

	switch(num)
	{
	case 1: player(); break;

	case 2: randPlayer(); break;

	default: player(); randPlayer(); break;
	}

	std::cout << "\n\nAwesome!! Now you have a character to play around with.\n";
	std::cout << "Next you can go to your DESKTOP and open the .txt files\n";
	std::cout << "and check them out. Enjoy ^_^\n\n";
	

	system("pause");
	return 0;
}