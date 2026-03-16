// Player.cpp

#include <iostream>
#include "Player.h"

Player::Player(std::string nickname)
{
    // 매개변수로 받은 nickname을 멤버 변수 nickname에 저장
    this->nickname = nickname;
    std::cout << "* " << nickname << " 님이 입장하셨습니다." << std::endl;
}
void Player::attack()
{
}
void Player::printPlayerStatus() 
{
    std::cout << "------------------------------------" << std::endl;
    std::cout << "* 현재 능력치" << std::endl;
    std::cout << "닉네임: " << nickname << std::endl;
    std::cout << "Lv. " << level << std::endl;
    std::cout << "HP: " << HP << std::endl;
    std::cout << "MP: " << MP << std::endl;
    std::cout << "공격력: " << power << std::endl;
    std::cout << "방어력: " << defence << std::endl;
    std::cout << "정확도: " << accuracy << std::endl;
    std::cout << "속도: " << speed << std::endl;
    std::cout << "------------------------------------" << std::endl;
}

