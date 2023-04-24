/*17. El alcalde del pueblo " Derecho a ser feliz" encontró que su gente sólo comete 3 tipos de infracciones: ? 
       Robar gallinas. ?        Ser infiel. ?        No ir a las votaciones. 
	   La penitencia que coloca es: 
	   INFRACCION PENITENCIAS Por robar gallinas 2 días de picar piedra 1 día de cárcel. 
	   Por ser infiel 3 días de picar piedra  2días de cárcel. 
	   Por no ir al las votaciones 3 días de picar piedra 4 días de cárcel. 
	   Cada persona sólo confiesa 1 o máximo 2 infracciones. Hay que leer la infracción y decir la penitencia que debe cumplir.*/
	   
#include<stdio.h>

int main(){
	int x, y;
	
	printf("cuantas infracciones cometio: "); printf("1)1"); printf("2)2");scanf("%d",x);
	
	if(x==1){
		printf("que infraccion cometio \n");
		printf("1)robar gallinas \n");
		printf("2)ser infiel \n");
		printf("3)no ir al las votaciones \n");
		scanf("%d",&y);
		
		switch(y){
			case 1 : printf("Por robar gallinas 2 días de picar piedra 1 día de cárcel."); break;
			case 2 : printf("Por ser infiel 3 días de picar piedra 2 días de cárcel."); break;
			case 3 : printf(" Por no ir al las votaciones 3 días de picar piedra 4 días de cárcel."); break;
		}
		
	}else if(x==2){
		printf("que infraccion cometio \n");
		printf("1)robar gallinas y ser infiel  \n");
		printf("2)robar gallinas y no ir al las votaciones \n");
		printf("3)ser infiel y no ir al las votaciones \n");
		scanf("%d",&y);
		
		
		switch(y){
			case 1 : printf("Por robar gallinas y ser infiel 5 días de picar piedra 3 día de cárcel."); break;
			case 2 : printf("Por robar gallinas y no ir al las votaciones 5 días de picar piedra 5 días de cárcel."); break;
			case 3 : printf(" Por no ir al las votaciones y ser infiel 6 días de picar piedra 6 días de cárcel."); break;
		}
	}
	
	return 0;
}


