/*este proyectos simula el inventatio de una tienda
ver 5.11 de c++ brayan andres sanchez perez */

#include<iostream>
#include<fstream>
#include<locale.h>
#include<iomanip>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>


using namespace std;

struct elementos{
	int codigo;
	char nombre[20];
	int cantidad;
	float precio; 
};
void menu();
void addProducto();
void vertodos();
void verproducto();
void eliminarproducto();
void modificar();
void ordenamiento();

FILE *pun,*pun2,*pun3;

elementos productos;
fstream archivo;


int main(){
	setlocale(LC_ALL, "spanish");
    menu();
	getch();
	return 0;
}

void menu(){
	int opcion;
	
	do{
		system("cls");
		cout<<"\tMENU"<<endl;
		cout<<"1.) añadir producto."<<endl;
		cout<<"2.) ver todos los productos. "<<endl;
		cout<<"3.) ver un productos especifico. "<<endl;
		cout<<"4.) eliminar un producto. "<<endl;
		cout<<"5.) modificar producto. "<<endl;
		cout<<"6.) ordenar inventario. "<<endl;
		cout<<"7.) salir. "<<endl;
		cout<<"opcion: ";
		cin>>opcion;
		switch(opcion){
			case 1: 
			    addProducto();
			    cout<<"ingrese cualquiere tecla para volver al menu... "<<endl;
			    getch();
			    break;
			case 2:
				cout<<"-----------------------------------------------------\n";
				cout<<setw(10)<<"codigo"<<setw(10)<<"nombre"<<setw(10)<<"cantidad"<<setw(10)<<"precio"<<endl;
				cout<<"-----------------------------------------------------\n";
				vertodos();
				cout<<"-----------------------------------------------------\n";
				cout<<"presione cualquier tecla para ingresar al menu...";
				getch();
				break;
			
			case 3:
				verproducto();
				cout<<"ingrese cualquiere tecla para volver al menu... "<<endl;
			    getch();
			    break;
			
			case 4:
				eliminarproducto();
				cout<<"ingrese cualquiere tecla para volver al menu... "<<endl;
			    getch();
			    break;
				
			case 5:
				modificar();
				cout<<"ingrese cualquiere tecla para volver al menu... "<<endl;
			    getch();
			    break;
			
			case 6:
				ordenamiento();
				cout<<"ingrese cualquiere tecla para volver al menu... "<<endl;
			    getch();
			    break;
			    
			case 7:
				exit(1);
			    getch();
			    break;
			    
			default: cout<<"opcion de menu incorrecta "<<endl;
			getch();
		}
	}while(opcion != 7);
	
}

void addProducto(){
	ofstream archivo;
	char n;
	archivo.open("productos.txt", ios::app);
	
	if(archivo.fail()){
		cout<<"no se creo el archivo ";
		exit(1);
	}

	
	do{
		cout<<"ingrese el codigo del producto: ";
		cin>>productos.codigo;
		cout<<"ingrese el nombre del producto: ";
		cin>>productos.nombre;
		cout<<"ingrese la cantidad del producto: ";
		cin>>productos.cantidad;
		cout<<"ingrese el precio del producto: ";
		cin>>productos.precio;
		
		archivo.write((char *)&productos,sizeof(elementos));
		cout<<"desea ingresar otro producto[S/N]: ";
		cin>>n;
	}while(n == 's' || n == 'S');
	
	archivo.close();
	
}

void vertodos(){
	ifstream archivo;
	archivo.open("productos.txt", ios::in);
	
	if(archivo.fail()){
		cout<<"no se creo el archivo ";
		exit(1);
	}

		
	while(!archivo.eof()){
		archivo.read((char *)&productos, sizeof(elementos));
		if(!archivo.eof()){
			cout<<setw(10)<<productos.codigo<<setw(10)<<productos.nombre<<setw(10)<<productos.cantidad<<setw(10)<<productos.precio<<endl;
		}
	}
	
	archivo.close();
}

void verproducto(){
	ifstream archivo;
	
	int no,bandera=0;
	
	archivo.open("productos.txt", ios::in);
	
	if(archivo.fail()){
		cout<<"no se encontro el archivo"<<endl;
		exit(1);
	}

	
	cout<<"ingrese el codigo para buscar: ";
	cin>>no;
	
	archivo.read((char *)&productos, sizeof(elementos));
	
	while(!archivo.eof()){
		if(no==productos.codigo){
			bandera=1;
			cout<<"-----------------------------------------------------\n";
			cout<<setw(10)<<"codigo"<<setw(10)<<"nombre"<<setw(10)<<"cantidad"<<setw(10)<<"precio"<<endl;
			cout<<"-----------------------------------------------------\n";
			cout<<setw(10)<<productos.codigo<<setw(10)<<productos.nombre<<setw(10)<<productos.cantidad<<setw(10)<<productos.precio<<endl;
			cout<<"-----------------------------------------------------\n";
			break;
		}
		archivo.read((char *)&productos,sizeof(elementos));
	}
	if(bandera==0){
		cout<<"el producto no existe"<<endl;
		
	}
	
	archivo.close();
}

void eliminarproducto(){
	int no;
	
	cout<<"ingrese el codigo del producto para eliminar: ";
	cin>>no;
	
	ifstream archivo;
	ofstream archivo2;
	
	archivo2.open("new.txt",ios::out);
	
	archivo.open("productos.txt",ios::in);
	
	if(archivo.fail()){
		cout<<"archivo no encontrado";
		exit(1);
	}
	archivo.read((char *)&productos, sizeof(elementos));
	while(!archivo.eof()){
		if(no != productos.codigo){
			archivo2.write((char *)&productos,sizeof(elementos));
		}
		archivo.read((char *)&productos, sizeof(elementos));
	}
	cout<<"producto eliminado "<<endl;
	archivo2.close();
	archivo.close();
	remove("productos.txt");
	rename("new.txt", "productos.txt");
}

void modificar(){
	fstream archivo;
	int no,num,num2;
	char nombre[20];
	cout<<"ingrese el codigo del articulo para modificar: ";cin>>no;
	 
	archivo.open("productos.txt",ios::in | ios::out);
	if(archivo.fail()){
		cout<<"archivo no encontrado";
		exit(1);
	}
	while(archivo.read((char*)&productos, sizeof(elementos))){
		if(productos.codigo == no){
			cout<<"ingrese la nueva cantidad de productos: ";cin>>num;
        	cout<<"ingrese el nueva precio de productos: ";cin>>num2;
	        fflush(stdin);
	        cout<<"ingrese la nueva nombre de productos: ";cin.getline(nombre,20,'\n');
			productos.cantidad = num;
			productos.precio = num2;
			strcpy(productos.nombre,nombre);
			int pos = sizeof(elementos);
			archivo.seekp(-pos, ios::cur);
			archivo.write((char*)&productos, sizeof(elementos));
		}else{
			cout<<"no hay producto con ese codigo, canson papi canson"<<endl;
			exit(1);
		}
		
		
	}
	archivo.close();
}

void ordenamiento(){
pun=fopen("productos.txt","a+");
pun2=fopen("productos.txt","r+");
int cont=0,cont2=0;
rewind(pun2);
while(fread(&productos,sizeof(productos),1,pun2)){
cont++;
}
elementos aux;
elementos vec[cont];

rewind(pun2);
while(fread(&productos,sizeof(productos),1,pun2)){
vec[cont2]=productos;
cont2++;	
}

for	(int i=0;i<cont-1;i++){
for (int j=i+1;j<cont;j++){	
if(strcmp(vec[j].nombre,vec[i].nombre)==-1){
aux = vec[j];
vec[j] = vec[i];
vec[i] = aux;
}		
}
}

pun3=fopen("productos.txt","w");
for(int cont3=0;cont3<cont;cont3++){
fwrite(&vec[cont3],sizeof(vec[cont3]),1,pun3);		
}
cout<<"inventario ordenado ingrese nuevamente a la opcion 2 para verificar "<<endl;

fclose(pun3);
fclose(pun2);
fclose(pun);
	
}


