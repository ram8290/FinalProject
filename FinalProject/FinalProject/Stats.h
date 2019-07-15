#pragma once
#include <Lmcons.h>
#include <windows.h>
#include <string>

class Stats
{
private:
	char profile[UNLEN + 1];
	DWORD profile_len = UNLEN + 1;
	std::string profile_name;
public:
	Stats();

	void stat();
	void randStat();

	~Stats();
};

