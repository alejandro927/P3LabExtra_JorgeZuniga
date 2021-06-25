#include "Sopa.h"

Sopa::Sopa() {
}

Sopa::Sopa(string name,double prec,int idd,bool tieneArr) : Comida(name,prec,idd) {
	this->tieneArroz = tieneArr;
}

Sopa::~Sopa() {
}

bool Sopa::getTieneArroz(){
	return  this->tieneArroz;
}

void Sopa::setTieneArroz(bool tieneA){
	this->tieneArroz = tieneA;
}