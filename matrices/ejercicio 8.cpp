/*50. Leer una matriz 5x5 y determinar si el promedio de los elementos que se encuentran en su
diagonal está almacenado en ella. Mostrar en pantalla en qué posiciones exactas se encuentra
dicho dato.*/

#include<stdio.h>
#include<stdlib.h>
#include<cstdlib>
#include<time.h>



class matriz{
	private:
		int matriz1[5][5];
		int suma=0;
		int prom;



	
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

	
}

void matriz::promedio(){
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if(i==j){
				suma += matriz1[i][j];
			}
		}
	}
	
	prom= suma/5;
	
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if(prom==matriz1[i][j]){
				printf("el promedio %d se encuentra en la posicion %d %d",prom,i+1,j+1);
			}else{
				printf("no se encuentra el proemdio %d en la matriz",prom);abort();
			}
		}
	}
	
	

}


