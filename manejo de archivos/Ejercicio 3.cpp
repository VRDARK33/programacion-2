/*
	Nombre: Ejercicio 3
	Autor: Daniel Rico Palacio
	Date: 24/10/22 8:40
	Descripción: Diseña una función “finfichero” que reciba dos
parámetros: el primero debe ser un número entero positivo
n, y el segundo el nombre de un fichero de texto. La función
debe mostrar por pantalla las n últimas líneas del fichero.
Ejemplo:
$ finfichero(3,"cadenas.txt")
with several words
unapalabra
muuuuchas palabras, muchas, muchas...
	*/
//Librerias
#include<stdio.h>
#include<fstream>
#include<string.h>

FILE *p,*p2;
char frase[100];


void finfichero(int lineafinal,char archivo[100]);

int main (){
int lineafinal;
char archivo[100];
printf("Ingrese el nombre del archivo de que desea con (.txt) al final:\nNombre archivo:");
gets(archivo);
fflush(stdin);
p2=fopen(archivo,"r");
if(p2==NULL){//se verifica que el archivo si se encontro o no.
printf("Archivo no encontrado...\n");	
}

else finfichero(lineafinal,archivo);
return 0;	
}

//funcion que recibe un nombre de archivo y un valor n.
void finfichero(int lineafinal,char archivo[100]){	
int lineastotales=-1,cont=0;	
p2=fopen(archivo,"r");	
printf("\n\nIngrese desde que linea quiere imprimir (el valor tiene que ser mayor o igual que 0):\nEntrada:");
scanf("%i",&lineafinal);
fflush(stdin);
if(lineafinal>=0){
printf("\n\n");	
rewind(p2);	
while (fread(&frase,sizeof(frase),1,p2)){
lineastotales++;	
}	
rewind(p2);
while (fread(&frase,sizeof(frase),1,p2)){
if(cont>(lineastotales-lineafinal)){
printf("%s\n",frase);
cont++;	
}
else cont++;	
}// fin while
}//fin if
else printf("El número ingresado es menor que 0...\n");
fclose(p2);	
}
