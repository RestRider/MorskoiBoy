#include <iostream>
#include <windows.h>
#include "deistvia.h"

void start();
void sleep(int time);

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int otvet = -1;
	while (true) {
		system("cls");
		otvet = -2;
		std::cout << "\t\t\t ������� ���\n\n\n\n\n\t\t\t������ ������� \n\n\t\t        1)��\t 0)���\n\n\n\n\n\n\n\n����:";
		std::cin >> otvet;
		if (otvet == 1) {
			system("cls");
			std::cout << "����� ����� ��������";
			sleep(2);
			start();
		}
		else if (otvet == 2) {
			system("cls");
			std::cout << "\n���� �� �����\n��� ������\n�� ������ �������";
			sleep(2);
			return 0;
		}
		else  {
			system("cls");
			std::cout << "\n������ �������� ���\n\n\n ����� �������";
			sleep(2);
		}
	}

}

void start() {
	deistvia User1;
	deistvia User2;


	




}
void sleep(int time)
{
	std::chrono::seconds dura(time);
	std::this_thread::sleep_for(dura);
}
