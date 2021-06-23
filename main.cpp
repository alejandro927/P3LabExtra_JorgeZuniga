#include <iostream>
#include "OrdenComida.h"
#include "Sopa.h"
#include "Refresco.h"
#include "Carnes.h"
#include "Restaurante.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

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

int miniMenuModificarComidaRefresco() {
	int opcion=0;
	cout<<"=====Mini Menu para modificar Comida====="<<endl;
	cout<<"1) Nombre"<<endl;
	cout<<"2) Precio"<<endl;
	cout<<"3) Id"<<endl;
	cout<<"4) Marca"<<endl;
	cout<<"5) Tamano"<<endl;
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

int menuModificar() {
	int opcion=0;
	cout<<"=====Modificar====="<<endl;
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
				int opcion2=0;
				while(opcion != 4) {
					opcion = miniMenuComida();
					switch(opcion) {
						case 1: {
							string nombre="";
							double precio=0;
							int id=0;
							bool tieneArroz;
							char resp;
							cout<<"Ingrese el nombre de la comida:"<<endl;
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
							cout<<"Ingrese el nombre de la comida:"<<endl;
							getline(cin,nombre);
							getline(cin,nombre);
							cout<<"Ingrese el precio:"<<endl;
							cin>>precio;
							cout<<"Ingrese la id:"<<endl;
							cin>>id;
							cout<<"La tiene carne?(S/N)"<<endl;
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
							char resp;
							cout<<"Ingrese el nombre de la comida:" <<endl;
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
				int opcion2=0;
				while(opcion != 4){
					opcion = menuModificar();
					switch(opcion){
						case 1:{
							int opcion3 = 0;
							opcion3 = miniMenuModificarComidaSopa();
							switch(opcion3){
								case 1:{
									string nombre ="";
									cout<<"Ingrese el nuevo nombre:";
									getline(cin,nombre);
									getline(cin,nombre);
									
									
									
									break;
								}
								
								case 2:{
									
									
									break;
								}
								
								case 3:{
									
									
									break;
								}
								
								case 4:{
									
									
									break;
								}
							}
							
							break;
						}
						case 2:{
							
							
							break;
						}
						case 3:{
							
							
							break;
						}
						default:{
							cout<<"Numero Ingresado no valido!!!"<<endl;
							break;
						}
					}
				}
				

				break;
			}

			case 3: {


				break;
			}
			case 4: {


				break;
			}
			case 5: {


				break;
			}
			case 6: {


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