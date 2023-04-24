/*1. Leer 10 números enteros, almacenarlos en un vector y 
calcularle el factorial a cada uno de los números leídos almacenándolos en otro vector. 
#include<stdio.h>*/


class vector{
	private:
		int num[10];
		int fac[10];
		
	public:
		void cargar();
		void factorial();
};

void vector::cargar(){
	
	for(int i=0;i<10;i++){
		printf("ingrese 10 valores enteros: ");
		scanf("%d",&num[i]);
	}
}

void vector::factorial(){
	int res=1,j;
	for(int i=0;i<10;i++){
		j = num[i];
		while(j>0){
			res *= j;
			j--;
		}
		fac[i]=res;
		printf("%d ",fac[i]);
		res=1;
		
	}
		
}


int main(){
	vector v1;
	v1.cargar();
	v1.factorial();
	return 0;
}

