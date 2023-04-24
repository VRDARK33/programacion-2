/*este crud simula el registro de una tienda 
ver 5.11 de c++ realizado por brayan andres sanchez perez */
#include <iostream>
#include <fstream>
#include <iomanip>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
using namespace std;

class elementos{
	private:
		int codigo;
		char nombre[25];
		int cantidad;
	
	public:
		void obtenerArticulo(void);
		void ponerArticulo(void);
		int ponerCodigo(void){
			return codigo;
		}
		
		void cargarQty(int num){
			cantidad=cantidad-num;
		}
};

void elementos::obtenerArticulo(void){
	
	cout<<"ingrese el codigo del articulo: "; cin>>codigo;
	fflush(stdin);
	cout<<"ingrese el nombre del articulo: "; cin>>nombre;
	fflush(stdin);
	cout<<"ingrese la cantidad del articulo: "; cin>>cantidad;
}

void elementos::ponerArticulo(void){
	cout<<setw(6)<<codigo<<setw(15)<<nombre<<setw(15)<<cantidad<<endl;
}

void addRegistro(void);
void verRegistro(void);
void verTodos(void);
void eliminarRegistro(void);
void modificarRegistro(void);

elementos it;
fstream archivo;

int main(){
	setlocale(LC_ALL, "spanish");
	int opcion;
	
	while(1){
		system("cls");
		cout<<"\tMENU\t"<<endl;
		cout<<"1) añadir nuevo registro. "<<endl;
		cout<<"2) mostrar todos los registros."<<endl;
		cout<<"3) mostrar un registro especifico   "<<endl;
		cout<<"4) eliminar registro "<<endl;
		cout<<"5) modificar registro"<<endl;
		cout<<"6) salir "<<endl;
		cout<<"ingrese la opcion No.:"; cin>>opcion;
		switch(opcion){
			case 1:{
 				addRegistro();
				cout<<"presione cualquier tecla para ingresar al menu...";
				getch();
				break;
			}
			case 2:{
				cout<<"-----------------------------------------------------\n";
				cout<<setw(6)<<"codigo"<<setw(15)<<"nombre"<<setw(15)<<"cantidad"<<endl;
				cout<<"-----------------------------------------------------\n";
				verTodos();
				cout<<"-----------------------------------------------------\n";
				cout<<"presione cualquier tecla para ingresar al menu...";
				getch();
				break;
			}
			case 3:{
				verRegistro();
				cout<<"presione cualquier tecla para ingresar al menu...";
				getch();
				break;
			}
			case 4:{
				eliminarRegistro();
				cout<<"presione cualquier tecla para ingresar al menu...";
				getch();
				break;
			}
			case 5:{
				modificarRegistro();
				cout<<"presione cualquier tecla para ingresar al menu...";
				getch();
				break;
			}
			case 6:{
				exit(0);
			}
			default:{
				cout<<"opcion incorrecta, presione cualquier tecla para ingresar al menu...";
				getch();
				break;
			}
		}
	}
	return 0;
}

void addRegistro(){
	char ch='s';
	archivo.open("stock.dat",ios::app | ios::binary);
	while(ch=='s'||ch=='S'){
		it.obtenerArticulo();
		archivo.write((char*)&it, sizeof(it));
		cout<<"añadir mas registros...(S/N)?";
		cin>>ch;
	}
	archivo.close();
}

void verTodos(void){
	archivo.open("stock.dat",ios::in | ios::binary);
	if(! archivo){
		cout<<"archivo no encontrado";
		exit(0);
	}else{
		archivo.read((char*)&it,sizeof(it));
		while(! archivo.eof()){
			it.ponerArticulo();
			archivo.read((char*)&it, sizeof(it));
		}
	}
	archivo.close();
}

void verRegistro(void){
	int no, bandera=0;
	archivo.open("stock.dat",ios::in | ios::binary);
	if(! archivo){
		cout<<"archivo no encontrado";
		exit(0);
	}else{
		cout<<"ingrese el codigo para buscar: ";
		cin>>no;
		archivo.read((char*)&it, sizeof(it));
		while(!archivo.eof()){
			if(no==it.ponerCodigo()){
				bandera=1;
				cout<<"-----------------------------------------------------\n";
				cout<<setw(6)<<"codigo"<<setw(15)<<"nombre"<<setw(15)<<"cantidad"<<endl;
				cout<<"-----------------------------------------------------\n";
				it.ponerArticulo();
				cout<<"-----------------------------------------------------\n";
				break;
			}
			archivo.read((char*)&it, sizeof(it));
		}
		if(bandera==0){
			cout<<"archivo no encontrado...\n";
		}
	}
	archivo.close();
}

void eliminarRegistro(){
	int no;
	cout<<"ingrese el codigo del articulo para eliminar: ";
	cin>>no;
	
	ofstream archivo2;
	archivo2.open("new.dat",ios::out|ios::binary);
	archivo.open("stock.dat",ios::in | ios::binary);
	if(! archivo){
		cout<<"archivo no encontrado";
		exit(0);
	}else{
		archivo.read((char*)&it, sizeof(it));
		while(!archivo.eof()){
			if(no != it.ponerCodigo()){
				archivo2.write((char*)&it, sizeof(it));
			}
			archivo.read((char*)&it, sizeof(it));
		}
	}
	cout<<"producto eliminado ";
	archivo2.close();
	archivo.close();
	remove("stock.dat");
	rename("new.dat", "stock.dat");
}

void modificarRegistro(void){
	int no,num;
	cout<<"ingrese el codigo del articulo para modificar: ";cin>>no;
	cout<<"ingrese el No. de articulos vendios: ";cin>>num;
	archivo.open("stock.dat",ios::in | ios::out | ios::binary);
	if(! archivo){
		cout<<"archivo no encontrado";
		exit(0);
	}
	while(archivo.read((char*)&it, sizeof(it))){
		if(it.ponerCodigo() == no){
			it.cargarQty(num);
			int pos = sizeof(it);
			archivo.seekp(-pos, ios::cur);
			archivo.write((char*)&it, sizeof(it));
		}
	}
	archivo.close();
}
