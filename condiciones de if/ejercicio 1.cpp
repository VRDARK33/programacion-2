/*ejercicio de los tipos de condicionales
ver5.11 de c++ realizados por brayan andres sanchez 22/08/2022

Haga un programa que:

1. Lea un entero y diga:
? Si es positivo, negativo o cero.
? Si es par o impar. 
*/

#include<iostream>
using namespace std;


int main(){
	int x;
	
	cout<<"ingrese el valor de x"<<endl;
	cin>>x;
	
	(x>0)?cout<<"es positivo"<<endl:(x<0)?cout<<"es negativo"<<endl :cout<<"es 0"<<endl;
	x=x%2;
	
	if(x== 0){
		cout<<"es par";
	}else{
		cout<<"es impar";
	}
	
	return 0;
}

