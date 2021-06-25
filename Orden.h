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
		void addOrden(OrdenComida*);
		void imprimirPagoTotal();
		Orden* copia();
		Orden* operator+(Orden orden); 
		vector<OrdenComida*> getOrden();
		void setOrden(OrdenComida*);
		Orden* operator+(int cantidad);
	

	private:
		vector<OrdenComida*>orden;
};

#endif