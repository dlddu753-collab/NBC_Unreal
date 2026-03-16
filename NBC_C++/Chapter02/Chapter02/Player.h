// Player.h

#include <iostream>
#pragma once

class Player
{
public:
	
	Player(std::string nickname);
    virtual void attack();
	void printPlayerStatus();
	int setHP(int InHP);
	int getDefence();
protected:
	std::string job_name;
	std::string nickname;
	int level = 10;
	int HP = 50;
	int MP = 10;
	int power = 10;
	int defence = 10;
	int accuracy = 0;
	int speed = 10;
};

