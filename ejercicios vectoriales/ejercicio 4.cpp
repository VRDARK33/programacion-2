/*6. Leer 10 números enteros, almacenarlos en un vector. Luego leer un entero y 
determinar cuántos divisores exactos tiene este último número entre los valores almacenados en el vector.*/

#include<stdio.h>
class vector{
	
	private:
		int num[10];
		
	public:
		void cargar();
		void divisores();
	
};

void vector::cargar(){
	for(int i=0;i<10;i++){
printf("ingresar el valor #%d: ",i);scanf(" %d",&num[i]);	}
}

void vector::divisores(){
	int c=0,x,res;
	printf("ingresar un valor: ");scanf(" %d",&x);
	
	
	for(int i=0;i<10;i++){
		res = x % num[i];
		if(res==0){
			c++;
		}  
	}
	printf("dentro del vector el numero %d tiene %d divisores exactos",x,c);
}


int main(){
	vector v1;
	v1.cargar();
	v1.divisores();
	return 0;
}

