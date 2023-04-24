/*41. Leer dos matrices 5x5 enteras y determinar si el promedio entero de todos los elementos
que no están en la diagonal de una matriz es igual al promedio entero de todos los elementos*/


#include<stdio.h>
#include<cstdlib>
#include<time.h>



class matriz{
	private:
		int matriz1[5][5];
		int matriz2[5][5];
		int suma=0;
		int prom;
		int suma2=0;
		int prom2;


	
	public:
		void cargar();
		void promedio();


		
};

int main(){
	srand(time(NULL));
	matriz m1;
	m1.cargar();
	m1.promedio();

	
	return 0;
}

void matriz::cargar(){
	printf("matriz 1\n");
	for(int fila=0;fila<5;fila++){
		for (int columna=0;columna<5;columna++){
			matriz1[fila][columna] = (rand()%100);
			printf("%d ",matriz1[fila][columna]);
			
		}
		printf("\n");	
	}
	printf("\n");
	
	printf("matriz 2\n");
	for(int fila=0;fila<5;fila++){
		for (int columna=0;columna<5;columna++){
			matriz2[fila][columna] = (rand()%100);
			printf("%d ",matriz2[fila][columna]);
			
		}
		printf("\n");	
	}
	printf("\n");
	
}

void matriz::promedio(){
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if(i!=j){
				suma += matriz1[i][j];
			}
		}
	}
	
	prom= suma / 20;
	
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if(i!=j){
				suma2 += matriz2[i][j];
			}
		}
	}
	
	prom2 = suma2 / 20;
	
	if(prom==prom2){
		printf("los promedios de las componentes que no pertencen a la diagonal son iguales %d %d",prom,prom2);
	}else{
		printf("los promedios de las componentes que no peretenecen a la diagonal no son iguales %d %d",prom,prom2);
	}
}


