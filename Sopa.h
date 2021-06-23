#ifndef SOPA_H
#define SOPA_H

#include "Comida.h"

class Sopa : public Comida
{
	public:
		Sopa();
		Sopa(string,double,int,bool);
		~Sopa();
		bool getTieneArroz();
		void setTieneArroz(bool);
		
	private:
		bool tieneArroz;
		
		
};

#endif