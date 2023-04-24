/*los siguientes ejercicios se realizan en la ver 5.11 de c++
brayan andres sanchez 23-09-2022


Crear una matriz de 4 filas y 5 columnas. 
Realizar la carga de componentes por columna (es decir primero ingresar toda la primera columna, 
luego la segunda columna y así sucesivamente) Imprimir luego la matriz. */


#include<stdio.h>

class matriz{
	private:
		int matriz1[4][5];
	
	public:
		void cargar();
		void imprimir();
};

int main(){
	matriz v;
	v.cargar();
	v.imprimir();
	
	return 0;
}

void matriz::cargar(){
	for(int j=0;j<5;j++){
		for(int i=0;i<4;i++){
			printf("ingrese las componentes [%d][%d]: ",j,i);
		    scanf("%d",&matriz1[j][i]);
		}
		
	}
	printf("\n");
}

void matriz::imprimir(){
	for(int j=0;j<5;j++){
		for(int i=0;i<4;i++){
			printf("%d ",matriz1[j][i]);
		}
	    printf("\n");
	}
}


