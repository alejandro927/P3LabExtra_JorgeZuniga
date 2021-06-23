#include "Refresco.h"

Refresco::Refresco() {
}

Refresco::Refresco(string name,double prec,int idd,string marc,string tam) : Comida(name,prec,idd) {
	this->marca = marc;
	this->tamano = tam;
}

Refresco::~Refresco() {
}


string Refresco::getMarca(){
	return this->marca;
}

void Refresco::setMarca(string marc){
		this->marca = marc;
}

string Refresco::getTamano(){
	return this->tamano;
}

void Refresco::setTamano(string tam){
	this->tamano=tam;
}
