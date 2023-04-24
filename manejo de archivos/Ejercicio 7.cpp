
#include<stdio.h>
#include<windows.h>
#include<string.h>
//.txt
typedef struct datos{
char dni[11];
char apellidos[40];	
char nombre [20];	
int turno;
}datos;


datos alumno;
//.dat
typedef struct dat{
char dni[6];
char apellidos[21];	
char nombre [11];	
int turno;
}dat;

dat alu;

FILE *p,*p2,*p3,*p4;

//prototipeado de funciones
void impresiondat();
void impresiontxt();

int main(){
int cont2=0;
p=fopen("alu.txt","a+");	
p2=fopen("alu.txt","r");
p3=fopen("alumnos.dat","ab");
p4=fopen("alumnos.dat","rb");

printf("Ingrese el DNI:");
gets(alumno.dni);
printf("Ingrese los apellidos:");
gets(alumno.apellidos);
printf("Ingrese el nombre:");
gets(alumno.nombre);
printf("Ingrese el turno:");
scanf("%i",&alumno.turno);
fflush(stdin);
fwrite(&alumno,sizeof(alumno),1,p);

fclose(p);

rewind(p2);
while(fread(&alumno,sizeof(alumno),1,p2)){


//recorte del dni
for(int cont=0;cont<5;cont++){
alu.dni[cont]=alumno.dni[cont];		
}

//recorte de los apellidos
for(int cont=0;cont<20;cont++){
alu.apellidos[cont]=alumno.apellidos[cont];		
}

//recorte del nombre
for(int cont=0;cont<10;cont++){
alu.nombre[cont]=alumno.nombre[cont];		
}

alu.turno=alumno.turno;

fwrite(&alu,sizeof(alu),1,p3);

}
fclose(p3);

impresiontxt();
impresiondat();

return 0;
}


void impresiontxt(){
rewind(p2);	
printf("Archivo.txt:\n\nDNI\t\tApellidos\t\tNombre\t\tTurno\n");
while(fread(&alumno,sizeof(alumno),1,p2)){
printf("%s\t\t%s\t\t%s\t\t%i\n",alumno.dni,alumno.apellidos,alumno.nombre,alumno.turno);	
}		
}

void impresiondat(){
rewind(p4);	
printf("\n\nArchivo.dar:\n\nDNI\t\tApellidos\t\tNombre\t\tTurno\n");
while(fread(&alu,sizeof(alu),1,p4)){
printf("%s\t\t%s\t\t%s\t\t%i\n",alu.dni,alu.apellidos,alu.nombre,alu.turno);	
}		
}



