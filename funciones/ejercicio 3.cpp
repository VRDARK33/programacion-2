

/*1. leer un numero entero y diga:  si es positivo, negativo o cero.
  si es par o impar */
  
#include<iostream>
using namespace std;

int numero(int ab){
	if(ab == 0 ){
	cout<<"\n el numero es cero "<<ab<<endl;
	}else if(ab > 0){
	cout<< "\n el numero es positivo "<<ab<<endl;
	}else if(ab < 0){
	cout<< "\n el numero es negativo "<<ab<<endl;
	}
}

int imp (int p){
	int pr;
	pr = p % 2;
	if(pr == 0){
		cout<< "\n el numero es par "<<endl;
	}else{
	cout<< "\n el numero no es par "<<endl;
	}
}

int main(){
	int n1;
	cout<< "ingrese un numero entero positivo o negativo "; cin>>n1;
	
	numero(n1);
	imp(n1);


	
}
