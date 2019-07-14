#pragma once
#include "Race.h"
#include "Character.h"
class ClassType :
	public Race, Character
{
public:
	ClassType();

	std::string randPlayerClass();

	std::string playerClass();


	~ClassType();
};

