/*18. Leer tres cadenas de caracteres correspondientes, respectivamente, al nombre y los dos apellidos de
una persona y crear un nuevo vector que contenga: apellido 1 apellido2, inicial.*/

#include<stdio.h>
#include<string.h>
using namespace std;

int main(){
	char nombre[]=" brayan";
	char apellido1[]="sanchez";
	char apellido[]=" perez";
	char todo[100]="";
	
	strcat(todo,apellido1);
	strcat(todo,apellido);
	strcat(todo,nombre);
	
	printf("%s",todo);
	

	
	return 0;
}

