#include <iostream>
#include <windows.h>
#include "deistvia.h"

void start();
void sleep(int time);


int otvet = -1;


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	
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

	while (true) {
		otvet = -1;
		system("cls");
		std::cout << "�� ������ �����?\n1)��\t0)���\n\n\n\n����:";
		std::cin >> otvet;
		if (otvet == 1) {
			system("cls");
			std::cout << "����� �������� ���������";
			sleep(2);
			User1.Corobli();
			break;
		}
		else if (otvet == 0) {
			system("cls");
			std::cout << " ����� ��� ������� ������";
			sleep(2);
			break;
		}
		else {
			system("cls");
			std::cout << "������ ������ ��� ����� �������";
			sleep(2);
		}

	}
	while (true) {
		otvet = -1;
		system("cls");
		std::cout << "�� ������ �����?\n1)��\t0)���\n\n\n\n����:";
		std::cin >> otvet;
		if (otvet == 1) {
			system("cls");
			std::cout << "����� �������� ���������";
			sleep(2);
			User2.Corobli();
			break;
		}
		else if (otvet == 0) {
			system("cls");
			std::cout << " ����� ��� ������� ������";
			sleep(2);
			break;
		}
		else {
			system("cls");
			std::cout << "������ ������ ��� ����� �������";
			sleep(2);
		}

	}

	while (true) {
		while (true) {
			otvet = -1;
			system("cls");
			std::cout << "��� ������� ������\n";
			sleep(2);
			std::cout << "�� ������ �����?\n1)��\t0)���\n\n\n\n����:";
			std::cin >> otvet;
			if (otvet == 1) {
				system("cls");
				std::cout << "����� ����������";
				sleep(2);
				User2.poleProtivnica();
				User2.vistrel();
				break;
			}
			else if (otvet == 0) {
				system("cls");
				std::cout << " ����� ��� ������� ������";
				sleep(2);
				break;
			}
			else {
				system("cls");
				std::cout << "������ ������ ��� ����� �������";
				sleep(2);
			}

		}
	    if (User2.paluba[0] == 4 && User2.paluba[1] == 6 && User2.paluba[2] == 6 && User2.paluba[3] == 4) {
			std::cout << "��� ������� ������ �����";
			break;
	    }
			
		while (true) {
			otvet = -1;
			system("cls");
			std::cout << "��� ������� ������\n";
			sleep(2);
			std::cout << "�� ������ �����?\n1)��\t0)���\n\n\n\n����:";
			std::cin >> otvet;
			if (otvet == 1) {
				system("cls");
				std::cout << "����� ����������";
				sleep(2);
				User1.poleProtivnica();
				User1.vistrel();
				break;
			}
			else if (otvet == 0) {
				system("cls");
				std::cout << " ����� ��� ������� ������";
				sleep(2);
				break;
			}
			else {
				system("cls");
				std::cout << "������ ������ ��� ����� �������";
				sleep(2);
			}

		}
		if (User1.paluba[0] == 4 && User1.paluba[1] == 6 && User1.paluba[2] == 6 && User1.paluba[3] == 4) {
			std::cout << "��� ������� ������ �����";
			break;
		}
	}
	
	

}
void sleep(int time)
{
	std::chrono::seconds dura(time);
	std::this_thread::sleep_for(dura);
}

