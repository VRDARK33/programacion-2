/*49. Leer una matriz 3x3 entera y determinar si el promedio de todos los datos almacenados en
ella se encuentra también almacenado.*/

#include<stdlib.h>
#include<stdio.h>
#include<cstdlib>
#include<time.h>



class matriz{
	private:
		int matriz1[3][3];

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
	for(int fila=0;fila<3;fila++){
		for (int columna=0;columna<3;columna++){
			matriz1[fila][columna] = (rand()%100);
			printf("%d ",matriz1[fila][columna]);
			
		}
		printf("\n");	
	}
	printf("\n");
	

	
}

void matriz::promedio(){
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
				suma += matriz1[i][j];
			
		}
	}
	
	prom= suma / 9;
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(prom==matriz1[i][j]){
				printf("el promedio %d se encuentra en la matriz en las cordenadas %d%d ",prom,i+1,j+1);
				break;
			}else{
				printf("el promedio %d no se encuentra en la matriz",prom); abort();
			}
			
		}
	}



}


