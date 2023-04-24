/*Crear una matriz de 3x4. Realizar la carga y luego imprimir el elemento mayor. */

#include<stdio.h>
#include<cstdlib>
#include<time.h>

class matriz{
	private:
		int matriz1[3][4];
		int may=0;
	public:
		void cargar();
		void imprimir();
		void imprimirMayor();
		
};

int main(){
	srand(time(NULL));
	matriz v;
	v.cargar();
	v.imprimir();
	v.imprimirMayor();
	
	return 0;
}

void matriz::cargar(){
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			matriz1[i][j]= (rand()%100);
		}
		
	}
	printf("\n");
}

void matriz::imprimir(){
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			printf("%d ",matriz1[i][j]);
		}
	    printf("\n");
	}
	printf("\n");
}

void matriz::imprimirMayor(){
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			if(may<matriz1[i][j]){
				may=matriz1[i][j];
			}
		}
	}
	printf("el numero mayor de la matriz es: %d",may);
}


