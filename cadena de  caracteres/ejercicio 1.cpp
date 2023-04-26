/*progrmas sobre cadenas de caracteres 
ver de c++ 5.11 realizados por brayan andres sanchez perez
05/09/2020

1. Escribir un programa que lea una frase caracteres a car�cter utilizando scanf. */

#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int x;
	char b[100],y;
	
	printf("ingrese el tama�o de la frase: \n");scanf("%d",&x);
	
	for(int i=0;i<=x;i++){	
		scanf("%c",&y);
		b[i] = y;
		fflush(stdin);
	}
	
	cout<<b<<endl;
	
	return 0; 
}
