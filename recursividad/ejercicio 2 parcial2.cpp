/*ejercicio 2 del parcial realizado por brayan andres sanchez
ver 5.11 c++ 17/10/2022
2-. Implementar un programa recursivo que devuelva true si el número que se le pasa a una función 
como parámetro es primo y false en caso contrario. */

#include<iostream>
using namespace std;

bool primo(int num,int div);

int main(){
	int numero;
	cout<<"ingrese el numero para determiar si es primo: ";
	cin>>numero;
	primo(numero,2);
	
	return 0;
}

bool primo(int num,int div){
	if(div> num/2){
		cout<<"es primo";
	}else{
		if(num % div == 0){
			cout<<"no es primo";
		}else{
			return primo(num,div+1);
		}
	}
}




