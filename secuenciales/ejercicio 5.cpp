/*5-.Descripcion: De un art�culo se conoce: 
     - referencia 
     - Nombre del art�culo
     - valor unitario 
     - unidades disponibles
     Se pide calcular el valor total del articulo (con IVA incluido)
*/

#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	char Referencia [10], NombreDelArticulo [10];
	float Vunitario, Udisponibles;
	
	printf("ingrese la referencia del producto: ");
	cin.getline(Referencia,10,'\n');
	printf("ingrese el nombre del producto: ");
	cin.getline(NombreDelArticulo,10,'\n');
	printf("ingrese el valor unitario: ");
	scanf("%f",&Vunitario);
	printf("ingrese la cantidad de unidades : ");
	scanf("%f",&Udisponibles);
	
	Vunitario += Vunitario * .19;
	
	printf("el valor unitario del producto con iva del 19 incluido es de: %.2f",Vunitario);
	
		
	return 0; 
}

