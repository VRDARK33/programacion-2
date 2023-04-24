/*9-. Descripción: Convertir a pesos Colombianos y a Dólares un valor dado en Euros*/

#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int euros, dolares, Pcolombiano;
	
	printf("ingrese su valor en euros: ");
	scanf("%d",&euros);
	
	dolares = euros * 1;
	Pcolombiano = euros * 4276;
	
	printf("la conversion en dolares es: %d\n",dolares);
	printf("la conversion en pesos colombianos es: %d",Pcolombiano);
	
	return 0;
}

