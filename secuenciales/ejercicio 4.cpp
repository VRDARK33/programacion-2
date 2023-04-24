/*6-. Descripción: De un trabajador se conoce su nombre, cargo, sueldo básico mensual 
se pide calcular y  mostrar el aporte a SALUD, pensión y el neto a pagar.
                salud -> 4%	     Pensión -> 3.375% 
*/

#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
	char nombre[30],cargo[30];
	float SueldoBasicoM = 0, AporteSalud = 0, Pension = 0,NetoaPagar;
	
	printf("ingrese el nombre: ");
	cin.getline(nombre,30,'\n');
	printf("ingrese el cargo: ");
	cin.getline(cargo,30,'\n');
	printf("ingrese el sueldo basico: ");
	scanf("%f",&SueldoBasicoM);
	
	AporteSalud = SueldoBasicoM * 0.04;
	Pension = SueldoBasicoM * 0.03375;
	NetoaPagar =  SueldoBasicoM + AporteSalud + Pension;
	
	printf("aporte a salud: %.2f\n",AporteSalud);
	printf("aporte a pension %.2f\n",Pension);
	printf("valor neto: %.2f",NetoaPagar);
	
	
	return 0;
}


