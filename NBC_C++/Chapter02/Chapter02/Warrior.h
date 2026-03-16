// Warrior.h

#include <iostream>
#include "Player.h"

#pragma once

class Warrior : public Player
{
public:
	Warrior(std::string nickname);
	void attack();
	void printPlayerStatus();
};
