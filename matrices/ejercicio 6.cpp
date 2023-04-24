/*39. Leer dos matrices 4x6 enteras y determinar si el promedio de las “esquinas” de una matriz
es igual al promedio de las “esquinas” de la otra matriz.
*/

#include<stdio.h>
#include<cstdlib>
#include<time.h>



class matriz{
	private:
		int matriz1[4][6];
		int matriz2[4][6];
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
	for(int fila=0;fila<4;fila++){
		for (int columna=0;columna<6;columna++){
			matriz1[fila][columna] = (rand()%100);
			printf("%d ",matriz1[fila][columna]);
			
		}
		printf("\n");	
	}
	printf("\n");
	
	printf("matriz 2\n");
	for(int fila=0;fila<4;fila++){
		for (int columna=0;columna<6;columna++){
			matriz2[fila][columna] = (rand()%100);
			printf("%d ",matriz2[fila][columna]);
			
		}
		printf("\n");	
	}
	printf("\n");
	
}

void matriz::promedio(){
	for(int i=0;i<4;i++){
		for(int j=0;j<6;j++){
			if((i==0&&j==0)||(i==0&&j==5)||(i==3&&j==0)||(i==3&&j==5)){
				suma += matriz1[i][j];
			}
		}
	}
	
	prom= suma / 4;
	
	for(int i=0;i<4;i++){
		for(int j=0;j<6;j++){
			if((i==0&&j==0)||(i==0&&j==5)||(i==3&&j==0)||(i==3&&j==5)){
				suma2 += matriz2[i][j];
			}
		}
	}
	
	prom2 = suma2 / 4;
	
	if(prom==prom2){
		printf("los promedios de las esquinas son iguales %d %d",prom,prom2);
	}else{
		printf("los promedios de las esquinas no son iguales %d %d",prom,prom2);
	}
}

