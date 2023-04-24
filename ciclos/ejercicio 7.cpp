/*19. Leer un número entero y determinar si es primo.*/

#include<iostream>
using namespace std;

int main(){
	int x=1,numero,contador=0;
	cout<<"ingrese un numero"<<endl;
	cin>>numero;
	
	for(x;x<=numero;x++){
		if(numero%x==0){
			contador++;
		}
	}
	
	if(contador==2){
		cout<<"numero primo";
	}else{
		cout<<"no es primo";
	}
	
	return 0;
}


