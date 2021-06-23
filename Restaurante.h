#ifndef RESTAURANTE_H
#define RESTAURANTE_H
#include "Orden.h"
#include "Comida.h"
#include <iostream>
using namespace std;
class Restaurante
{
	public:
		Restaurante();
		~Restaurante();
		void addComida(Comida*);
	private:
		vector <Comida*> menu;
		vector <Orden*> ordenes;
		
};

#endif