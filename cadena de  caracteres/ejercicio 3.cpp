/*3. Leer una frase y mostrarla con un car�cter en cada l�nea. */

#include<stdio.h>
#define max 100

int main(){
	char b[max];
	
	printf("ingrese una frase: ");scanf("%s",b);
	
	int i=0;
	while(b[i]!='\0'){
		printf("%c \n",b[i]);
		i++;
	}
	
	return 0;
}

