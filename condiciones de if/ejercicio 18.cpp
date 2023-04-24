#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	float n;
	
	cout<<"ingrese un valor real positivo: ";
	cin>>n;
	
	if(n == 10){
		cout<<"matricula de honor";
	}else if (n>=9 && n<10){
		cout<<"sobresaliente";
	}else if (n>=7 && n<9){
		cout<<"notable";
	}else if (n>=6 && n<7){
		cout<<"aprobado";
	}else if (n>=0 && n<5){
		cout<<"perdio";
	}else{
		cout<<"error";
	}
	
	return 0;
}
