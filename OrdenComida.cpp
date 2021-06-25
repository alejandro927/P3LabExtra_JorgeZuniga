#include "OrdenComida.h"
OrdenComida::OrdenComida() {

}

OrdenComida::OrdenComida(Comida* comid,int cant) {
this->comida = comid;
this->cantidad=cant;
}

OrdenComida::~OrdenComida() {

}

Comida* OrdenComida::getComida() {
	return this->comida;
}

void OrdenComida::setComida(Comida* comid) {
	this->comida = comid;
}

int OrdenComida::getCantidad() {
	return this->cantidad;
}

void OrdenComida::setCantidad(int cant) {
	this->cantidad = cant;
}
