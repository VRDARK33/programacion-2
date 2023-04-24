/*los siguientes programas se realizaron en la 
ver 5.11 de c++ brayan andres sanchez.
19-09-2022*/

#include<stdio.h>
#include<cstdlib>
#include<time.h>
#define tam 100

class funciones{
	private:
		int elegir;
		int vector[tam];
		
	public:
		void cargar();
		void tipoDeArreglo();
		void busquedaBinaria();
};

int main(){
	srand(time(NULL));
	funciones r1;
	r1.cargar();
	r1.tipoDeArreglo();
	r1.busquedaBinaria();
	
	return 0;
}

//funcion encargada de llenar el vector de 100 eelementos aleatorios entre 0 y 100 
void funciones::cargar(){
	
	for(int i=0;i<tam;i++){
		vector[i] = (rand()%100);
	}
	//impresion del vector en desorden+
	printf("vector en desorden. \n");
	printf("\n");
	for(int i=0;i<tam;i++){
		printf("%d ",vector[i]);
	}
	printf("\n");
	printf("\n");
}
//funcion encarhada de elegir  y implementar el metodo de ordenamiento deseado por el usuario 
void funciones::tipoDeArreglo(){
	int aux,bandera=1,pos,min;
	
	printf("seleccione que tipo de arreglo desea usar: \n");
	printf("1) burbuja mejorado. \n");
	printf("2) insercion. \n");
	printf("3) seleccion \n");
	scanf("%d",&elegir);
	
	switch(elegir){
		//ordenamiento por burbuja mejorado
		case 1: for(int i=0; i<tam-1&&bandera==1; i++){
			bandera=0;
			for(int j=0; j<tam-i-1; j++){
				if(vector[j]<vector[j+1]){
					bandera =1;
					aux=vector[j];
					vector[j]=vector[j+1];
					vector[j+1]=aux;
				}
			}
		} break;
		//ordenamiento por insercion 
		case 2: for(int i=0;i<tam;i++){
			pos = i;
			aux = vector[i];
			
			while((pos>0)&&(vector[pos-1] > aux)){
				vector[pos] = vector[pos-1];
				pos--;
			}
			vector[pos] = aux;
		} break;
		//ordenamineto por seleccion 
		case 3: for(int i=0;i<tam;i++){
			min = i;
			for(int j = i+1;j<tam;j++){
				if(vector[j] < vector[min]){
					min = j;
				}
			}
			aux = vector[i];
			vector[i] = vector[min];
			vector[min] = aux;
		}
		
	}
	//impresion del vector ordenado de menor a mayor
	printf("vector en orden de menor a mayor. \n");
	printf("\n");
	for(int i=0;i<tam;i++){
		printf("%d ",vector[i]);
	}
	printf("\n");
	printf("\n");
	
}

void funciones::busquedaBinaria(){
	int inf,sup,mid,dato;
	char band = 'F';
	
	printf("que dato numerico desea buscar: ");scanf("%d",&dato);
	sup = tam;
	
	while(inf <= sup){
		mid = (inf+sup)/2;
		
		if(vector[mid]==dato){
			band = 'V';
			break;
		}
		if(vector[mid] > dato){
			sup = mid;
			mid = (inf+sup)/2;
		}
		if(vector[mid] < dato){
			inf = mid;
			mid = (inf+sup)/2;
		}
	}
	
	if(band =='V'){
		printf("el numero se encontro en la posicion %d.",mid);
	}else{
		printf("el numero no se encontro. ");
	}
		
}
