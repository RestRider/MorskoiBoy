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
			std::cout << "\n������ ������� ���";
		}
	}
	while (true) {
		std::cout << "\n������� ������ ������� �� ������ �������:";
		std::cin >> HodX;
		if (HodX > 0 && HodX < 11) {
			break;
		}
		else {
			std::cout << "\n����� ������ ���";
		}
	}
	std::cout << "\n\n\n";
}

void deistvia::vistrel()  
{
	while (true) {
		std::cout << "\n���� �� ������ ����������";
		deistvia::vodHoda();
		if (pole::delusi(HodX, HodY) == 11 ) {
			std::cout << "\n �����";
			sleep(1);
			paluba[0] += 1;
			pole::zapolniMeni(HodX, HodY, -11);
			sleep(1);
			system("cls");
			pole::poleProtivnica();
			std::cout << "\n������� ���\n";
			sleep(1);
		}
		else if (pole::delusi(HodX, HodY) == 12) {
			std::cout << "\n �����";
			sleep(1);  
			paluba[1] += 1;
			pole::zapolniMeni(HodX, HodY, -12);
			sleep(1);
			system("cls");
			pole::poleProtivnica();
			std::cout << "\n������� ���\n";
			sleep(1);
		}
		else if (pole::delusi(HodX, HodY) == 13) {
			std::cout << "\n �����";
			sleep(1);
			paluba[2] += 1;
			pole::zapolniMeni(HodX, HodY, -13);
			sleep(1);
			system("cls");
			pole::poleProtivnica();
			std::cout << "\n������� ���\n";
			sleep(1);
		}
		else if (pole::delusi(HodX, HodY) == 14) {
			std::cout << "\n �����";
			sleep(1);
			paluba[3] += 1;
			pole::zapolniMeni(HodX, HodY, -14);
			sleep(1);
			system("cls");
			pole::poleProtivnica();
			std::cout << "\n������� ���\n";
			sleep(1);
		}
		else if (pole::delusi(HodX, HodY) == 0) {
			std::cout << "\n ����";
			sleep(1);
			pole::zapolniMeni(HodX, HodY, 66);
			break;
		}
		else if (pole::delusi(HodX, HodY) == -11 && pole::delusi(HodX, HodY) == -12 && pole::delusi(HodX, HodY) == -13 && pole::delusi(HodX, HodY) == -14) {
			std::cout << "\n���� �������� ������\n     �� ��� �������";
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
			std::cout << "\n����� ������� �� ������ ���������:\n"
				<< "1) ������������ (����� ��������� " << corabli[0] << "\\4)\n" 
				<< "2) ����������� (����� ��������� " << corabli[1] << "\\3)\n" 
				<< "3) ����������� (����� ��������� " << corabli[2] << "\\2)\n" 
				<< "4) �������������� (����� ��������� " << corabli[3] << "\\1)\n";
			std::cin >> corabl;
			if (corabl > 0 && corabl < 5) {
				break;
			}
			else {
				system("cls");
				std::cout << "\n������ ������ ��� \n ����� �� �����";
				sleep(2);
			}
		}
		
		if (corabli[corabl - 1] != 0) {
			while (true) {
				system("cls");
				pole::poleIgroka();
				std::cout << "\n���� ��������� �������\n";
				deistvia::vodHoda();
				if (pole::delusi(HodX, HodY) == 0) {
					break;
				}
				else {
					system("cls");
					std::cout << "\n���� ������� ������ \n ����� �� �����";
					sleep(2);
				}
			}
			while (true) {
				system("cls");
				povorot = 0;
				std::cout << "\n���� ����� ���� �������:\n";
				std::cout << "1) �����";if (HodX - 1 + corabl < 11) { std::cout << " (����� ����� �����)\n"; }
				else { std::cout << " (����� ����� ������)\n"; }
				std::cout << "2) ������";if (HodY + 1 - corabl > 0) { std::cout << " (������ ����� �����)\n"; }
				else { std::cout << " (������ ����� ������)\n"; }
				std::cout << "3) ����";if (HodX + 1 - corabl > 0) { std::cout << " (���� ����� �����)\n"; }
				else { std::cout << " (���� ����� ������)\n"; }
				std::cout << "4) �����";if (HodY - 1 + corabl < 11) { std::cout << " (����� ����� �����)\n"; }
				else { std::cout << " (����� ����� ������)\n"; }
				std::cin >> povorot;
				if (povorot > 0 && povorot < 5) {
					if (povorot == 1) {
						if (HodX - 1 + corabl < 11) {
							std::cout << " ����� ����� �����\n";
							break;
						}
						else {
							std::cout << "\n����� ����� ������\n����� �� �����";
							sleep(2);
						}
					}
					if (povorot == 2) {
						if (HodY + 1 - corabl > 0) {
							std::cout << " ������ ����� �����\n";
							break;
						}
						else {
							std::cout << "\n������� ����� ������\n����� �� �����";
							sleep(2);
						}
					}
					if (povorot == 3) {
						if (HodX + 1 - corabl > 0) {
							std::cout << " ���� ����� �����\n";
							break;
						}
						else {
							std::cout << "\n���� ����� ������\n����� �� �����";
							sleep(2);
						}
					}
					if (povorot == 4) {
						if (HodY - 1 + corabl < 11) {
							std::cout << " ����� ����� �����\n";
							break;
						}
						else {
							std::cout << "\n����� ����� ������\n����� �� �����";
							sleep(2);
						}
					}

				}
				else {
					std::cout << "\n������ ������ ��� \n ����� �� �����";
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
			std::cout << "\n���� ������� �������� \n ����� ������";
			sleep(2);
		}
	}


}
