
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
void numero5();
void impresion();

int main(){
int cont2=0;
p=fopen("alumnos.dat","ab");	
p2=fopen("alumnos.dat","r+b");
p3=fopen("alumnos.dat","rb");	
int entrada;
printf("Cuantos alumnos va a ingresar:");
scanf("%i",&entrada);
fflush(stdin);	
for(int cont=0;cont<entrada;cont++){
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
printf("\n\nAlumno ingresado...\n");
system("cls");	
}
fclose(p);

while(fread(&alumno,sizeof(alumno),1,p2)){
cont2++;
}
if(cont2>=5){
numero5();		
}
else printf ("Hay menos de 5 alumnos.\n");
fflush(stdin);
return 0;	
}


void numero5(){
	int cont=1;
	rewind(p2);
while(fread(&alumno, sizeof(alumno),1,p2)){
    if(cont==5)
    {
    	
    	//cambio de los apellidos a mayuscula
        int pos=ftell(p2)-sizeof(alumno);
        for(int cont2=0;cont2<strlen(alumno.apellidos);cont2++){
        alumno.apellidos[cont2]=toupper(alumno.apellidos[cont2]);	
		}
		
		//cambio del nombre a mayusculas
		for(int cont3=0;cont3<strlen(alumno.nombre);cont3++){
        alumno.nombre[cont3]=toupper(alumno.nombre[cont3]);	
		}
		
        fseek(p2,pos,SEEK_SET);
        
        fwrite(&alumno,sizeof(alumno),1,p2);
        break;
    }
    cont++;
}
fclose(p2);
impresion();
}


void impresion(){
rewind(p3);
while(fread(&alumno,sizeof(alumno),1,p3)){
printf("%s\t\t%s\t\t%s\t\t%i\n",alumno.dni,alumno.apellidos,alumno.nombre,alumno.turno);
}	
}
