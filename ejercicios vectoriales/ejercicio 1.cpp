/*19. Leer 10 números enteros, almacenarlos en un vector y determinar cuántos de los números almacenados en 
dicho vector pertenecen a los 100 primeros elementos de la serie de Fibonacci. 
*/

#include<stdio.h>
#include<math.h>

class vector{
	
	private:
		int num[10];
		int fib[100];
		
	public:
		void cargar();
		void fibo();
		void comparacion();
		
};

void vector::cargar(){
	for(int i=0;i<10;i++){
		printf("ingresar el valor #%d: ",i+1);scanf(" %d",&num[i]);
	}
}

void vector::fibo(){
	int res = 0,x=0,y=1;
	for(int i=0;i<100;i++){
		res =res = x + y;
		x=y;
		fib[i]=res;
		y=res;
	}	
}

void vector::comparacion(){
	int c=0;
	for(int i=0;i<100;i++){
		if(num[i]==fib[i]){
			c++;
		}
	}
	printf("hay %d numeros que pertenecen a la serie de fibonachi en este vector",c);
}

int main(){
	vector v1;
	v1.cargar();
	v1.fibo();
	v1.comparacion();
	return 0;
}

