// Warrior.cpp

#include "Warrior.h"
#include <iostream>

Warrior::Warrior(std::string nickname) :Player(nickname)
{
	job_name = "전사";
	std::cout << job_name << "로 전직하였습니다." << std::endl;
	HP = 80;
}

void Warrior::attack()
{
	std::cout << "휘적휘적" << std::endl;
}
