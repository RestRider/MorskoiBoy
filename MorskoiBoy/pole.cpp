#include "pole.h"

void pole::poleIgroka()
{
	std::cout << "\t\tyou\n";
	for (int x = 0; x < 11; x++)
	{
		for (int y = 0; y < 11; y++)
		{

			if (Pole[x][y] == 0) {
				std::cout << "[ ]";
			}
			else if (Pole[x][y] == 99) {
				std::cout << "[  ]";
			}
			else if (x > 0 && Pole[x][y] <10) {
				if (x < 10) {
					std::cout << "[" << Pole[x][y] << " ]";
				}
			}
			else if (Pole[x][y] == 11) {
				std::cout << "[O]";
			}
			else if (Pole[x][y] == 12) {
				std::cout << "[Д]";
			}
			else if (Pole[x][y] == 13) {
				std::cout << "[Т]";
			}
			else if (Pole[x][y] == 14) {
				std::cout << "[Ч]";
			}
			else if (Pole[x][y] == -11 && Pole[x][y] == -12 && Pole[x][y] == -13 && Pole[x][y] == -14) {
				std::cout << "[П]";
			}
			else if (Pole[x][y] == 66) {
				std::cout << "[М]";
			}
			else {
				std::cout << "[" << Pole[x][y] << "]";
			}
			
		}
		
		if (x == 1) {
			std::cout << "\t\tОбозначения:";
		}
		else if (x == 2) {
			std::cout << "\t\t О - Однопалубник";
		}
		else if (x == 3) {
			std::cout << "\t\t Д - Двупалубник";
		}
		else if (x == 4) {
			std::cout << "\t\t Т - Трёхпалубник";
		}
		else if (x == 5) {
			std::cout << "\t\t Ч - Четырёхпалубник";
		}
		else if (x == 6) {
			std::cout << "\t\t М - Мимо";
		}
		else if (x == 7) {
			std::cout << "\t\t П - Попадание";
		}
		
		
		
		
		
		std::cout << "\n";
	}
	std::cout << "\n";
}

void pole::poleProtivnica()
{
	std::cout << "\t\tHe\n";
	for (int x = 0; x < 11; x++)
	{
		for (int y = 0; y < 11; y++)
		{
			if (Pole[x][y] == 0) {
				std::cout << "[ ]";
			}
			else if (Pole[x][y] == 99) {
				std::cout << "[  ]";
			}
			else if (x > 0 && Pole[x][y] < 10 && Pole[x][y] > 0) {
				if (x < 10) {
					std::cout << "[" << Pole[x][y] << " ]";
				}
			}
			else if (Pole[x][y] == 11) {
				std::cout << "[ ]";
			}
			else if (Pole[x][y] == 12) {
				std::cout << "[ ]";
			}
			else if (Pole[x][y] == 13) {
				std::cout << "[ ]";
			}
			else if (Pole[x][y] == 14) {
				std::cout << "[ ]";
			}
			else if (Pole[x][y] == -11) {
				std::cout << "[П]";
			}
			else if (Pole[x][y] == -12) {
				std::cout << "[П]";
			}
			else if (Pole[x][y] == -13) {
				std::cout << "[П]";
			}
			else if (Pole[x][y] == -14) {
				std::cout << "[П]";
			}
			else if (Pole[x][y] == 66) {
				std::cout << "[М]";
			}
			else {
				std::cout << "[" << Pole[x][y] << "]";
			}

		}
		if (x == 3) {
			std::cout << "\t\tОбозначения:";
		}
		else if (x == 4) {
			std::cout << "\t\t М - Мимо";
		}
		else if (x == 5) {
			std::cout << "\t\t П - Попал";
		}
		
		std::cout << "\n";
	}
	std::cout << "\n";
}

void pole::zapolniMeni(int HodX, int HodY, double zapolnitel)
{
	Pole[HodX][HodY] = zapolnitel;

}

double pole::delusi(int HodX, int HodY)
{
	return Pole[HodX][HodY];
}

void pole::sleep(int time)
{
	std::chrono::seconds dura(time);
	std::this_thread::sleep_for(dura);
}

