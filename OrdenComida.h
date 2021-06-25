#ifndef ORDENCOMIDA_H
#define ORDENCOMIDA_H
#include <iostream>
using namespace std;
#include "Comida.h"
class OrdenComida
{
	public:
		OrdenComida();
		~OrdenComida();
		OrdenComida(Comida* ,int );
		Comida* getComidaO();
		void setComida(Comida*);
		int getCantidad();
		void setCantidad(int);
		
	private:
		Comida* comida;
		int cantidad;
};

#endif