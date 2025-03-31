#ifndef _DEISTVIA_HPP_
#define _DEISTVIA_HPP_
#include "pole.h"
class deistvia:public pole
{public:

	void vodHoda();

	void vistrel();
	void corobli();


private:
	int HodX;
	int HodY;
	int corabli[4];
	int corabl = 0;
	int povorot = 0;
};
#endif 

