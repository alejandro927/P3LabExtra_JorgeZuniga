#include "Carnes.h"

Carnes::Carnes() {
}

Carnes::Carnes(string name,double prec,int idd,bool esCarn,string termin) : Comida(name,prec,idd) {
	this->esCarne = esCarn;
	this->termino = termin;
}

Carnes::~Carnes() {
}

bool Carnes::getEsCarne() {
	return this->esCarne;
}

string Carnes::getTermino() {
	return this->termino;
}

void Carnes::setEsCarne(bool esCar) {
	this->esCarne = esCar;
}

void Carnes::setTermino(string term) {
	this->termino = term;
}
