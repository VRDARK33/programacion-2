/* 2. crear un programa que Dado el radio de una circunferencia se pide calcular e imprimir su área */

#include<iostream>
#include<math.h>

using namespace std;


float area(float a){
	float ar; 
	return ar= 3.14 * pow(a,2);
}

int main(){
	float r; 
	
	cout<<"ingrese el valor de el radio";cin>>r;
	cout<<"el valor de el area es "<<area(r)<< "\n";
}

