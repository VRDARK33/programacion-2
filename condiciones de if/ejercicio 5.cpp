/*5. Una empresa de préstamos decidió cambiar su esquema de cobros así: ? 
       Si el préstamo es de más de 5000, cobra en tres cuotas. ?  
	   Si el préstamo es de menos de 1000, cobra en una cuota. ?
	   Si el préstamo es entre 2000 y 3000 cobra en dos cuotas. ?       
	   En los demás casos cobra en cinco cuotas. ?
	   Adicionalmente, si es de menos de 4000 cobra 12% de interés, 
	   en caso contrario cobra 10% de interés. 
	   El programa debe decir en cuantas cuotas debe pagar y 
	   de cuanto es cada cuota (calcule el valor total de la deuda con interés y divídalo en cuotas iguales). */
#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int prestamo,x,cuotas;
	
	cout<<"seleccione una de las opciones siguientes: "<<endl;
	cout<<"1)prestamo de 5000 o mayor."<<endl;
	cout<<"2)prestamo de 1000 o menor."<<endl;
	cout<<"3)prestamo de 2000 a 3000."<<endl;
	cout<<"4)otro valor. (entre 1000 a 2000 o 3000 a 5000)"<<endl;
	
	cin>>x;
	
	printf("ingrese el valor de su prestamo: "); scanf("%d",&prestamo);
	
	switch(x){
		case 1: cuotas =  (prestamo+(prestamo * .1)) / 3; printf("debe pagar su prestamo en 3 cuotas de: %d",cuotas); break;
		case 2: cuotas = prestamo * .12; printf("debe pagar su prestamo en 1 cuotas de: %d",cuotas); break;
		case 3: cuotas = (prestamo+(prestamo * .12)) / 2; printf("debe pagar su prestamo en 2 cuotas de: %d",cuotas); break;
		case 4: if(prestamo>1000 && prestamo<2000){
			cuotas = (prestamo+(prestamo * .12)) / 5; printf("debe pagar su prestamo en 5 cuotas de: %d",cuotas); break;
		}else if(prestamo>3000 && prestamo<5000){
			cuotas = (prestamo+(prestamo * .12)) / 5; printf("debe pagar su prestamo en 5 cuotas de: %d",cuotas); break;
		}else{
			printf("el valor no esta en el rango. :)");
		} break;
		
	}
	
	
	
	
	
	return 0;
}



