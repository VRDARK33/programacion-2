
/*11. Leer un número entero X y : 
a)     Decir si es positivo o negativo. 
b)     Decir si es par o impar. 
c)     Leer otro número Y y decir si X es múltiplo de y.
*/

#include<stdio.h>


int main(){
	int x, y;
	
	printf("ingrese un valor entero: "); scanf("%d",&x);
	
	printf(x>0?"es un numero positivo\n":"es un numero negativo\n");
	printf((x%2 ==0)?"es par\n":"es impar\n");
	printf("ingrese otro valor: "); scanf("%d",&y);
	printf((x%y ==0)?"x es multiplo de y\n":"no es multiplo\n");
	
	
	
	
	return 0;
}


