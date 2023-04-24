/* 1. calcular suma y mostrar la suma, resta, multiplicacion, divisioon y potencia */

#include<iostream>
#include<math.h>
using namespace std;

int suma(int a, int b){
	return a+b;}


int resta(int a, int b){
	return a-b;}


int multi(int a, int b){
	return a*b;}


int divi(int a, int b){
	return a/b;}


int pot(int a, int b){
	return pow(a,b);}

int main(){
	int n1, n2;
	
	cout<<"ingrese el primer numereo";cin>>n1;
	cout<<"ingrese el segundo numereo";cin>>n2;
	
	cout<<"el valor de la sumna es "<<suma(n1,n2)<< "\n";
	cout<<"el valor de la resta es "<<resta(n1,n2)<<"\n";
	cout<<"el valor de la multiplicacion es"<<multi(n1,n2)<<"\n";
	cout<<"el valor de la division"<<divi(n1,n2)<<"\n";
	cout<<"el valor de la potencia"<<pot(n1,n2)<<"\n";
		
}

