/*2. Escribir un programa que lea una frase y posteriormente la escriba carácter a carácter utilizando printf. */

#include<stdio.h>
#define max 100

int main(){
	char b[max];
	
	printf("ingrese una frase: ");scanf("%s",b);
	
	int i=0;
	while(b[i]!='\0'){
		printf("%c ",b[i]);
		i++;
	}
	
	return 0;
}

