// Thief.h

#include <iostream>
#include "Player.h"

#pragma once

class Thief : public Player
{
public:
	Thief(std::string nickname);
	void attack();
	void printPlayerStatus();
};
