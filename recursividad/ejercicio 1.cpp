/*//1. Calcular la potencia de un número: Ej: 5 3
=125 recursivamente. Sin el uso de la función pow*/

#include<iostream>
using namespace std;

class potencia{
	public:
		long po(long numero, long p);
};

int main(){
	long poten = 3;
	long num = 5;
	potencia *pot = new potencia();
	cout<<"la potencia de 5 es "<<pot->po(num,poten);
	delete pot;
	return 0;
}
long potencia::po(long numero, long p){
	if(p<=0){
		return 1;
	}else{
		return numero * po(numero,p-1);
	}
}

