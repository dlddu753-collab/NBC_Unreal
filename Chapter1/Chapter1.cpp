#include <iostream>
#include <string>

using namespace std;

void setPotion(int count, int* p_HPPotion, int* p_MPPotion);
void getPotion(int count, int* p_HPPotion, int* p_MPPotion);

int main(void)
{
	int Status[4];
	int Menu;
	int Level = 0;
	int p_HPPotion = 5;
	int p_MPPotion = 5;

	while (1)
	{
		cout << "HP와 MP를 입력해주세요: ";
		cin >> Status[0] >> Status[1];

		if (Status[0] > 50 && Status[1] > 50)
		{
			break;
		}
		cout << "다시 입력해주세요.(50이하x)" << endl;
	}

	while (1)
	{
		cout << "공격력과 방어력을 입력해주세요: ";
		cin >> Status[2] >> Status[3];

		if (Status[2] > 0 && Status[3] > 0)
		{
			break;
		}
		cout << "다시 입력해주세요.(0이하x)";
		
	}
	
	cout << "<<스텟 관리 시스템>>" << endl << "1.HP UP" << endl << "2.MP UP" << endl << "3.공격력 UP" << endl << "4.방어력 UP" << endl << "5.현재 능력치" << endl << "6.Level Up" << endl << "0.나가기" << endl;
	cout << "번호를 선택해주세요: ";
	cin >> Menu;
	
	while (Menu != 0)
	{
		if (Menu == 1)
		{
			setPotion(Menu, &p_HPPotion, &p_MPPotion);
			Status[0] = Status[0] + 20;
		}
		else if (Menu == 2)
		{
			setPotion(Menu, &p_HPPotion, &p_MPPotion);
			Status[1] = Status[1] + 20;
		}
		else if (Menu == 3)
		{
			Status[2] = Status[2] * 2;
			cout << "공격력이 2배로 증가되었습니다." << endl;
		}
		else if (Menu == 4)
		{
			Status[3] = Status[3] * 2;
			cout << "방어력이 2배로 증가되었습니다." << endl;
		}
		else if (Menu == 5)
		{
			cout << " HP: " << Status[0] << " MP: " << Status[1] << " 공격력: " << Status[2] << " 방어력: " << Status[3] << " 레벨: " << Level << " 남은 HP/MP 포션 수: " << p_HPPotion << "/" <<  p_MPPotion << endl;
		}
		else if (Menu == 6)
		{
			getPotion(Menu, &p_HPPotion, &p_MPPotion);
			Level = Level + 1;
			cout << "레벨업! HP/MP 포션이 지급됩니다." << endl;
		}
		else if (p_HPPotion == 0 || p_MPPotion == 0)
		{
			cout << "포션이 부족합니다." << endl;
		}
		else
		{
			cout << "1~6번까지의 숫자를 입력해주세요." << endl;
		}

		cout << "번호를 선택해주세요: ";
		cin >> Menu;
	}

	cout << "프로그램을 종료합니다.";
	return 0;
}

void setPotion(int count, int* p_HPPotion, int* p_MPPotion)
{
	if (count == 1 && *p_HPPotion > 0)
	{
		*p_HPPotion = *p_HPPotion - 1;
		cout << "HP가 20 증가되었습니다. HP포션이 1개 차감 됩니다." << endl;
	}
	else if (count == 2 && *p_MPPotion > 0)
	{
		*p_MPPotion = *p_MPPotion - 1;
		cout << "HP가 20 증가되었습니다. MP포션이 1개 차감 됩니다." << endl;
	}
	else
	{
		cout << "포션이 부족합니다."<< endl;
	}

	return;
}

void getPotion(int count, int* p_HPPotion, int* p_MPPotion)
{
	if (count == 6)
	{
		*p_HPPotion = *p_HPPotion + 1;
		*p_MPPotion = *p_MPPotion + 1;
	}
	return;
}

