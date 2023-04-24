/*4-. Que muestre un menú donde las opciones sean 
"Equilátero", "Isósceles" y "Escaleno", pida una opción 
y calcule el perímetro del triángulo seleccionado, solicitando los datos respectivos.*/

#include<iostream>
using namespace std;


int main(){
	int x,a,b,c,resultado;
	
	cout<<"elegir un triagnulo para calcular su perimetero"<<endl;
	cout<<"1)equilatero"<<endl;
	cout<<"2)isoceles"<<endl;
	cout<<"3)escaleno"<<endl;
	cin>>x;
	
	cout<<"ingrese las medidas del triangulo "<<endl;
	cin>>a>>b>>c;
	
	switch(x){
		case 1:resultado = 3 * a; cout<<"el perimetro del equilatero es: "<<resultado; break;
		case 2:resultado = a+b+c; cout<<"el perimetro del isoceles es: "<<resultado; break;
		case 3:resultado = a+b+c; cout<<"el perimetro del escaleno es: "<<resultado; break;
		default : cout<<"seleccion no valida";
	}
	
	
	
	return 0;

}


