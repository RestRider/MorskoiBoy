#ifndef _POLE_HPP_
#define _POLE_HPP_
#include<iostream>
#include <windows.h>
#include <thread>

class pole
{
public:

	void poleIgroka();
	void poleProtivnica();

	void zapolniMeni(int HodX,int HodY , double zapolnitel);
	double delusi(int HodX, int HodY);

	void sleep(int time);
private:
	double Pole[11][11]{
	{99 ,1,2,3,4,5,6,7,8,9,10},
	{1 ,0,0,0,0,0,0,0,0,0,0},
	{2 ,0,0,0,0,0,0,0,0,0,0},
	{3 ,0,0,0,0,0,0,0,0,0,0},
	{4 ,0,0,0,0,0,0,0,0,0,0},
	{5 ,0,0,0,0,0,0,0,0,0,0},
	{6 ,0,0,0,0,0,0,0,0,0,0},
	{7 ,0,0,0,0,0,0,0,0,0,0},
	{8 ,0,0,0,0,0,0,0,0,0,0},
	{9 ,0,0,0,0,0,0,0,0,0,0},
	{10,0,0,0,0,0,0,0,0,0,0}
	};

};
#endif

