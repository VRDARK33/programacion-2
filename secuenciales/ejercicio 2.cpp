8</*-. Descripción: 10.De un estudiante se conoce los siguientes datos:
    - Código     - Nombre   - Nota 1   - Nota 2    - Nota 3 
    Calcular y mostrar su promedio*/


#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int codigo;
	char nombre[30];
	float N1,N2,N3,promedio = 3, definitiva;
	
	printf("ingrese su codigo: ");
	scanf("%d",&codigo);
	fflush(stdin);
	printf("ingrese su nombre: ");
	cin.getline(nombre,30,'\n');
	printf("ingrese sus 3 notas: ");
	scanf("%f %f %f",&N1,&N2,&N3);
	
	definitiva = (N1+N2+N3)/promedio;
	
	printf("su nota definitiva es de: %.1f",definitiva);
	
	
	return 0;
}


