/*2. Leer 10 números enteros, almacenarlos en un vector y 
determinar a cuánto es igual el promedio entero de los factoriales de cada uno de los números leídos. */

#include<stdio.h>

class vector{
	private:
		int num[10];
		float prom[10];
		
	public:
		void cargar();
		void promedio();
};

void vector::cargar(){
	
	for(int i=0;i<10;i++){
		printf("ingrese 10 valores enteros: ");
		scanf("%d",&num[i]);
	}
}

void vector::promedio(){
	int res=1,j,c=0;
	for(int i=0;i<10;i++){
		j = num[i];
		while(j>0){
			res *= j;
			c+=j;
			j--;	
		}
		prom[i]= res/c;
		printf("%.1f ",prom[i]);
		res=1;
		c=0;
	}
		
}




int main(){
	vector v1;
	v1.cargar();
	v1.promedio();
	return 0;
}

*/

/*5. Leer 10 números enteros, almacenarlos en un vector. Luego leer un entero y 
determinar si este último entero se encuentra entre los 10 valores almacenados en el vector. 

#include<stdio.h>

class vector{
	
	private:
		int num[10];
		
	public:
		void cargar();
		void buscar();
		
};

void vector::cargar(){
	for(int i=0;i<10;i++){
		printf("ingresar el valor #%d: ",i);scanf(" %d",&num[i]);
	}
}

void vector::buscar(){
	int x;
	printf("ingrese un valor entero para verificar si esta en el vector: ");
	scanf("%d",&x);
	
	for(int i=0;i<10;i++){
		if(x==num[i]){
			printf("el numero %d esta en el vector en la posicion #%d",x,num[i]);
		}
	}
}

int main(){
	vector v1;
	v1.cargar();
	v1.buscar();
	return 0;
}


