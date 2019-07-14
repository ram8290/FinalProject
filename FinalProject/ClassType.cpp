#include "ClassType.h"
#include <string>
#include<iostream>
#include <fstream>

ClassType::ClassType()
{
}

std::string ClassType::playerClass()
{
	std::ofstream cf;
	cf.open("C\:\\Users\\Rick\\Desktop\\CharacterFile.txt", std::ios::app);



	std::string playerClass[] = { "Barbarian", "Bard", "Cleric", "Paladin", "Ranger", "Rogue", "Wizard", "Fighter" };
	int num;
	const int CLASS_SIZE = 8;

	for (int i = 0; i < CLASS_SIZE; ++i)
	{
		std::cout << i + 1 << playerClass[i] << std::endl;
	}
	std::cout << "What class would you like to be?\n\n";

	while (!(std::cin >> num))
	{
		//clears the input for a retry if not a integer.
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		//lets the person out they input something wrong 
		//and re enter an input.
		std::cout << "Incorrect input, please enter again:\n";
	}

	std::string* choice = &playerClass[num];

	if (cf.is_open())
	{
		cf << *choice << "\n";
		cf.close();
	}
	else
	{
		std::cout << "File could not be opened\n";
		system("pause");
		exit(1);
	}

	return *choice;
}

std::string ClassType::randPlayerClass()
{
	std::ofstream rcf;
	rcf.open("C\:\\Users\\Rick\\Desktop\\RandomCharacterFile.txt",std::ios::app);

	std::string playerClass[] = { "Barbarian", "Bard", "Cleric", "Paladin", "Ranger", "Rogue", "Wizard", "Fighter" };
	int i;

	i = rand() % 8;
	std::string* choice = &playerClass[i];

	if (rcf.is_open())
	{
		rcf << *choice << "\n";
		rcf.close();
	}
	else
	{
		std::cout << "File could not be opened\n";
		system("pause");
		exit(1);
	}

	return *choice;
}

ClassType::~ClassType()
{
}
