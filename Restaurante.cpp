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


