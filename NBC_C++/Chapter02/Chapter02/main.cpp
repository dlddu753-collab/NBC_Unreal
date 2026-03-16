// Main.cpp

#include <iostream>
#include "Player.h"
#include "Archer.h"
#include "Warrior.h"
#include "Magician.h"
#include "Thief.h"

int main(void)
{
	Player* player = nullptr;
	std::string jobs[4] = { "1.전사","2.긍수","3.마법사","4.도적" };
	std::string nickname;
	int jobchoice = 0;
	int i;

	std::cout << "닉네임을 설정해주세요." << std::endl;
	std::cin >> nickname;

	std::cout << "<전직>" << std::endl;
	for (i = 0; i < 4; ++i)
	{
		std::cout << jobs[i] << std::endl;
	}

	std::cout << "직업은 선택해주세요.(1~4)" << std::endl;;
	std::cin >> jobchoice;

	switch (jobchoice)
	{
		case 1:
			player = new Warrior(nickname);
			break;
		case 2:
			player = new Archer(nickname);
			break;
		case 3:
			player = new Magician(nickname);
			break;
		case 4:
			player = new Thief(nickname);
			break;
		default:
			std::cout << "다시 입력해주세요." << std::endl;
			return 1;
	}

	player->attack();
	player->printPlayerStatus();

	if (player != nullptr)
		delete player;

	return 0;
}