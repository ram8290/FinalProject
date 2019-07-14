#include "Character.h"
#include <string>
#include <iostream>
#include <fstream>
#include <vector>



Character::Character()
{
}

void Character::Talk()
{
	std::ifstream say("StuffToSay.txt");
	std::ofstream cf;

	std::vector<std::string>* wordsToSay= new std::vector<std::string>;
	std::vector<std::string> sayThis;

	std::string input = "";

	int i;

	if (say.is_open())
	{
		while (getline(say, input))
		{
			wordsToSay->push_back(input);
			sayThis.push_back(0);
		}
		say.close();
	}
	else
	{
	std::cout << "File could not be opened\n";
		system("pause");
		exit(1);
	}

	i = rand() % 4;



}

Character::~Character()
{
}
