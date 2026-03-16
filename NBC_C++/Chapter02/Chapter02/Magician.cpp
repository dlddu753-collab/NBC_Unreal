// Magician.cpp

#include "Magician.h"
#include <iostream>

Magician::Magician(std::string nickname) :Player(nickname)
{
	job_name = "마법사";
	std::cout << job_name << "로 전직하였습니다." << std::endl;
	HP = 80;
}

void Magician::attack()
{
	std::cout << "화르르륵" << std::endl;
}
