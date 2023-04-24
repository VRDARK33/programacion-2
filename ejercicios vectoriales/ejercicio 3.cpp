/*12. Leer 10 números enteros, almacenarlos en un vector y 
determinar a cuántos es igual el cuadrado de cada uno de los números leídos.*/

#include<stdio.h>
#include<math.h>

class vector{
	
	private:
		int num[10];
		
	public:
		void cargar();
		void cuadrado();
		
};

void vector::cargar(){
	for(int i=0;i<10;i++){
		printf("ingresar el valor #%d: ",i);scanf(" %d",&num[i]);
	}
}

void vector::cuadrado(){
	for(int i=0;i<10;i++){
		num[i] = pow(num[i],2);
		printf("%d ",num[i]);
	}
}

int main(){
	vector v1;
	v1.cargar();
	v1.cuadrado();
	return 0;
}

