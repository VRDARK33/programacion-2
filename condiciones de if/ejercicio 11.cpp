/*17. El alcalde del pueblo " Derecho a ser feliz" encontr� que su gente s�lo comete 3 tipos de infracciones: ? 
       Robar gallinas. ?        Ser infiel. ?        No ir a las votaciones. 
	   La penitencia que coloca es: 
	   INFRACCION PENITENCIAS Por robar gallinas 2 d�as de picar piedra 1 d�a de c�rcel. 
	   Por ser infiel 3 d�as de picar piedra  2d�as de c�rcel. 
	   Por no ir al las votaciones 3 d�as de picar piedra 4 d�as de c�rcel. 
	   Cada persona s�lo confiesa 1 o m�ximo 2 infracciones. Hay que leer la infracci�n y decir la penitencia que debe cumplir.*/
	   
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
			case 1 : printf("Por robar gallinas 2 d�as de picar piedra 1 d�a de c�rcel."); break;
			case 2 : printf("Por ser infiel 3 d�as de picar piedra 2 d�as de c�rcel."); break;
			case 3 : printf(" Por no ir al las votaciones 3 d�as de picar piedra 4 d�as de c�rcel."); break;
		}
		
	}else if(x==2){
		printf("que infraccion cometio \n");
		printf("1)robar gallinas y ser infiel  \n");
		printf("2)robar gallinas y no ir al las votaciones \n");
		printf("3)ser infiel y no ir al las votaciones \n");
		scanf("%d",&y);
		
		
		switch(y){
			case 1 : printf("Por robar gallinas y ser infiel 5 d�as de picar piedra 3 d�a de c�rcel."); break;
			case 2 : printf("Por robar gallinas y no ir al las votaciones 5 d�as de picar piedra 5 d�as de c�rcel."); break;
			case 3 : printf(" Por no ir al las votaciones y ser infiel 6 d�as de picar piedra 6 d�as de c�rcel."); break;
		}
	}
	
	return 0;
}


