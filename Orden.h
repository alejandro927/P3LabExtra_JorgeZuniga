#ifndef ORDEN_H
#define ORDEN_H
#include <iostream>
#include "OrdenComida.h"

#include <vector>
using namespace std;
class Orden {
	public:
		Orden();
		~Orden();
		void addOrden(Comida* comida,int cantidad);
		void imprimirPagoTotal(int);
		Orden* copia();
		Orden* operator+(Orden orden);
		vector<OrdenComida*> getOrden();
		void setOrden(OrdenComida*);
		void eliminarOrden(int);

	private:
		vector<OrdenComida*>orden;
};

#endif