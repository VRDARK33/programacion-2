#include<stdio.h>
#include<conio.h>
#include<locale.h>

#define tam 2

struct fecha{
	int dd;
	int mm;
	int aa;
};


struct datos{
	char nombre[80];
	int edad;
	float peso;
	struct fecha fecha_nac;
};


void cargar(struct datos vec[tam]){
	int f;
	for(f=0;f<tam;f++){
		printf("registro #%i\n",f+1);
		printf("ingrese su nombre completo: ");
		gets(vec[f].nombre); 
		printf("ingrese su edad: ");
		scanf("%i",&vec[f].edad);
		printf("ingrese su peso con dos decimales: ");
		scanf("%f",&vec[f].peso);
		fflush(stdin);
		printf("ingrese su fecha de nacimiento \n");
		printf("dia: ");
		scanf("%i",&vec[f].fecha_nac.dd);
		printf("mes: ");
		scanf("%i",&vec[f].fecha_nac.mm);
		printf("año: ");
		scanf("%i",&vec[f].fecha_nac.aa);
		fflush(stdin);
		printf("\n");
		
	}
}


void opcion(struct datos vec[tam]){
	int option, pos=0, aux;
	
	printf("\t welcome to the menu :)\t\n");
	printf("1) ver todos los registros.\n");
	printf("2) ver solo los nombres.\n");
	printf("3) ver el mayor peso corporal.\n");
	printf("4) ver el menor peso corporal.\n");
	printf("5) ordenar pesos de mayor a menor.\n");
	printf("6) ordenar pesos de menor a mayor.\n");
	printf("7) ver todos los registros.\n");
	printf("8) ver todos los registros.\n");
	printf("9) ver todos los registros.\n");
	printf("10) ver todos los registros.\n");
	printf("seleccione una opcion: "); scanf("%i",&option);
	printf("\n");
	
	switch(option){
		case 1: printf("\ttodos los registros\t\n");
	    int f;
	    for(f=0;f<tam;f++){
	    	printf("registro #%i\n",f+1);
		    printf("nombre: %s\nedad: %i\npeso en kg: %0.2f\ndia: %i mes: %i año: %i\n",vec[f].nombre, vec[f].edad, 
		    vec[f].peso, vec[f].fecha_nac.dd, vec[f].fecha_nac.mm, vec[f].fecha_nac.aa);
		    printf("\n");}
	        printf("\n"); 
			break;
	        
	    case 2: printf("\tnombres\t\n");
	    for(f=0;f<tam;f++){
	    	printf("%i)nombre: %s\n",f+1,vec[f].nombre);
		} break;
		
		case 3:
		for(f=0;f<tam;f++){
			if(vec[f].peso>vec[pos].peso){
				pos=f;
			}
		}
		printf("el mayor peso corporal es de %0.2f ",vec[pos].peso); 
		break;
		
		case 4:
		for(f=0;f<tam;f++){
			if(vec[f].peso<vec[pos].peso){
				pos=f;
			}
		}
		printf("el menor peso corporal es de %0.2f ",vec[pos].peso); 
		break;
		
		case 5:
		for(int i = 0;i<tam;i++){
		    for(int j = 0;j<tam;j++){
			    if(vec[j].peso>vec[j+1].peso){
				    aux = vec[j].peso;
			    	vec[j].peso = vec[j+1].peso;
				    vec[j+1].peso = aux;
					}
				}
			}
		
		printf("\n");
	    printf("peso corporal de mayor a menor \n");
	    for(int i=tam;i>0;i--){
		    printf("%0.2f ",vec[i].peso);
			}
			
		case 6;
	}
	
}

int main(){
	setlocale(LC_ALL, "spanish");
	struct datos vector[tam];
	cargar(vector);
	opcion(vector);
	getch();
	return 0;
}
