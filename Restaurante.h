#ifndef RESTAURANTE_H
#define RESTAURANTE_H
#include "Orden.h"
#include "OrdenComida.h"
#include "Comida.h"
#include <iostream>
#include <vector>
using namespace std;
class Restaurante
{
	public:
		Restaurante();
		~Restaurante();
		void addComida(Comida*);
		vector<Comida*> getMenuComidas();
		vector<Orden*> getOrdenes();
		void eliminarComida(int);
		
	private:
		vector <Comida*> menu;
		vector <Orden*> ordenes;
		
};

#endif