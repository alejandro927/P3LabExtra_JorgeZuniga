#include "Comida.h"
Comida::Comida() {
}

Comida::Comida(string name,double prec,int idd) {
	this->nombre = name;
	this->precio = prec;
	this->id = idd;
}

Comida::~Comida() {

}

string Comida::getNombre() {
	return this->nombre;
}

double Comida::getPrecio() {
	return this->precio;
}

int Comida::getId() {
	return this->id;
}

void Comida::setNombre(string name) {
	this->nombre = name;
}

void Comida::setPrecio(double prec) {
	this->precio = prec;
}

void Comida::setId(int idd) {
	this->id = idd;
}

