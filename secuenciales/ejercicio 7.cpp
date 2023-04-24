/* 2. crear un programa que Dado el radio de una circunferencia se pide calcular e imprimir su área */

#include<iostream>
#include<cmath>

using namespace std;
using std:: pow;

int main(){
	float r = 0, area; 
	
	cout<<"ingrese el valor de el radio";cin>>r;
	
	area = M_PI * pow(r, 2);
	
		cout<<"el valor de la sumna es "<<area<< "\n";
	
	
	
	
	
	
	
	return 0; 
}

