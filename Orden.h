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
		void imprimirPagoTotal();
		Orden* copia();

	private:
		vector<OrdenComida*>orden;


};

#endif