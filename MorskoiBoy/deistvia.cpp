#include "deistvia.h"

void deistvia::vodHoda()
{
	while (true) {
		std::cout << "\n������� ������� ������� �� ������ ������:";
		std::cin >> HodY;
		if (HodY > 0 && HodY < 11) {
			break;
		}
		else {
			std::cout << "������ ������� ���";
		}
	}
	while (true) {
		std::cout << "\n������� ������ ������� �� ������ �������:";
		std::cin >> HodX;
		if (HodX > 0 && HodX < 11) {
			break;
		}
		else {
			std::cout << "����� ������ ���";
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
			std::cout << "\n����� ������� �� ������ ���������:\n"
				<< "1) ������������ (����� ���������" << 4 - corabli[0] << "\\4)\n" 
				<< "2) ����������� (����� ���������" << 4 - corabli[1] << "\\3)\n" 
				<< "3) ����������� (����� ���������" << 4 - corabli[2] << "\\2)\n" 
				<< "4) �������������� (����� ���������" << 4 - corabli[3] << "\\1)\n";
			std::cin >> corabl;
			if (corabl > 0 && corabl < 5) {
				break;
			}
			else {
				std::cout << "\n������ ������ ��� \n ����� �� �����";
			}
		}
		system("cls");
		pole::poleIgroka();
		std::cout << "\n���� ��������� �������\n";
		deistvia::vodHoda();
		while (true) {
			system("cls"); 
			povorot = 0;
			std::cout << "\n���� ����� ���� �������:\n";
			std::cout << "1) �����";if (HodX - 1 + corabl < 11) { std::cout << " (����� ����� �����)\n"; }else{ std::cout << " (����� ����� ������)\n"; }
			std::cout << "2) ������";if (HodY + 1 - corabl > 0) { std::cout << " (������ ����� �����)\n"; }else{ std::cout << " (������ ����� ������)\n"; }
			std::cout << "3) ����";if (HodX + 1 - corabl > 0) { std::cout << " (���� ����� �����)\n"; }else{ std::cout << " (���� ����� ������)\n"; }
			std::cout << "4) �����";if (HodY - 1 + corabl < 11) { std::cout << " (����� ����� �����)\n"; }else{ std::cout << " (����� ����� ������)\n"; }
			std::cin >> povorot;
			if (povorot > 0 && povorot < 5) {
				if (povorot == 1) {
					if (HodX - 1 + corabl < 11) {
						std::cout << " ����� ����� �����\n"; 
						break;
					}
					else { 
						std::cout << "\n����� ����� ������\n����� �� �����"; 
					}
				}
				if (povorot == 2) {
					if (HodY + 1 - corabl > 0) {
						std::cout << " ������ ����� �����\n";
						break;
					}
					else {
						std::cout << "\n������� ����� ������\n����� �� �����";
					}
				}
				if (povorot == 3) {
					if (HodX + 1 - corabl > 0) {
						std::cout << " ���� ����� �����\n";
						break;
					}
					else {
						std::cout << "\n���� ����� ������\n����� �� �����";
					}
				}
				if (povorot == 4) {
					if (HodY - 1 + corabl < 11) {
						std::cout << " ����� ����� �����\n";
						break;
					}
					else {
						std::cout << "\n����� ����� ������\n����� �� �����";
					}
				}

			}
			else {
				std::cout << "\n������ ������ ��� \n ����� �� �����";
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
