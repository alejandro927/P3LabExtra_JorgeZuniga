#include "Restaurante.h"

Restaurante::Restaurante()
{
}

Restaurante::~Restaurante()
{
}

void Restaurante::addComida(Comida* comida){
	this->menu.push_back(comida);
}

