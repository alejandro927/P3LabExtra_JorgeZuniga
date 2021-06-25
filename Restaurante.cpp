#include "Restaurante.h"

Restaurante::Restaurante() {
}

Restaurante::~Restaurante() {
}

void Restaurante::addComida(Comida* comida) {
	this->menu.push_back(comida);
}

vector<Comida*> Restaurante::getMenuComidas() {
	return this->menu;
}

vector<Orden*> Restaurante::getOrdenes() {
	return this->ordenes;
}

void Restaurante::eliminarComida(int posicion) {
	menu.erase (menu.begin()+posicion);
}

void Restaurante::eliminarOrden(int posicion) {
	ordenes.erase (ordenes.begin()+posicion);
}

OrdenComida* Restaurante::operator+(int cantidad) {
	OrdenComida* x = new OrdenComida(this->menu[cantidad],cantidad);
	Orden* y = new Orden();
	y->addOrden(x);
	
	return x;
}