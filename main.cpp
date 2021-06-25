#include <iostream>
#include "OrdenComida.h"
#include "Sopa.h"
#include "Orden.h"
#include "Refresco.h"
#include "Carnes.h"
#include "Restaurante.h"
#include <vector>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
int miniMenuModificarComidaSopa() {
	int opcion=0;
	cout<<"=====Mini Menu para modificar Comida====="<<endl;
	cout<<"1) Nombre"<<endl;
	cout<<"2) Precio"<<endl;
	cout<<"3) Id"<<endl;
	cout<<"4) Tiene arroz"<<endl;
	cout<<"Ingrese su opcion:";
	cin>>opcion;
	cout<<endl;
	return opcion;
}


int miniMenuModificarComidaCarne() {
	int opcion=0;
	cout<<"=====Mini Menu para modificar Comida====="<<endl;
	cout<<"1) Nombre"<<endl;
	cout<<"2) Precio"<<endl;
	cout<<"3) Id"<<endl;
	cout<<"4) Es carne"<<endl;
	cout<<"5) Termino"<<endl;
	cout<<"Ingrese su opcion:";
	cin>>opcion;
	cout<<endl;
	return opcion;
}
*/
int menuModificar() {
	int opcion=0;
	cout<<"=====Mini Menu para modificar Comida====="<<endl;
	cout<<"1) Nombre"<<endl;
	cout<<"2) Precio"<<endl;
	cout<<"3) Id"<<endl;
	cout<<"4) Salida"<<endl;
	cout<<"Ingrese su opcion:";
	cin>>opcion;
	cout<<endl;
	return opcion;
}

int miniMenuModificarOrden() {
	int opcion=0;
	cout<<"=====Mini Menu para modificar Orden====="<<endl;
	cout<<"Modificar Cantidad de OrdenComida"<<endl;
	cout<<"Eliminar OrdenComida"<<endl;
	cout<<"Ingrese su opcion:";
	cin>>opcion;
	cout<<endl;
	return opcion;
}

int miniMenuComida() {
	int opcion=0;
	cout<<"=====Mini Menu para Crear comida====="<<endl;
	cout<<"1) Sopa"<<endl;
	cout<<"2) Carne"<<endl;
	cout<<"3) Refresco"<<endl;
	cout<<"4) Salida"<<endl;
	cout<<"Ingrese su opcion:";
	cin>>opcion;
	cout<<endl;
	return opcion;
}

int menu() {
	int opcion=0;
	cout<<"=====Menu====="<<endl;
	cout<<"1) Crear comida"<<endl;
	cout<<"2) Modificar comida"<<endl;
	cout<<"3) Eliminar comida"<<endl;
	cout<<"4) Crear Orden"<<endl;
	cout<<"5) Modificar Orden"<<endl;
	cout<<"6) Eliminar Orden"<<endl;
	cout<<"7) Imprimir Pago Total"<<endl;
	cout<<"8) Salida"<<endl;
	cout<<"Ingrese su opcion:";
	cin>>opcion;
	cout<<endl;
	return opcion;
}

int main(int argc, char** argv) {
	Restaurante* restaurante = new Restaurante();
	int opcion = 0;
	while(opcion != 8) {
		opcion = menu();
		switch(opcion) {
			case 1: {
				int opcion3=0;
				while(opcion3 != 4) {
					opcion3 = miniMenuComida();
					switch(opcion3) {
						case 1: {
							string nombre="";
							double precio=0;
							int id=0;
							bool tieneArroz;
							char resp;
							cout<<"Ingrese el nombre de la sopa:"<<endl;
							getline(cin,nombre);
							getline(cin,nombre);
							cout<<"Ingrese el precio:"<<endl;
							cin>>precio;
							cout<<"Ingrese la id:"<<endl;
							cin>>id;
							cout<<"La sopa la quiere con arroz?(S/N)"<<endl;
							cin>>resp;
							if(resp == 's' || resp == 'S') {
								tieneArroz = true;
							} else if(resp == 'n' || resp == 'N') {
								tieneArroz = false;
							}
							restaurante->addComida(new Sopa(nombre,precio,id,tieneArroz));
							cout<<"Agregado exitosamente!!!"<<endl;
							break;
						}
						case 2: {
							string nombre="",termino="";
							double precio=0;
							int id=0;
							bool esCarne;
							char resp;
							cout<<"Ingrese el nombre de la carne:"<<endl;
							getline(cin,nombre);
							getline(cin,nombre);
							cout<<"Ingrese el precio:"<<endl;
							cin>>precio;
							cout<<"Ingrese la id:"<<endl;
							cin>>id;
							cout<<"Es res?(S/N)"<<endl;
							cin>>resp;
							if(resp == 's' || resp == 'S') {
								esCarne = true;
							} else if(resp == 'n' || resp == 'N') {
								esCarne = false;
							}
							cout<<"Ingrese el termino:"<<endl;
							getline(cin,termino);
							getline(cin,termino);
							restaurante->addComida(new Carnes(nombre,precio,id,esCarne,termino));
							cout<<"Agregado exitosamente!!!"<<endl;
							break;
						}
						case 3: {
							string nombre="",tamano="",marca="";
							double precio=0;
							int id=0;
							cout<<"Ingrese el nombre del refresco:" <<endl;
							getline(cin,nombre);
							getline(cin,nombre);
							cout<<"Ingrese el precio:" <<endl;
							cin>>precio;
							cout<<"Ingrese la id:" <<endl;
							cin>>id;
							cout<<"Ingrese la marca:" <<endl;
							getline(cin,marca);
							getline(cin,marca);
							cout<<"Ingrese el tamano:" <<endl;
							getline(cin,tamano);
							restaurante->addComida(new Refresco(nombre,precio,id,marca,tamano));
							cout<<"Agregado exitosamente!!!"<<endl;
							break;
						}
						default: {
							cout<<"Opcion Ingresada no valida!!!"<<endl;
							break;
						}
					}
				}
				break;
			}
			case 2: {
				vector<Comida*> x = restaurante->getMenuComidas();
				if(x.empty()) {
					cout<<"No se puede modificar si no hay nada!!!"<<endl;
				} else {
					int opcion3=0;
					while(opcion3 != 4) {
						opcion3 = menuModificar();
						switch(opcion3) {
							case 1: {
								int indice=0;
								vector<Comida*> aux = restaurante->getMenuComidas();
								for(int i=0; i<aux.size(); i++) {
									cout<<i<<") "<<"Nombre:"<<aux[i]->getNombre()<<"  Precio:"<<aux[i]->getPrecio() << "  ID:"<<aux[i]->getId()<<endl;
								}
								cout<<"\nIngrese el indice a modificar:";
								cin>>indice;
								string nombre ="";
								cout<<"Ingrese el nuevo nombre:";
								getline(cin,nombre);
								getline(cin,nombre);
								aux[indice]->setNombre(nombre);
								for(int i=0; i<aux.size(); i++) {
									cout<<i<<") "<<"Nombre:"<<aux[i]->getNombre()<<"  Precio:"<<aux[i]->getPrecio() << "  ID:"<<aux[i]->getId()<<endl;
								}
								cout<<"Se modifico exitosamente!!!"<<endl;
								break;
							}
							case 2: {
								int indice=0;
								vector<Comida*> aux2 = restaurante->getMenuComidas();
								for(int i=0; i<aux2.size(); i++) {
									cout<<i<<") "<<"Nombre:"<<aux2[i]->getNombre()<<"  Precio:"<<aux2[i]->getPrecio() << "  ID:"<<aux2[i]->getId()<<endl;
								}
								cout<<"\nIngrese el indice a modificar:";
								cin>>indice;
								double precio=0;
								cout<<"Ingrese el nuevo precio:";
								cin>>precio;
								aux2[indice]->setPrecio(precio);
								for(int i=0; i<aux2.size(); i++) {
									cout<<i<<") "<<"Nombre:"<<aux2[i]->getNombre()<<"  Precio:"<<aux2[i]->getPrecio() << "  ID:"<<aux2[i]->getId()<<endl;
								}
								cout<<"Se modifico exitosamente!!!"<<endl;
								break;
							}
							case 3: {
								int indice=0;
								vector<Comida*> aux2 = restaurante->getMenuComidas();
								for(int i=0; i<aux2.size(); i++) {
									cout<<i<<") "<<"Nombre:"<<aux2[i]->getNombre()<<"  Precio:"<<aux2[i]->getPrecio() << "  ID:"<<aux2[i]->getId()<<endl;
								}
								cout<<"\nIngrese el indice a modificar:";
								cin>>indice;
								int ID=0;
								cout<<"Ingrese el nuevo ID:";
								cin>>ID;
								aux2[indice]->setId(ID);
								for(int i=0; i<aux2.size(); i++) {
									cout<<i<<") "<<"Nombre:"<<aux2[i]->getNombre()<<"  Precio:"<<aux2[i]->getPrecio() << "  ID:"<<aux2[i]->getId()<<endl;
								}
								cout<<"Se modifico exitosamente!!!"<<endl;
								break;
							}
							default: {
								cout<<"Numero Ingresado no valido!!!"<<endl;
								break;
							}
						}
					}
				}
				break;
			}
			case 3: {
				vector<Comida*> x = restaurante->getMenuComidas();
				if(x.empty()) {
					cout<<"No se puede eliminar si no hay nada por eliminar!!!"<<endl;
					cout<<"Ingrese algo primero mejor gracias!!!"<<endl;
				} else {
					int indice=0;
					vector<Comida*> aux2 = restaurante->getMenuComidas();
					for(int i=0; i<aux2.size(); i++) {
						cout<<i<<") "<<"Nombre:"<<aux2[i]->getNombre()<<"  Precio:"<<aux2[i]->getPrecio() << "  ID:"<<aux2[i]->getId()<<endl;
					}
					cout<<"\nIngrese el indice a eliminar:";
					cin>>indice;
					restaurante->eliminarComida(indice);
					cout<<"Se elimino exitosamente!!!"<<endl;
				}
				break;
			}
			case 4: {
				int cantidad=0;
				int indice=0;
					vector<Comida*> aux2 = restaurante->getMenuComidas();
					for(int i=0; i<aux2.size(); i++) {
						cout<<i<<") "<<"Nombre:"<<aux2[i]->getNombre()<<"  Precio:"<<aux2[i]->getPrecio() << "  ID:"<<aux2[i]->getId()<<endl;
					}	
					/*
					//elija la pisicion de la comida a ordenar
					//Ingrese la contidad
					//Comida* comid = new Comida();
					//comid = aux2[posicion] + cant;
					OrdenComida* x = new OrdenComida();
					x = restaurante->aux2[indice] + cantidad;
					delete x;
					*/
				break;
			}
			case 5: {
				
				
				break;
			}
			case 6: {
				vector<Comida*> x = restaurante->getMenuComidas();
				if(x.empty()) {
					cout<<"No se puede eliminar si no hay nada por eliminar!!!"<<endl;
					cout<<"Ingrese algo primero mejor gracias!!!"<<endl;
				} else {
					cout<<"====Eliminar Orden===="<<endl;
					int indice=0;
					vector<Orden*> aux2 = restaurante->getOrdenes();
					for(int i=0; i<aux2.size(); i++) {
						//cout<<i<<") "<<"Nombre:"<<aux2[i]->getNombre()<<"  Precio:"<<aux2[i]->getPrecio() << "  ID:"<<aux2[i]->getId()<<endl;
					}
					cout<<"\nIngrese el indice a eliminar:";
					cin>>indice;
					restaurante->eliminarOrden(indice);
					cout<<"Se elimino exitosamente!!!"<<endl;
				}
				break;
			}
			case 7: {


				break;
			}
			case 8: {
				cout<<"\nGracias por usar el app!!!\nQue tenga buen dia!!";
				break;
			}
		}
	}
	delete restaurante;
	return 0;
}