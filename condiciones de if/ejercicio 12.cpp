

/*15. en una sala de cine muy conocida de Bogotá, desean hacer uso de la tecnología para el manejo de la boletería.  
Para esto, le cuentan a usted los siguientes datos al respecto del costo de las boletas: ?        
Primera clase, costo igual a $5500 si es de Lunes a Jueves. ?        
Segunda clase, costo igual a $2500 si es de Lunes a Jueves.  ?          
Si es un viernes, sábado o domingo, el costo es de $1500 sin importar la clase. ?        
Si un estudiante y el día es un miércoles o un jueves le hacen un descuento de $500. 
Con todo esto, hay que decirle a una persona en cuánto le sale el costo de su boleta. 
*/
#include<stdio.h>

int main(){
	int x,dia,est;
	 printf("seleccione una de las sigueintes opciones: \n");
	 printf("1)Primera clase, costo igual a $5500 si es de Lunes a Jueves. \n");
	 printf("2) Segunda clase, costo igual a $2500 si es de Lunes a Jueves.  \n");
	 printf("3)viernes, sábado o domingo, el costo es de $1500 sin importar la clase. \n");
	 scanf("%d",&x);
	 
	 switch(x){
	 	case 1 : printf("es usted estudiante: "); printf("1)si "); printf("2)no ");scanf("%d",&est);
	 	if(est == 1){
	 		printf("viene miercoles o jueves: "); printf("1)si "); printf("2)no ");scanf("%d",&dia);
	 		if(dia == 1){
	 			printf("el costo de su boleta es de: 5000");
			 }else{
			 	printf("el costo de su boleta es de: 5500");
			 }
		 }else{
		 	printf("el costo de su boleta es de: 5500");
		 } break;
		 
		case 2 : printf("es usted estudiante: "); printf("1)si "); printf("2)no ");scanf("%d",&est);
	 	if(est == 1){
	 		printf("viene miercoles o jueves: "); printf("1)si "); printf("2)no ");scanf("%d",&dia);
	 		if(dia == 1){
	 			printf("el costo de su boleta es de: 2000");
			 }else{
			 	printf("el costo de su boleta es de: 2500");
			 }
		 }else{
		 	printf("el costo de su boleta es de: 2500");
		 } break;
		 
		case 3 : printf("el costo de su boleta es de: 1500"); break;
		
		default : printf("opcion no valida :)"); break;
		 
	 }
	 
	 
	 
	
	return 0;
}
