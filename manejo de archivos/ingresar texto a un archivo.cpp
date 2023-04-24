#include<iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;


void escribir();


int main(){
	escribir();
	system("pause");
	return 0;
}

void escribir(){
	ofstream archivo;
	string nombreArchivo;
	
	cout<<"ingrese e lnombre del archivo";
	getline(cin,nombreArchivo);
	archivo.open(nombreArchivo.c_str(),ios::out);
	
	if(archivo.fail()){
		cout<<"que no se puede crear el archivo y no moleste tanto";
		exit(1);
	}
	
	archivo<<"todo bien y todo correcto :)";
	archivo.close();
}

