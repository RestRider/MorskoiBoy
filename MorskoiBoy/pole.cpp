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
			else {
				std::cout << "[" << Pole[x][y] << "]";
			}
			
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
			else if (x > 0 && Pole[x][y] < 10) {
				if (x < 10) {
					std::cout << "[" << Pole[x][y] << " ]";
				}
			}
			else {
				std::cout << "[" << Pole[x][y] << "]";
			}

		}
		std::cout << "\n";
	}
	std::cout << "\n";
}
