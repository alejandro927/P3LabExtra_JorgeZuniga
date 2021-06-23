#ifndef CARNES_H
#define CARNES_H
#include <iostream>
#include "Comida.h"
using namespace std;

class Carnes : public Comida
{
	public:
		Carnes();
		Carnes(string,double,int,bool,string);
		~Carnes();
		bool getEsCarne();
		void setEsCarne(bool);
		string getTermino();
		void setTermino(string);
		
	private:
		bool esCarne;
		string termino;
		
};

#endif