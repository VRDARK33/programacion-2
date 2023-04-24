/*los siguientes ejercicios de matrices se realizaron en la 
ver 5.11 de c++ brayan andres sanchez.
19-09-2022

26. Leer dos matrices 4x5 enteras y determinar si la cantidad 
de números pares almacenados en una matriz es igual a la cantidad de números 
pares almacenados en la otra matriz*/

#include<stdio.h>
#include<cstdlib>
#include<time.h>



class matriz{
	private:
		int matriz1[4][5];
		int matriz2[4][5];
		int modulo1;
		int modulo2;
		int par1=0;
		int par2=0;
	
	public:
	
		void cargar();
		void pares();
		void comparacion();
		
};

int main(){
	srand(time(NULL));
	matriz m1;
	m1.cargar();
	m1.pares();
	m1.comparacion();
	
	return 0;
}

void matriz::cargar(){
	
	for(int fila=0;fila<4;fila++){
		for (int columna=0;columna<5;columna++){
			matriz1[fila][columna] = (rand()%100);
			printf("%d ",matriz1[fila][columna]);
			
		}
		printf("\n");	
	}
	
	printf("\n");
	
	for(int fila=0;fila<4;fila++){
		for (int columna=0;columna<5;columna++){
			matriz2[fila][columna] = (rand()%100);
			printf("%d ",matriz2[fila][columna]);	
		}
		printf("\n");
	}
	printf("\n");
}


void matriz::pares(){
		for(int fila=0;fila<4;fila++){
		for (int columna=0;columna<5;columna++){
			modulo1= matriz1[fila][columna] %10;
			modulo2= matriz2[fila][columna] %10;
			
			if((modulo1==0)||(modulo1==2)||(modulo1==4)||(modulo1==6)||(modulo1==8)){
				par1++;
			}
			if((modulo2==0)||(modulo2==2)||(modulo2==4)||(modulo2==6)||(modulo2==8)){
				par2++;
			}
		}
	}
}

void matriz::comparacion(){
	
	if(par1==par2){
		printf("la cantidad de numeros pares es igual matriz1 %d matriz2 %d",par1,par2);
	}else if(par1>par2){
		printf("tiene mas numeros pares la matriz 1 %d que la matriz 2 %d",par1,par2);
	}else{
		printf("tiene mas numeros pares la matriz 2 %d que la matriz 1 %d",par2,par1);
	}
}
