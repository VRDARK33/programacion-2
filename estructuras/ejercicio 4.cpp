/*Definir un vector de 4 elementos de tipo producto. 
Implementar las funciones:  Carga del vector. Impresión del vector. Mostrar el nombre del articulo con precio menor.*/
#include<stdio.h>
#include<conio.h>

#define tam 4

struct producto{
	int codigo;
	char descripcion[41];
	float precio;
};

void cargar(struct producto vec[tam]){
	int f;
	for(f=0;f<tam;f++){
		printf("ingrese el codigo del producto: ");
		scanf("%i",&vec[f].codigo);
		fflush(stdin);
		printf("descripcion del producto: ");
		gets(vec[f].descripcion);
		printf("ingrese el valor del producto: ");
		scanf("%f",&vec[f].precio);
		printf("\n");
	}
}

void imprimir(struct producto vec[tam]){
	int f;
	for(f=0;f<tam;f++){
		printf("%i %s %0.2f\n",vec[f].codigo, vec[f].descripcion, vec[f].precio);
	}
}

void precioMenor(struct producto vec[tam]){
	int f;
	int pos=0;
	for(f=0;f<tam;f++){
		if(vec[f].precio<vec[pos].precio){
			pos=f;
		}
	}
	printf("el producto mas barato %s",vec[pos].descripcion);
}
	
	
int main(){
	struct producto vector[tam];
	cargar(vector);
	imprimir(vector);
	precioMenor(vector);
	getch();
	return 0;
	
}
