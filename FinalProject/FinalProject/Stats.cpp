#include "Stats.h"
#include <string>
#include <fstream>
#include <windows.h>
#include <vector>
#include <iostream>

Stats::Stats()
{
	GetUserName(profile, &profile_len);
	profile_name = profile;
}

void Stats::stat()
{
	std::ofstream cf;
	cf.open("C\:\\Users\\" + profile_name + "\\Desktop\\CharacterFile.txt", std::ios::app);
	std::ifstream st("statTypes.txt");

	const int NUMTHREADS = 6;

	if (cf.is_open())
	{
		
		if (st.is_open())
		{
			std::string saying[NUMTHREADS];

			for (int i = 0; i < NUMTHREADS; i++)
			{
				std::getline(st, saying[i]);

				int randNum = rand();
				int trueNum = (randNum % 13) + 6; // Random number between 6-18.
				cf << saying[i] + " " + std::to_string(trueNum) + "\n";
			}
			cf.close();
			st.close();
		}
		else
		{
			std::cout << "File ST could not be open.\n";
		}
	}
	else
	{
		std::cout << "File CF could not be open.\n";
	}
}

void Stats::randStat()
{
	std::ofstream rcf;
	rcf.open("C\:\\Users\\" + profile_name + "\\Desktop\\RandomCharacterFile.txt", std::ios::app);
	std::ifstream st("statTypes.txt");

	const int NUMTHREADS = 6;

	if (rcf.is_open())
	{

		if (st.is_open())
		{
			std::string saying[NUMTHREADS];

			for (int i = 0; i < NUMTHREADS; i++)
			{
				std::getline(st, saying[i]);

				int randNum = rand();
				int trueNum = (randNum % 13) + 6; // Random number between 6-18.
				rcf << saying[i] + " " + std::to_string(trueNum) + "\n";
			}
			rcf.close();
			st.close();
		}
		else
		{
			std::cout << "File ST could not be open.\n";
		}
	}
	else
	{
		std::cout << "File RCF could not be open.\n";
	}
}

Stats::~Stats()
{
}
