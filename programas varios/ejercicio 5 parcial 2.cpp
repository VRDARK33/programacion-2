/*ejercicio 5 del parcial realizado por brayan andres sanchez
ver 5.11 c++ 17/10/2022
5-. Implementar un programa recursivo que lea una secuencia de caracteres de longitud arbitraria terminada en un punto, y 
la imprima en orden inverso. El procedimiento no tiene parámetros. Sin usar vectores, ni arreglos de TIPO char.*/
#include <algorithm>
#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;


void invertir(string &str,int k);



int main(){
	string str;
	printf("Ingrese la frase que desea invertir:");
	cin>>str;
	printf("\nLa frase es:");
	cout<<str<<endl<<endl;
	invertir(str,0);
	printf("La frase inversa es:");
	cout<<str<<endl<<endl;
	system("pause");
	return 0;
}


void invertir(string &str,int k){
static int i=0;
if (k==str.length()) {
return;
}
invertir(str,k+1);
if(i<=k){
swap(str[i++],str[k]);
}
}
