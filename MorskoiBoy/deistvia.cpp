#include "deistvia.h"

void deistvia::vodHoda()
{
	while (true) {
		std::cout << "\nвведите столбец который вы хотите выбрат:";
		std::cin >> HodY;
		if (HodY > 0 && HodY < 11) {
			break;
		}
		else {
			std::cout << "\nтакого столбца нет";
		}
	}
	while (true) {
		std::cout << "\nвведите строку которую вы хотите выбрать:";
		std::cin >> HodX;
		if (HodX > 0 && HodX < 11) {
			break;
		}
		else {
			std::cout << "\nтакой строки нет";
		}
	}
	std::cout << "\n\n\n";
}

void deistvia::vistrel()  
{
	while (true) {
		std::cout << "\nкуда вы хотите выстрелить";
		deistvia::vodHoda();
		if (pole::delusi(HodX, HodY) == 11 ) {
			std::cout << "\n Попал";
			sleep(1);
			paluba[0] += 1;
			pole::zapolniMeni(HodX, HodY, -11);
			sleep(1);
			system("cls");
			pole::poleProtivnica();
			std::cout << "\nстреляй ещё\n";
			sleep(1);
		}
		else if (pole::delusi(HodX, HodY) == 12) {
			std::cout << "\n Попал";
			sleep(1);  
			paluba[1] += 1;
			pole::zapolniMeni(HodX, HodY, -12);
			sleep(1);
			system("cls");
			pole::poleProtivnica();
			std::cout << "\nстреляй ещё\n";
			sleep(1);
		}
		else if (pole::delusi(HodX, HodY) == 13) {
			std::cout << "\n Попал";
			sleep(1);
			paluba[2] += 1;
			pole::zapolniMeni(HodX, HodY, -13);
			sleep(1);
			system("cls");
			pole::poleProtivnica();
			std::cout << "\nстреляй ещё\n";
			sleep(1);
		}
		else if (pole::delusi(HodX, HodY) == 14) {
			std::cout << "\n Попал";
			sleep(1);
			paluba[3] += 1;
			pole::zapolniMeni(HodX, HodY, -14);
			sleep(1);
			system("cls");
			pole::poleProtivnica();
			std::cout << "\nстреляй ещё\n";
			sleep(1);
		}
		else if (pole::delusi(HodX, HodY) == 0) {
			std::cout << "\n мимо";
			sleep(1);
			pole::zapolniMeni(HodX, HodY, 66);
			break;
		}
		else if (pole::delusi(HodX, HodY) == -11 && pole::delusi(HodX, HodY) == -12 && pole::delusi(HodX, HodY) == -13 && pole::delusi(HodX, HodY) == -14) {
			std::cout << "\nсюда стрелять нельзя\n     ты уже стрелял";
			sleep(1);
		}
	}
}

void deistvia::Corobli()
{
	while (corabli[0]!=0 || corabli[1]!=0 || corabli[2]!=0 || corabli[3]!=0) {

		while (true) {
			system("cls"); 
			corabl = 0;
			std::cout << "\nКакой корабль вы хотите поставить:\n"
				<< "1) однопалубник (можно поставить " << corabli[0] << "\\4)\n" 
				<< "2) двупалубник (можно поставить " << corabli[1] << "\\3)\n" 
				<< "3) трёхпалубник (можно поставить " << corabli[2] << "\\2)\n" 
				<< "4) чутырёхпалубник (можно поставить " << corabli[3] << "\\1)\n";
			std::cin >> corabl;
			if (corabl > 0 && corabl < 5) {
				break;
			}
			else {
				system("cls");
				std::cout << "\nтокого выбора нет \n давай по новой";
				sleep(2);
			}
		}
		
		if (corabli[corabl - 1] != 0) {
			while (true) {
				system("cls");
				pole::poleIgroka();
				std::cout << "\nкуда поставить корабль\n";
				deistvia::vodHoda();
				if (pole::delusi(HodX, HodY) == 0) {
					break;
				}
				else {
					system("cls");
					std::cout << "\nсюда коробля нельзя \n давай по новой";
					sleep(2);
				}
			}
			while (true) {
				system("cls");
				povorot = 0;
				std::cout << "\nкуда будет плыт корабль:\n";
				std::cout << "1) вверх";if (HodX - 1 + corabl < 11) { std::cout << " (вверх плыть можно)\n"; }
				else { std::cout << " (вверх плыть нельзя)\n"; }
				std::cout << "2) вправо";if (HodY + 1 - corabl > 0) { std::cout << " (вправо плыть можно)\n"; }
				else { std::cout << " (вправо плыть нельзя)\n"; }
				std::cout << "3) вниз";if (HodX + 1 - corabl > 0) { std::cout << " (вниз плыть можно)\n"; }
				else { std::cout << " (вниз плыть нельзя)\n"; }
				std::cout << "4) влева";if (HodY - 1 + corabl < 11) { std::cout << " (влево плыть можно)\n"; }
				else { std::cout << " (влево плыть нельзя)\n"; }
				std::cin >> povorot;
				if (povorot > 0 && povorot < 5) {
					if (povorot == 1) {
						if (HodX - 1 + corabl < 11) {
							std::cout << " вверх плыть можно\n";
							break;
						}
						else {
							std::cout << "\nвверх плыть нельзя\nдавай по новой";
							sleep(2);
						}
					}
					if (povorot == 2) {
						if (HodY + 1 - corabl > 0) {
							std::cout << " вправо плыть можно\n";
							break;
						}
						else {
							std::cout << "\nввправо плыть нельзя\nдавай по новой";
							sleep(2);
						}
					}
					if (povorot == 3) {
						if (HodX + 1 - corabl > 0) {
							std::cout << " вниз плыть можно\n";
							break;
						}
						else {
							std::cout << "\nвниз плыть нельзя\nдавай по новой";
							sleep(2);
						}
					}
					if (povorot == 4) {
						if (HodY - 1 + corabl < 11) {
							std::cout << " влево плыть можно\n";
							break;
						}
						else {
							std::cout << "\nвлево плыть нельзя\nдавай по новой";
							sleep(2);
						}
					}

				}
				else {
					std::cout << "\nтокого выбора нет \n давай по новой";
					sleep(2);
				}
			}

			if (corabl == 1) {
				pole::zapolniMeni(HodX, HodY, 11);
			}
			else if (corabl == 2) {
				pole::zapolniMeni(HodX, HodY, 12);
				if (povorot == 1) {
					pole::zapolniMeni(HodX + 1, HodY, 12);
				}
				else if (povorot == 2) {
					pole::zapolniMeni(HodX, HodY - 1, 12);
				}
				else if (povorot == 3) {
					pole::zapolniMeni(HodX - 1, HodY, 12);
				}
				else if (povorot == 4) {
					pole::zapolniMeni(HodX, HodY + 1, 12);
				}

			}
			else if (corabl == 3) {
				pole::zapolniMeni(HodX, HodY, 13);
				if (povorot == 1) {
					pole::zapolniMeni(HodX + 1, HodY, 13);
					pole::zapolniMeni(HodX + 2, HodY, 13);
				}
				else if (povorot == 2) {
					pole::zapolniMeni(HodX, HodY - 1, 13);
					pole::zapolniMeni(HodX, HodY - 2, 13);
				}
				else if (povorot == 3) {
					pole::zapolniMeni(HodX - 1, HodY, 13);
					pole::zapolniMeni(HodX - 2, HodY, 13);
				}
				else if (povorot == 4) {
					pole::zapolniMeni(HodX, HodY + 1, 13);
					pole::zapolniMeni(HodX, HodY + 2, 13);
				}
			}
			else if (corabl == 4) {
				pole::zapolniMeni(HodX, HodY, 14);
				if (povorot == 1) {
					pole::zapolniMeni(HodX + 1, HodY, 14);
					pole::zapolniMeni(HodX + 2, HodY, 14);
					pole::zapolniMeni(HodX + 3, HodY, 14);
				}
				else if (povorot == 2) {
					pole::zapolniMeni(HodX, HodY - 1, 14);
					pole::zapolniMeni(HodX, HodY - 2, 14);
					pole::zapolniMeni(HodX, HodY - 3, 14);
				}
				else if (povorot == 3) {
					pole::zapolniMeni(HodX - 1, HodY, 14);
					pole::zapolniMeni(HodX - 2, HodY, 14);
					pole::zapolniMeni(HodX - 3, HodY, 14);
				}
				else if (povorot == 4) {
					pole::zapolniMeni(HodX, HodY + 1, 14);
					pole::zapolniMeni(HodX, HodY + 2, 14);
					pole::zapolniMeni(HodX, HodY + 3, 14);
				}
			}

			corabli[corabl - 1] = corabli[corabl - 1] - 1;
		}
		else {
			system("cls");
			std::cout << "\nэтот корабль кончился \n давай другой";
			sleep(2);
		}
	}


}
