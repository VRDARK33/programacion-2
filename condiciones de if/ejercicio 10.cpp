/*20. En la empresa transportadora "VIAJE SEGURO "  se presentan muchos choques de sus vehículos por lo que decidieron afiliarse a un seguro.  
Después de muchas conversaciones con la aseguradora "TRANQUILO", 
llegaron a ciertos acuerdos: Después de ver las estadísticas, se dieron cuenta que los choques cumplen ciertas características similares por lo que los dividieron en tres clases: 
1)El costo del arreglo es de hasta $500. 
2)El costo del arreglo está entre $500 y $2000. 
3)El costo es mayor de $2000. Para cada clase se decidió lo siguiente: 
Si es un choque del tipo 1, la empresa paga 410 y el resto lo debe pagar el conductor. 
Si el choque es del tipo 2, la empresa paga 500, la aseguradora el 80% del saldo y el conductor el resto. 
Y por último, si el choque es del tipo 3, la empresa debe pagar 100, la aseguradora el 75% del saldo y el conductor debe pagar lo que falta en cinco cuotas, 
por ejemplo si el costo del arreglo es de 3100 para cada parte queda así: EMPRESA 100 ASEGURADORA  2250 CONDUCTOR 150 150 150 150 150 
Hay que realizar el programa para que dado un costo del arreglo, decir cuánto debe pagar la empresa, la aseguradora y el conductor. */

#include<stdio.h>
using namespace std;

int main(){
	int x, valor,empresa,conductor,seguro;
	
	printf("que costo es el arreglo: \n");
	printf("1)El costo del arreglo es de hasta $500. \n");
	printf("2)El costo del arreglo está entre $500 y $2000. \n");
	printf("3)El costo es mayor de $2000. \n");
	scanf("%d",&x);
	
	printf("ingrese el costo del arreglo \n");
	scanf("%d",&valor);
	
	
	
	switch(x){
		case 1: if(valor <= 500){
			empresa = 410; conductor = valor - empresa;
		printf("el valor que paga la empresa es de 410, y el conductor paga %d",conductor); 
		}else{
			printf("monto superior :(");
		}
		
		break;
		
		case 2: if(valor > 500 && valor <= 2000){
			empresa = 500; seguro = (valor-empresa) *.80; conductor = (valor-empresa) - seguro;
		printf("el valor que paga la empresa es de 500 el de la aseguradora es de %d, y el conductor paga %d",seguro,conductor);	
		}else{
			printf("monto superior :(");
		}
		
		break;
		
		case 3: if(valor > 2000){
			empresa = 100; seguro = (valor-empresa) *.75; conductor = ((valor-empresa) - seguro)/5;
		printf("el valor que paga la empresa es de 100 el de la aseguradora es de %d, y el conductor paga 5 cuotas de %d",seguro,conductor);	
		}else{
			printf("monto superior :(");
		}
		
		break;
	}
	
	
	return 0; 
}

