/*24. Leer 10 números enteros, almacenarlos en un vector y 
determinar cuántos números terminar en dígito primo. */

#include<stdio.h>


class vector{
	
	private:
		int num[10];
		
	public:
		void cargar();
		void primo();
		
};

void vector::cargar(){
	for(int i=0;i<10;i++){
		printf("ingresar el valor #%d: ",i+1);scanf(" %d",&num[i]);
	}
}

void vector::primo(){
	int res = 0,c=0;
	for(int i=0;i<10;i++){
		res = num[i] % 10;
		if((res==2)||(res==3)||(res==5)||(res==7)){
			c++;
		}
	}
	printf("%d numeros del vector terminan con digito primo ",c);
}

int main(){
	vector v1;
	v1.cargar();
	v1.primo();
	return 0;
}

