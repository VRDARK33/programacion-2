/*ejercicio 6 del parcial realizado por brayan andres sanchez
ver 5.11 c++ 17/10/2022
6-. Problema propuesto:  De un conjunto de elementos enteros que se encuentran en un vector, 
determinar cuál es la frecuencia de cada valor.  (Valor 1.2)

Se pide: 
a) crear un programa que lea el número de los elementos que contendrá un vector, 
con base en este número generar valores aleatorios que se guarden en el vector, luego ordenar por cualquier método, 
b) crear dos vectores el primero contiene los valores individuales del vector origen y 
el segundo contendrá el valor de la frecuencia para cada valor.

*/

#include<stdio.h>
#include<string.h>
#include<locale.h>
#include<time.h>
#include<stdlib.h>
#include<windows.h>

int main (){
	setlocale(LC_ALL,"Spanish");
int entrada;
printf("De cuanto desea el tamaño de conjunto de números:");
scanf("%i",&entrada);
int numeros[entrada];
srand(time(NULL));
	
	printf("\nVector:");
	for(int cont=0;cont<entrada;cont++){
	numeros[cont]=rand()%entrada;
	printf("%i ",numeros[cont]);		
	}
	printf("\n\n");
	
	

int x,y,aux;
for(x=0;x<entrada;x++){
for(y=x+1;y<entrada+1;y++){
if(numeros[y]<numeros[x]){
aux=numeros[y];
numeros[y]=numeros[x];
numeros[x]=aux;	
}		
}		
}

printf("Vector ordenado:");
for(int cont=0;cont<entrada;cont++){
	printf("%i ",numeros[cont]);		
	}
printf("\n\n");



int pos[entrada],frec[entrada];

int cont2=1;	
	
for(x=0;x<entrada;x++){
if(numeros[x]!=numeros[x-1]){
	for(y=x+1;y<entrada;y++){
if(numeros[y]==numeros[x]){
cont2++;
}

}
pos[x]=numeros[x];
frec[x]=cont2;
cont2=1;
}
}	


printf("Elem\tFrecuencia\n");
for(int cont=0;cont<entrada;cont++){
if(pos[cont]>0 && pos[cont]<=101){
printf ("%i\t%i\n",pos[cont],frec[cont]);
}		
}
printf("\n");
system("pause");
return 0;
}
