/*ejercicio 1 del parcial realizado por brayan andres sanchez
ver 5.11 c++ 17/10/2022
1-. Implementar un programa recursivo que imprima los dígitos de un número natural n, leído por teclado y mayor de 10000, 
en orden inverso. Por ejemplo, para n=10000 la salida debería ser 00001. */


#include<iostream>
#include<math.h>
using namespace std;


int invertirNum(int num, int x);

int main(){
	int numero;
	cout<<"ingrese el numero que desea invertir: ";
	cin>>numero;
	invertirNum(numero,0);
	cout<<"el numero invertido es: "<<invertirNum(numero,0);
	return 0;
	
}

int invertirNum(int num, int x){
	 
	 if(num>0){
	 	return invertirNum(num/10, num%10+x*10);
	 }else{
	 	return x;
	 }
}
