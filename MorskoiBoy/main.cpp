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
		std::cout << "\t\t\t Морской бой\n\n\n\n\n\t\t\tХатите сыграть \n\n\t\t        1)да\t 0)нет\n\n\n\n\n\n\n\nВвод:";
		std::cin >> otvet;
		if (otvet == 1) {
			system("cls");
			std::cout << "круто тогда стартуем";
			sleep(2);
			start();
		}
		else if (otvet == 2) {
			system("cls");
			std::cout << "\nблин ну ладно\nкак хочешь\nты многое теряешь";
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


	




}
void sleep(int time)
{
	std::chrono::seconds dura(time);
	std::this_thread::sleep_for(dura);
}
