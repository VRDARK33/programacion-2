/*Definir un vector de 3 elementos de tipo producto, realizar su carga e impresión. */
#include<stdio.h>
#include<conio.h>

#define tam 3

struct fecha{
	int dd;
	int mm;
	int aa;
};

struct producto{
	char nombre[30];
	int codigo;
	char descripcion[41];
	float precio;
	struct fecha fechav	;
};

void cargar(struct producto vec[tam]){
	int f;
	for(f=0;f<tam;f++){
		printf("ingrese el nombre del producto: ");
		gets(vec[f].nombre);
		printf("ingrese el codigo del producto: :)");
		scanf("%i",&vec[f].codigo);
		fflush(stdin);
		printf("ingrese la descripcion del producto: ");
		gets(vec[f].descripcion);
		printf("ingrese el precio: ");
		scanf("%f",&vec[f].precio);
		printf("fecha de vencimiento: \n");
		printf("dia: ");
		scanf("%i",&vec[f].fechav.dd);
		printf("mes: ");
		scanf("%i",&vec[f].fechav.mm);
		printf("año: ");
		scanf("%i",&vec[f].fechav.aa);
		fflush(stdin);
		
	}
}

void imprimir(struct producto vec[tam]){
	int f;
	for(f=0;f<tam;f++){
		printf("%s %i %s %0.2f %i/%i/%i\n",vec[f].nombre,vec[f].codigo,vec[f].descripcion,vec[f].precio,vec[f].fechav.dd,
		vec[f].fechav.mm,vec[f].fechav.aa);
	}
}

int main(){
	struct producto vec[tam];
	cargar(vec);
	imprimir(vec);
	getch();
	return 0;
}

