#ifndef COMIDA_H
#define COMIDA_H
#include <iostream>
using namespace std;
class Comida
{
	public:
		Comida();
		Comida(string,double,int);
		~Comida();
		string getNombre();
		double getPrecio();
		int getId();
		void setNombre(string);
		void setPrecio(double);
		void setId(int);
		
	protected:
		string nombre;
		double precio;
		int id;
		
		
};

#endif