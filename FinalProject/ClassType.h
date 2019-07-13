#pragma once
#include "Race.h"
class ClassType :
	public Race
{
public:
	ClassType();

	std::string randPlayerClass();

	std::string playerClass();


	~ClassType();
};

