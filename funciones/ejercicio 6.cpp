/* 7. Mostrar en pantalla todos los enteros comprendidos entre 1 y 100.
brayan andres sanchez */


#include<iostream>

using namespace std;

int enteros(int a){
	while(a < 100){
	a= a + 1;
	cout<<a<<" ";}
}

int main (){
	int n = 0;
	
	enteros(n);
	
	return 0;
}
