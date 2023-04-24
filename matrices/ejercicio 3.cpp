/*28. Leer una matriz 4x6 entera y determinar en qué posiciones se encuentran los números cuyo penúltimo dígito sea el 5.*/

#include<stdio.h>
#include<cstdlib>
#include<time.h>



class matriz{
	private:
		int matriz1[4][6];
		int res;
		int t;


	
	public:
		void cargar();
		void penultimoDigito();

		
};

int main(){
	srand(time(NULL));
	matriz m1;
	m1.cargar();
	m1.penultimoDigito();

	
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
	
}

void matriz::penultimoDigito(){
	int x,y;
	for(int i=0;i<4;i++){
		for(int j=0;j<6;j++){
			if(matriz1[i][j]==5){
				printf("cordenadas %d%d\n",i+1,j+1);
				printf("numero %d\n",matriz1[i][j]);
			}else if(res=matriz1[i][j]%10!=5){
				t=matriz1[i][j];
				res=matriz1[i][j]/10;
				matriz1[i][j]=res;
				res=matriz1[i][j]%10;
				if(res==5){
					printf("cordenadas %d%d\n",i+1,j+1);
					printf("numero %d\n",t);
				}
				
			}
		
		}
	}
}


