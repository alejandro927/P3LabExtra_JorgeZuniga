#include "Orden.h"
#include "Restaurante.h"
Orden::Orden() {
}

Orden::~Orden() {
}


void Orden::imprimirPagoTotal(int posicion) {
	double total=0;
	double impuesto=0;
	total = orden[posicion]->getComida()->getPrecio();
	total = total * orden[posicion]->getCantidad();
	impuesto = total * 0.15;
	total = total + impuesto;
	cout<<"El impuesto es:"<<impuesto<<endl;
	cout<<"El total es:"<<total<<endl;
}

vector<OrdenComida*> Orden::getOrden() {
	return this->orden;
}

void Orden::setOrden(OrdenComida* ordenCom) {
	this->orden.push_back(ordenCom);
}

void Orden::addOrden(Comida* comida,int cantidad) {
	orden.push_back(new OrdenComida(comida,cantidad));
	cout<<"Orden Agregada Exitosamente!!!"<<endl;
}

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

void Orden::eliminarOrden(int posicion) {
	orden.erase (orden.begin()+posicion);
}