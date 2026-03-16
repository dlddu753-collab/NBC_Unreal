// Thief.cpp

#include "Thief.h"
#include <iostream>

Thief ::Thief(std::string nickname) :Player(nickname)
{
	job_name = "도적";
	std::cout << job_name << "로 전직하였습니다." << std::endl;
	HP = 80;
}

void Thief::attack()
{
	std::cout << "화르르륵" << std::endl;
}
