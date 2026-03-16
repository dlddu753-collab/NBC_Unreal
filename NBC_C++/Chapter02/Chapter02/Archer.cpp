// Archer.cpp

#include "Archer.h"
#include <iostream>

Archer::Archer(std::string nickname) :Player(nickname)
{
	job_name = "궁수";
	std::cout << job_name << "로 전직하였습니다." << std::endl;
	accuracy = 80;
}

void Archer::attack()
{
	std::cout << "피슈우우우웅" << std::endl;
}
