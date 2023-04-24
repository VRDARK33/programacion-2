/*Plantear dos funciones una que cargue un registro de tipo producto y otra que lo imprima, y 
ambas retornan lo leído.  En la función main definir dos variables de tipo producto llamar a las funciones anteriores. */
#include<stdio.h>
#include<conio.h>

struct producto{
	int codigo;
	char descripcion[41];
	float precio;
	char fechadeingreso[30];
};

struct producto cargar(){
	struct producto pro;
	printf("ingrese el codigo del producto: **");
	scanf("%i",&pro.codigo);
	fflush(stdin);
	printf("ingrese la descripcion: ");
	gets(pro.descripcion);
	printf("ingrese el precio:");
	scanf("%f",&pro.precio);
	fflush(stdin);
	printf("ingrese la fecha de ingreso: ");
	gets(pro.fechadeingreso);
	return pro;
}

void imprimir(struct producto pro){
	printf("informacion del producto: \n");
	printf("fecha de ingreso: %s\n",pro.fechadeingreso);
	printf("descripcion del producto: %s\n",pro.descripcion);
	printf("codigo del producto: %i\n",pro.codigo);
	printf("precio: %0.2f\n",pro.precio);
}
	
	
int main(){
	struct producto pro1, pro2;
	pro1 = cargar();
	pro2 = cargar();
	imprimir(pro1);
	printf("\n");
	imprimir(pro2);
	getch();
	return 0;
	
}
