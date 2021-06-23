#ifndef REFRESCO_H
#define REFRESCO_H
#include <iostream>
#include "Comida.h"
using namespace std;

class Refresco : public Comida
{
	public:
		Refresco();
		Refresco(string,double,int,string,string);
		~Refresco();
		string getMarca();
		void setMarca(string);
		string getTamano();
		void setTamano(string);
		
		
	protected:
		string marca;
		string tamano;
		
};

#endif