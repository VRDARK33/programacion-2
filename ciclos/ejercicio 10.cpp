/*ejercicios de ciclos propuestos por caoz
ver 5.11 c++ realizados por brayan andres sanchez
29/08/2022


1. Leer un número entero y mostrar todos los enteros comprendidos entre 1 y el número leído.
#include<iostream>
using namespace std;*/

int main(){
	int x;
	
	printf("ingrese un numero entero mayor que 0: ");
	scanf("%d",&x);
	
	for(int i=1;i<=x;i++){
		printf("%d ",i);
	}
		
	return 0;
}

