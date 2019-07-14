#pragma once
#include "Character.h"
#include "ClassType.h"
#include <string>

class Race :
	public Character, ClassType
{
public:
	Race();

	std::string race();
	std::string randRace();


	~Race();
};

