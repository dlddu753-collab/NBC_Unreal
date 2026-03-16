// Magician.h

#include <iostream>
#include "Player.h"

#pragma once

class Magician : public Player
{
public:
	Magician(std::string nickname);
	void attack();
	void printPlayerStatus();
};
