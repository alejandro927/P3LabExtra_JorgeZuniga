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
		
		
		
	private:
		Comida* comida;
		int cantidad;
};

#endif