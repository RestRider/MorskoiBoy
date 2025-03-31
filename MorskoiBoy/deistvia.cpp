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
			std::cout << "такого столбца нет";
		}
	}
	while (true) {
		std::cout << "\nвведите строку которую вы хотите выбрать:";
		std::cin >> HodX;
		if (HodX > 0 && HodX < 11) {
			break;
		}
		else {
			std::cout << "такой строки нет";
		}
	}
	std::cout << "\n\n\n";
}

void deistvia::vistrel()
{
}

void deistvia::corobli()
{
	while (corabli[0]!=4 && corabli[1]!=3 && corabli[2]!=2 && corabli[3]!=1) {
		while (true) {
			system("cls"); 
			corabl = 0;
			std::cout << "\nКакой корабль вы хотите поставить:\n"
				<< "1) однопалубник (можно поставить" << 4 - corabli[0] << "\\4)\n" 
				<< "2) двупалубник (можно поставить" << 4 - corabli[1] << "\\3)\n" 
				<< "3) трёхпалубник (можно поставить" << 4 - corabli[2] << "\\2)\n" 
				<< "4) чутырёхпалубник (можно поставить" << 4 - corabli[3] << "\\1)\n";
			std::cin >> corabl;
			if (corabl > 0 && corabl < 5) {
				break;
			}
			else {
				std::cout << "\nтокого выбора нет \n давай по новой";
			}
		}
		system("cls");
		pole::poleIgroka();
		std::cout << "\nкуда поставить корабль\n";
		deistvia::vodHoda();
		while (true) {
			system("cls"); 
			povorot = 0;
			std::cout << "\nкуда будет плыт корабль:\n";
			std::cout << "1) вверх";if (HodX - 1 + corabl < 11) { std::cout << " (вверх плыть можно)\n"; }else{ std::cout << " (вверх плыть нельзя)\n"; }
			std::cout << "2) вправо";if (HodY + 1 - corabl > 0) { std::cout << " (вправо плыть можно)\n"; }else{ std::cout << " (вправо плыть нельзя)\n"; }
			std::cout << "3) вниз";if (HodX + 1 - corabl > 0) { std::cout << " (вниз плыть можно)\n"; }else{ std::cout << " (вниз плыть нельзя)\n"; }
			std::cout << "4) влева";if (HodY - 1 + corabl < 11) { std::cout << " (влево плыть можно)\n"; }else{ std::cout << " (влево плыть нельзя)\n"; }
			std::cin >> povorot;
			if (povorot > 0 && povorot < 5) {
				if (povorot == 1) {
					if (HodX - 1 + corabl < 11) {
						std::cout << " вверх плыть можно\n"; 
						break;
					}
					else { 
						std::cout << "\nвверх плыть нельзя\nдавай по новой"; 
					}
				}
				if (povorot == 2) {
					if (HodY + 1 - corabl > 0) {
						std::cout << " вправо плыть можно\n";
						break;
					}
					else {
						std::cout << "\nввправо плыть нельзя\nдавай по новой";
					}
				}
				if (povorot == 3) {
					if (HodX + 1 - corabl > 0) {
						std::cout << " вниз плыть можно\n";
						break;
					}
					else {
						std::cout << "\nвниз плыть нельзя\nдавай по новой";
					}
				}
				if (povorot == 4) {
					if (HodY - 1 + corabl < 11) {
						std::cout << " влево плыть можно\n";
						break;
					}
					else {
						std::cout << "\nвлево плыть нельзя\nдавай по новой";
					}
				}

			}
			else {
				std::cout << "\nтокого выбора нет \n давай по новой";
			}
		}

		if (corabl == 1) {
			pole::zapolniMeni(HodX,HodY,11);
		}
		else if (corabl == 2) {
			pole::zapolniMeni(HodX, HodY, 11);
			if (po) {
			}
			else if (){}
			else if () {}

		}
		else if (corabl == 3) {

		}
		else if (corabl == 4) {

		}
	}


}
