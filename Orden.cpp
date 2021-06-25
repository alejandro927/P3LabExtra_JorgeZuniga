#include "Orden.h"
#include "Restaurante.h"
Orden::Orden() {
}

Orden::~Orden() {
}


void Orden::imprimirPagoTotal() {
	double total=0;
	double impuesto=0;
	Restaurante* restaurante = new Restaurante();
	vector<Comida*> comida = restaurante->getMenuComidas();
	for(int i=0; i<orden.size(); i++) {
		OrdenComida* x = orden[i];
		total = total + comida[i]->getPrecio();
	}
	impuesto = total * 0.15;
	total = total + impuesto;
	cout<<"El impuesto es:"<<impuesto<<endl;
	cout<<"El total a pagar es:"<<total;
}

vector<OrdenComida*> Orden::getOrden(){
	return this->orden;
}

void Orden::setOrden(OrdenComida* ordenCom){
	this->orden.push_back(ordenCom);
}

void Orden::addOrden(OrdenComida* ordenC){
	orden.push_back(ordenC);
}

/*
Comida* Orden::operator+(int cantidad) {
	OrdenComida* x = new OrdenComida(this,cantidad);
	orden.push_back(x);
}
*/

Orden* Orden::operator+(Orden ordenX) {
	Orden* newOrden = new Orden();

	for(int i=0; i<this->getOrden().size(); i++) {
		OrdenComida* x = this->getOrden()[i];
		newOrden->setOrden(x);
	}

	for(int i=0; i<ordenX.getOrden().size(); i++) {
		OrdenComida* x = ordenX.getOrden()[i];
		newOrden->setOrden(x);
	}
	return newOrden;
	delete newOrden;
}
