#pragma once
#include <string>
#include <windows.h>
#include <Lmcons.h>
class ClassType
{
private:
	char profile[UNLEN+1];
	DWORD profile_len = UNLEN + 1;
	std::string profile_name;
public:
	ClassType();

	std::string randPlayerClass();

	std::string playerClass();


	~ClassType();
};

