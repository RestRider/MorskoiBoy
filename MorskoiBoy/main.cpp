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
		std::cout << "\t\t\t ћорской бой\n\n\n\n\n\t\t\t’атите сыграть \n\n\t\t        1)да\t 0)нет\n\n\n\n\n\n\n\n¬вод:";
		std::cin >> otvet;
		if (otvet == 1) {
			system("cls");
			std::cout << "круто тогда стартуем";
			sleep(2);
			start();
		}
		else if (otvet == 2) {
			system("cls");
			std::cout << "\nблин ну ладно\nкак хочешь\nты многое тер€ешь";
			sleep(2);
			return 0;
		}
		else  {
			system("cls");
			std::cout << "\nтакого варианта нет\n\n\n давай поновой";
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
		std::cout << "ты первый игрок?\n1)да\t0)нет\n\n\n\n¬вод:";
		std::cin >> otvet;
		if (otvet == 1) {
			system("cls");
			std::cout << "давай раставим кораблики";
			sleep(2);
			User1.Corobli();
			break;
		}
		else if (otvet == 0) {
			system("cls");
			std::cout << " тогда дай первому игроку";
			sleep(2);
			break;
		}
		else {
			system("cls");
			std::cout << "токого ответа нет давай поновой";
			sleep(2);
		}

	}
	while (true) {
		otvet = -1;
		system("cls");
		std::cout << "ты второй игрок?\n1)да\t0)нет\n\n\n\n¬вод:";
		std::cin >> otvet;
		if (otvet == 1) {
			system("cls");
			std::cout << "давай раставим кораблики";
			sleep(2);
			User2.Corobli();
			break;
		}
		else if (otvet == 0) {
			system("cls");
			std::cout << " тогда дай второму игроку";
			sleep(2);
			break;
		}
		else {
			system("cls");
			std::cout << "токого ответа нет давай поновой";
			sleep(2);
		}

	}

	while (true) {
		while (true) {
			otvet = -1;
			system("cls");
			std::cout << "ход первого игрока\n";
			sleep(2);
			std::cout << "ты первый игрок?\n1)да\t0)нет\n\n\n\n¬вод:";
			std::cin >> otvet;
			if (otvet == 1) {
				system("cls");
				std::cout << "давай пострел€ем";
				sleep(2);
				User2.poleProtivnica();
				User2.vistrel();
				break;
			}
			else if (otvet == 0) {
				system("cls");
				std::cout << " тогда дай первому игроку";
				sleep(2);
				break;
			}
			else {
				system("cls");
				std::cout << "токого ответа нет давай поновой";
				sleep(2);
			}

		}
	    if (User2.paluba[0] == 4 && User2.paluba[1] == 6 && User2.paluba[2] == 6 && User2.paluba[3] == 4) {
			std::cout << "ура победил первый игрок";
			break;
	    }
			
		while (true) {
			otvet = -1;
			system("cls");
			std::cout << "ход второго игрока\n";
			sleep(2);
			std::cout << "ты второй игрок?\n1)да\t0)нет\n\n\n\n¬вод:";
			std::cin >> otvet;
			if (otvet == 1) {
				system("cls");
				std::cout << "давай пострел€ем";
				sleep(2);
				User1.poleProtivnica();
				User1.vistrel();
				break;
			}
			else if (otvet == 0) {
				system("cls");
				std::cout << " тогда дай второму игроку";
				sleep(2);
				break;
			}
			else {
				system("cls");
				std::cout << "токого ответа нет давай поновой";
				sleep(2);
			}

		}
		if (User1.paluba[0] == 4 && User1.paluba[1] == 6 && User1.paluba[2] == 6 && User1.paluba[3] == 4) {
			std::cout << "ура победил второй игрок";
			break;
		}
	}
	
	

}
void sleep(int time)
{
	std::chrono::seconds dura(time);
	std::this_thread::sleep_for(dura);
}

