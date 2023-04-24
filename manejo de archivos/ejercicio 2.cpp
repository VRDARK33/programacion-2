/*
	Nombre: Ejercicio 2
	Autor: brayan andres sanchez
	Descripción:Haz un programa que lea dos ficheros de texto, “f1.txt” y
“f2.txt”, y escriba por pantalla las líneas que sean
distintas en cada fichero, con “< ” delante si la línea
corresponde a “f1.txt”, y “ >” si corresponde a “f2.txt”.
Ejemplo:
f1.txt f2.txt
hola, mundo.
como estamos?
adios, adios...
hola, mundo.
como vamos?
adios, adios...
La salida debe ser:
< como estamos?
> como vamos?
	*/
//Librerias
#include<stdio.h>
#include<fstream>
#include<string.h>
#include<iostream>
#include<ctype.h>
using namespace std;

ifstream p;
ifstream p2;
void comparacion();

int main (){
comparacion();
return 0;	
}
//compara linea por linea de cada archivo imprimiendo solo las diferentes
void comparacion(){
printf("Frases distintas entre los archivos:\n");
string frase;
string frase2;
bool condicion;
p.open("f1.txt", ios::app);
p2.open("f2.txt", ios::app);	
while(!p.eof() || !p2.eof()){
getline(p, frase);
getline(p2, frase2);
condicion = frase != frase2;
if(condicion){
cout<<"< "<<frase<<endl;
cout<<"> "<<frase2<<endl;
}
}
p.close();
p2.close();	
}
