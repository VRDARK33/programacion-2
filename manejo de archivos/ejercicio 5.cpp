
#include<stdio.h>
#include<windows.h>
#include<string.h>

typedef struct datos{
char dni[11];
char apellidos[40];	
char nombre [20];	
int turno;
}datos;


datos alumno;

FILE *p,*p2;

//prototipeado
void impresion();

int main(){
	int desicion;
p=fopen("alumnos.dat","ab");	
p2=fopen("alumnos.dat","rb");	
int entrada=1;	
while(entrada==1){
printf("Ingrese el DNI del estudiante:");
gets(alumno.dni);
fflush(stdin);
while(strlen(alumno.dni)!=10){
printf("El DNI no puede superar los 10 caracteres\n");	
printf("Ingrese el DNI del estudiante:");
gets(alumno.dni);
fflush(stdin);	
}
printf("Ingrese los apellidos:");	
gets (alumno.apellidos);
fflush(stdin);	
printf("Ingrese el nombre:");	
gets(alumno.nombre);	
fflush(stdin);
printf("Ingrese el turno:");	
scanf("%i",&alumno.turno);
fflush(stdin);
while(alumno.turno<=1 && alumno.turno>=10){
printf("El turno debe estar entre 1 y 10.\n\n");	
printf("Ingrese el turno:");	
scanf("%i",&alumno.turno);
fflush(stdin);		
}
fwrite(&alumno,sizeof(alumno),1,p);	
system("cls");
printf("Desea ingresar otro estudiantes:\n1.si\n2.no\nSalir\n");
scanf("%i",&entrada);
fflush(stdin);
system("cls");	
}
fclose(p);
printf("\nMostrar todos los DNI de los estudiantes del turno 7:\n");
fflush(stdin);
impresion();
return 0;	
}

void impresion(){
rewind(p2);
printf("Alumnos con el turno 7:\n");
while(fread(&alumno,sizeof(alumno),1,p2)){
if(alumno.turno==7){
printf("\nDNI: ");
printf("%s",alumno.dni);		
}		
}		
}

