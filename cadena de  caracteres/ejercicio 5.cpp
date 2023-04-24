/*17. Leer el nombre y los dos apellidos de una persona (en tres cadenas de caracteres diferentes) y unirlo*/
en una única cadena. 


#include<stdio.h>
#include<string.h>
using namespace std;

int main(){
	char nombre[]="brayan";
	char  apellido1[]=" sanchez ";
	char apellido2[]="perez ";
	
	strcat(nombre,apellido1);
	strcat(nombre,apellido2);
	
	printf("%s ",nombre);
	

	
	return 0;
}

