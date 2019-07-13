#include <iostream>
#include <string>
#include <ctime>
#include <vector>
#include "Race.h"
#include "ClassType.h"

int main()
{
	srand(static_cast<unsigned int>(time(0)));

	ClassType Player;

	std::cout << "\n\t\tWelcome to my Dungeons \& Dragons \n\t\tCharacter Creator Program!\n\n";

	std::cout << Player.race() << "\n\n";
	std::cout << Player.playerClass() << "\n\n";
	std::cout << Player.randRace() << "\n\n";
	std::cout << Player.randPlayerClass() << "\n\n";

	system("pause");
	return 0;
}