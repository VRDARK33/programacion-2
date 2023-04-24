/*7-. Descripción: Se pide liquidar el valor de horas extras diurnas teniendo en cuenta lo siguiente
    - Valor de la hora trabajada  
    - Número de horas trabajadas durante el mes
    Debe tener en cuenta que las horas extras diurnas tienen un recargo del 35% 
    del valor de la hora trabajada */


#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int liquidacion,ValorHora = 1800,ValorHoraExtras = 630 ,NumHoraTrabajada,HoraExtras,horas;
	int valorH, valorHE;
	printf("ingrese las horas trabajadas: ");
	scanf("%d",&horas);
	printf("ingrese las horas extras trabajadas: ");
	scanf("%d",&HoraExtras);
	
	valorH = ValorHora * horas;
	valorHE = ValorHoraExtras * HoraExtras;
	liquidacion = valorH + valorHE;
	
	printf("su liquidacion es de: %d",liquidacion);
	
	
	
	return 0;
}


