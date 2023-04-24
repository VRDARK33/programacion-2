/*los siguientes programas se realizaron en la 
ver 5.11 de c++ brayan andres sanchez.*/
/* 1. calcular suma y mostrar la suma, resta, multiplicacion, divisioon y potencia */


#include<iostream>
#include<math.h>
using namespace std; 

int main(){
	int n1, n2, suma= 0, resta= 0, multi = 0;
	float divi = 0;
	
	cout<<"ingrese el primer numereo";cin>>n1;
	cout<<"ingrese el segundo numereo";cin>>n2;
	
	suma = n1 + n2;
	resta = n1 - n2;
	multi = n1 * n2;
	divi = n1 / n2; 
	double potencia1 = (n1, n2);
	double potencia2 = (n2,n1);
	
	cout<<"el valor de la sumna es "<<suma<< "\n";
	cout<<"el valor de la resta es "<<resta<<"\n";
	cout<<"el valor de la multiplicacion es"<<multi<<"\n";
	cout<<"el valor de la division"<<divi<<"\n";
	cout<<"el valor de la potencia 1"<<potencia1<<"\n";
	cout<<"el valor de la potencia 2"<<potencia2<<"\n";
	
	
	
	return 0;
}  
