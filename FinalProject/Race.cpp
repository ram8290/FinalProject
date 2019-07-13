#include "Race.h"
#include <iostream>
#include <string>
#include <fstream>

Race::Race()
{
}

std::string Race::race()
{
	std::ofstream cf;
	cf.open("CharacterFile.txt");

	int num;
	std::string trueRace;

	std::cout << "1: Ogre\n";
	std::cout << "2: Dwarf\n";
	std::cout << "3: Elf\n";
	std::cout << "4: Human\n";
	std::cout << "What race would you like to be?\n\n";

	while (!(std::cin >> num))
	{
		//clears the input for a retry if not a integer.
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		//lets the person out they input something wrong 
		//and re enter an input.
		std::cout << "Incorrect input, please enter again:\n";
	}

	switch (num)
	{
	case 1: trueRace = "\nOgre";
		break;
	case 2: trueRace = "\nDwarf";
		break;
	case 3: trueRace = "\nElf";
		break;
	default: trueRace = "\nHuman";
	}

	if (cf.is_open())
	{
		cf << trueRace << "\n";
		cf.close();
	}
	else
	{
		std::cout << "File could not be opened\n";
		system("pause");
		exit (1);
	}

	return trueRace;
}

std::string Race::randRace()
{
	std::ofstream rcf;
	rcf.open("RandomCharacterFile.txt");

	int num;

	std::string randRace;
	num = rand() % 4;

	switch (num)
	{
	case 1: randRace = "\nOgre";
		break;
	case 2: randRace = "\nDwarf";
		break;
	case 3: randRace = "\nElf";
		break;
	default: randRace = "\nHuman";
	}

	if (rcf.is_open())
	{
		rcf << randRace << "\n";
		rcf.close();
	}
	else
	{
		std::cout << "File could not be opened\n";
		system("pause");
		exit(1);
	}

	return randRace;
}

Race::~Race()
{
}
