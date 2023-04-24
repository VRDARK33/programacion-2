/*Haz un programa que lea un fichero “fichero.txt” y
escriba en otro fichero “FICHERO2.TXT” el contenido del
fichero de entrada con todas las letras en mayúsculas.
ver c++ 5.11 realaizado por brayan andres sanchez perez */

//librerias usadas
#include <iostream>
#include <fstream>
#include <string.h>
#include <conio.h>
#include <ctype.h>
using namespace std;

string t;

void textoMin(void);
void textoMa(void);

int main(){
	
	textoMin();
	textoMa();
	getch();
	return 0;
}

void textoMin(void){
	ofstream archivo;

	
	archivo.open("fichero.txt",ios::out);
	
	if(archivo.fail()){
		cout<<"no se creo el archivo";
		exit(1);
	}
	
	cout<<"escriba una frase para el fichero: ";
	getline(cin,t);
	
	archivo<<t;
	
	archivo.close();
	
}

void textoMa(void){
	ofstream archivo;
	
	archivo.open("fichero2.txt",ios::out);
	
	if(archivo.fail()){
		cout<<"no se creo el archivo";
		exit(1);
	}
	for(int i=0;i<t.length();i++){
		t[i] = toupper(t[i]);
	}
	archivo<<t;
	
	archivo.close();
	
}
