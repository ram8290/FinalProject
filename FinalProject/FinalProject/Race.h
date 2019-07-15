#pragma once
#include <string>
#include <windows.h>
#include <Lmcons.h>

class Race
{
private:
	char profile[UNLEN+1];
	DWORD profile_len = UNLEN + 1;
	std::string profile_name;
public:
	Race();

	std::string race();
	std::string randRace();


	~Race();
};

