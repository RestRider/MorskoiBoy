#ifndef _DEISTVIA_HPP_
#define _DEISTVIA_HPP_
#include "pole.h"
class deistvia:public pole
{public:

	void vodHoda();

	void vistrel();
	void Corobli();


private:
	int HodX;
	int HodY;
	int corabli[4]{4,3,2,1};
	int corabl = 0;
	int povorot = 0;
};
#endif 

