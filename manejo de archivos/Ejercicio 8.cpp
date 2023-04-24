
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

FILE *p,*p2,*p3;

//prototipeado de funciones
void numturno();
void impresion();

int main(){
int cont2=0;
p=fopen("alumnos.dat","wb");	
p2=fopen("alumnos.dat","r+b");
p3=fopen("alumnos.dat","rb");		
for(int cont=0;cont<10;cont++){
printf("Ingrese el DNI del estudiante[%i]:",cont+1);
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
alumno.turno=0;
fwrite(&alumno,sizeof(alumno),1,p);	
printf("\n\nAlumno ingresado...\n");
system("cls");	
}
fclose(p);
numturno();
return 0;	
}


void numturno(){
rewind(p3);	
rewind(p2);
while(fread(&alumno, sizeof(alumno),1,p3)){
	int pos=ftell(p2)-sizeof(alumno);
    if(alumno.dni[9]=='0') alumno.turno=10;
    else if(alumno.dni[9]=='1') alumno.turno=1;
    else if(alumno.dni[9]=='2') alumno.turno=2;
	else if(alumno.dni[9]=='3') alumno.turno=3;
	else if(alumno.dni[9]=='4') alumno.turno=4;
	else if(alumno.dni[9]=='5') alumno.turno=5;
	else if(alumno.dni[9]=='6') alumno.turno=6;
	else if(alumno.dni[9]=='7') alumno.turno=7;
	else if(alumno.dni[9]=='8') alumno.turno=8;
	else if(alumno.dni[9]=='9') alumno.turno=9;
	
	
	fwrite(&alumno,sizeof(alumno),1,p2);  
}
fclose(p2);
impresion();
}


void impresion(){
rewind(p3);
printf("DNI\t\tApellidos\t\tNombre\t\tTurno\n\n");
while(fread(&alumno,sizeof(alumno),1,p3)){
printf("%s\t\t%s\t\t%s\t\t%i\n",alumno.dni,alumno.apellidos,alumno.nombre,alumno.turno);
}	
}
