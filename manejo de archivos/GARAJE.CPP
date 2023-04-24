#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <process.h>
#include <ctype.h>
#include <string.h>

typedef struct garaje
{
char marca[30];
char modelo[30];
char cc[30];
char cv[30];
char matricula[30];
char precio[30];
short borrado;
};

int visualizar(char *archivo);
void grabar(char *archivo);
int modificar(char *archivo);
int borrarregistro(char *archi);
int menu();
garaje leergaraje();
FILE *abrirarchivo(char *nomarchivo, char *modo);
int compactar(char *nombre);
long buscarplaca(char
*nombrearchi, char *placa);
int escribir(char *nombre, garaje k);

main()
{
int opcion;
char archivo[50];
system ("cls");
printf("ingrese el nombre del archivo donde va a guardar\n");
gets(archivo);
for(;;)
   {
   opcion=menu();
   switch(opcion)
     {
     case 1:
       grabar(archivo);
       break;
     case 2:
       visualizar(archivo);
       break;
     case 3:
       modificar(archivo);
       break;
     case 4:
       borrarregistro(archivo);
       break;
     case 6:
       compactar(archivo);
       break;
     case 7:
       exit (0);
       break;
     default:
	printf("\n opcion no es valida ");
     }
   }
}

int menu()
{
int opcion;
system ("cls");
printf("\n\t              MENU                ");
printf("\n\t 1 introducir datos del vehiculo  ");
printf("\n\t 2 mostrar datos de los vehiculos ");
printf("\n\t 3 buscar y modificar datos       ");
printf("\n\t 4 borrar datos                   ");
printf("\n\t 6 compactar archivos             ");
printf("\n\t 7 salir                          ");
printf("\n\n\n\t elija una opcion y presiona ENTER ");
opcion=getche();
return opcion-48;
}

FILE *abrirarchivo(char *nomarchivo, char *modo)
{
FILE *puntero;
puntero=fopen(nomarchivo, modo);
if(puntero==NULL)
  {
  perror("problemas al abrir el archivo");
  getch();
  exit(1);
  }
return puntero;
}

long buscarplaca(char *nombrearchi, char *placa)
{
FILE *p;
garaje k;
long i=0;
p=abrirarchivo(nombrearchi, "rb");

fread(&k, sizeof(garaje), 1, p);
while(!feof(p))
 if(strcmpi(placa, k.matricula)==0)
   {
   fclose(p);
   return i;
   }
 else
   {
   i++;
   fread(&k, sizeof(garaje), 1, p);
   }
   fclose(p);
return -1;
}


garaje leergaraje()
{
garaje p;

printf("\n\n\t marca del coche: ");
gets(p.marca);
printf("\n\t modelo del coche: ");
gets(p.modelo);
printf("\n\t centimetros cubicos: ");
gets(p.cc);
printf("\n\t potencia en caballos: ");
gets(p.cv);
printf("\n\t matricula del coche: ");
gets(p.matricula);
printf("\n\t precio del coche: ");
gets(p.precio);
p.borrado=1;
return p;
}

int mostrargaraje(garaje k)
{
printf("\n\n\t marca del coche: ");
puts(k.marca);
printf("\n\t modelo del coche: ");
puts(k.modelo);
printf("\n\t centimetros cubicos: ");
puts(k.cc);
printf("\n\t potencia en caballos: ");
puts(k.cv);
printf("\n\t matricula del coche: ");
puts(k.matricula);
printf("\n\t precio del coche: ");
puts(k.precio);
printf("\n\n\t pulse enter ");
getch();
return 1;
}

void grabar(char *nomarchi)
{
garaje k;
char respuesta='s';
while(1)
{
system ("cls");
k=leergaraje();
escribir (nomarchi, k);

printf("\n\n\t quieres introducir mas datos S/N;");
respuesta=getche();
if(!(respuesta=='s'||respuesta=='S'))
  break;
}
}

int compactar(char *nombre)
{
FILE *p;
char nomcopia[] = "c:\copia.txt";
garaje co;

p=abrirarchivo(nombre, "rb");

fread(&co, sizeof (garaje), 1, p);
while(!feof(p))
  {
  if(co.borrado!=0)
    escribir(nomcopia, co);
  fread(&co, sizeof (garaje), 1, p);
  }
fclose(p);
remove(nombre);
rename(nomcopia, nombre);
return 1;
}

int escribir(char *nombre,garaje k)
{
FILE *m;
m=abrirarchivo(nombre, "ab");
fwrite(&k, sizeof(garaje), 1, m);
fclose(m);
return 1;
}

int visualizar(char *nombre)
{
FILE *punfich;
garaje coche;
long totalreg=0;
int registro=0;
system ("cls");
punfich=abrirarchivo(nombre, "rb");
fseek(punfich, 0L, SEEK_END);
totalreg=ftell(punfich) /sizeof(garaje);
fseek(punfich, 0L, SEEK_SET);

fread(&coche, sizeof(garaje), 1, punfich);
while(!feof(punfich))
 {
 registro=registro+1;
 printf("\n\t el numero de registros es: %d", totalreg);
 printf("\n\t el registro actual es; %d", registro);
 if(coche.borrado!=0)
   mostrargaraje(coche);

 fread(&coche, sizeof(garaje), 1, punfich);
 system ("cls");
 }
 fclose(punfich);
 return (0);
}

int borrarregistro(char *archi)
{
FILE *m;
garaje y;
long pos;
char placa[30];
system ("cls");
printf("\n ingrse la placa a eliminar ");
gets(placa);
pos=buscarplaca(archi, placa);
if(pos==-1)
  {
  printf("la placa %s no existe", placa);
  getch();
  return 1;
  }
  m=abrirarchivo(archi, "r+b");
  fseek(m, pos*sizeof(garaje), SEEK_SET);
  fread(&y, sizeof(garaje), 1, m);
  y.borrado=0;

  fseek(m, pos*sizeof(garaje), SEEK_SET);
  fwrite(&y, sizeof(garaje), 1, m);
  fclose(m);
  printf("registro borrado");
  getch();
  return 1;
}

int modificar(char *consulta)
{
FILE *punfich;
char placa[30];
long posicion;
garaje carro;
long desp;
int c, respuesta;

while(1)
 {
 system ("cls");
 printf("ingrese la placa a buscar");
 gets(placa);
 posicion=buscarplaca(consulta, placa);
 if(posicion==-1)
   {
   printf("la placa %s no existe", placa);
   getch();
   continue;
   }
   punfich=abrirarchivo(consulta, "rb");
   fseek(punfich, sizeof(garaje)*posicion, SEEK_SET);
   fread(&carro, sizeof (garaje), 1, punfich);
   mostrargaraje(carro);
   fclose(punfich);

   do
     {
     printf("\n desea modificarel registro? (s/n) ");
     respuesta=getche();
     }
     while(tolower(respuesta!='s') && tolower(respuesta!='n'));
       if(respuesta=='s')
	 {
	 carro=leergaraje();
	 punfich=abrirarchivo(consulta, "r+b");
	 fseek(punfich, posicion*sizeof(garaje), SEEK_SET);
	 fwrite(&carro,sizeof(garaje), 1, punfich);
	 fclose(punfich);
	 }
	 printf("\n desea consultar otro vehiculo s/n");
	 c=getche();
	 if(!(c=='s'||c=='S'))
	   break;
 }
 return(1);
}





