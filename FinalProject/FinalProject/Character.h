#pragma once
#include "ClassType.h"
#include "Race.h"
#include "Stats.h"

class Character :
	public Race, public ClassType, public Stats
{
public:
	Character();

	void Talk();

	~Character();
};

