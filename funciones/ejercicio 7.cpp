/*1. Leer un n�mero entero y mostrar todos los enteros comprendidos entre 1 y el n�mero le�do.
brayan andres sanchez 
c++*/

#include<iostream>

using namespace std;

int numero(int a, int b){
	while(b < a){
		b++;
		cout<<b<<" ";
	}
}

int main (){
	int n1, n2= 0;
	cout<<"ingrese un valor entero \n"; cin>>n1;
	numero(n1,n2);
 
	return 0;
}*/

/*14. Mostrar en pantalla los primeros 20 m�ltiplos de 3.
brayan andres sanchez 
c++


#include<iostream>

using namespace std; 

int multi(int a, int b, int c, int d){
	while(b <= d){
		c = a * b;
		b = b + 1;
		cout<<c<<" ";
	}
}
int main (){
	int n1=3, n2=1, n3, n4=20;
	
	multi(n1,n2,n3,n4);
	
 
	return 0;
}
