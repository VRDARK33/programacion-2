/*27. Leer dos matrices 4x5 enteras y determinar si la cantidad
 de números primos almacenados en una matriz es igual a la cantidad de números primos almacenados en la otra matriz. */

#include<stdio.h>
#include<cstdlib>
#include<time.h>



class matriz{
	private:
		int matriz1[4][5];
		int matriz2[4][5];
		int cont1=0;
		int cont2=0;
		int cPrimo1=0;
		int cPrimo2=0;

	
	public:
	
		void cargar();
		void primos();
		void comparacion();
		
};

int main(){
	srand(time(NULL));
	matriz m1;
	m1.cargar();
	m1.primos();
	m1.comparacion();
	
	return 0;
}

void matriz::cargar(){
	printf("matriz 1\n");
	for(int fila=0;fila<4;fila++){
		for (int columna=0;columna<5;columna++){
			matriz1[fila][columna] = (rand()%100);
			printf("%d ",matriz1[fila][columna]);
			
		}
		printf("\n");	
	}
	
	printf("\n");
	printf("matriz 2\n");
	for(int fila=0;fila<4;fila++){
		for (int columna=0;columna<5;columna++){
			matriz2[fila][columna] = (rand()%100);
			printf("%d ",matriz2[fila][columna]);	
		}
		printf("\n");
	}
	printf("\n");
}


void matriz::primos(){
		for(int fila=0;fila<4;fila++){
		for (int columna=0;columna<5;columna++){
			cont1 = 0;
			cont2 = 0;
			for(int x=1;x<=matriz1[fila][columna];x++){
				if(matriz1[fila][columna]%x==0){
					cont1++;
				
				}
				if(cont1==2){
						cPrimo1++;
					}
					
			
			}
			
			for(int x=1;x<=matriz2[fila][columna];x++){
				if(matriz2[fila][columna]%x==0){
					cont2++;
				}
				if(cont2==2){
						cPrimo2++;
					}
				
			}
			
		}
	}
}

void matriz::comparacion(){
	
	if(cPrimo1==cPrimo2){
		printf("la cantidad de numeros primos es igual matriz1  matriz2 ");
	}else if(cPrimo1>cPrimo2){
		printf("tiene mas numeros primos la matriz1  que la matriz2 ");
	}else{
		printf("tiene mas numeros primos la matriz2  que la matriz1 ");
	}
}

