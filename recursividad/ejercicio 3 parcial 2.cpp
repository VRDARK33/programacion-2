/*ejercicio 3 del parcial realizado por brayan andres sanchez
ver 5.11 c++ 17/10/2022
3-. Implementar un programa recursivo al que se le pase como par�metro de funci�n un n�mero en base 2 (binario), 
le�do por teclado, se debe validar que no se escriban n�meros diferentes de 0 y 1, 
y se debe devolver el equivalente en base 10 (decimal) y en base 8 (octal).*/
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;


void binarios(char num[100],int tam,int potencia);


int main(){
char binario[100];	
printf("Ingrese el n�mero binario que desea transformar a decimal y octal:");	
gets(binario);	
binarios(binario,strlen(binario)-1,0);	
return 0;	
}

void binarios(char num[100],int tam,int potencia){
int suma=0,elevado;
while(tam>=0){
if(num[tam]=='1'){
elevado=pow(2,potencia);
potencia++;
suma=suma+elevado;
}

else if(num[tam]=='0') potencia++;
tam--;	
}
	
printf("Numero en decimal: %i\n",suma);
printf("Numero en octal: %o\n",suma);	
}
