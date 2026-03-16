// Archer.h

#include <iostream>
#include "Player.h"

#pragma once

class Archer : public Player
{
public:
	Archer(std::string nickname);
	void attack();
	void printPlayerStatus();
};