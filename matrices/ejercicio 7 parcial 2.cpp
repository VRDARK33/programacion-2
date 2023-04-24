/*ejercicio 7 del parcial realizado por brayan andres sanchez
ver 5.11 c++ 17/10/2022
7-. Realizar un programa que calcule para una matriz cuadrada, los siguientes puntos:  
(Valor 0.8)

a)-. Verificar que las filas y columnas son iguales; si lo son entonces realizar las operaciones propuestas, en caso contrario sacar el error correspondiente.
b)-. Hallar la sumatoria de todos los valores ingresados por teclado o generados aleatoriamente.
c)-. Hallar la sumatoria de todos los valores de la DIAGONAL PRINCIPAL, y la sumatoria de los valores de la DIAGONAL SECUNDARIA.
d)-. Hallar la sumatoria de todos los valores de la TRIANGULAR SUPERIOR y la sumatoria de la TRIANGULAR INFERIOR.
*/

#include <conio.h>
#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;


int main(){
	
	int Fi=1, Co=0, i, j, Sum;
	srand(time(NULL));


	while(Fi != Co){
	
	cout<<"Ingrese el tamano que tendran las filas de la matriz: ";
	cin>>Fi;

   cout<<"Ingrese el tamano que tendran las columnas de la matriz: ";
   cin>>Co;
   
   if(Fi != Co) cout<<"\n\nLas filas de la matriz son diferentes que las columnas, por lo cual no es cuadrada, intentelo nuevamente.\n\n";
   
  }
  
  int Matr[Fi][Co];
	
   for(i=0; i<Fi; i++){
   	  for(j=0; j<Fi; j++){
	Matr[i][j]= 1 + rand() % 5;
      }
  }
  
  cout<<"\n\nLa matriz generada es: \n"; 
   
   
	for(i=0; i<Fi; i++){
	  for(j=0; j<Fi; j++){
	   cout<<Matr[i][j]<<" \t";	
		}
		cout<<"\n"; 
   }
   
  
   for(i=0; i<Fi; i++){
   	  for(j=0; j<Fi; j++){
	 Sum= Sum + Matr[i][j];
      }
  }

   cout<<"\nLa suma de los elementos de la matriz es: "<<Sum;
   
   Sum=0;
   
   
   for(i=0; i<Fi; i++){
   	  for(j=0; j<Fi; j++){
	 if(i==j) Sum= Sum + Matr[i][j];
      }
  }
  
  cout<<"\nLa suma de la diagonal principal de la matriz es: "<<Sum;
  
  
  Sum=0;
  
  for(i=0; i<Fi; i++){
	 Sum= Sum + Matr[i][j-1];
	 j--;
    }
  
  cout<<"\nLa suma de la diagonal secundaria de la matriz es: "<<Sum;
  
  
  
  
  Sum=0;
  
  for(i=0; i<Fi; i++){
  	for(j=0; j<Fi; j++){
  		
  	 if (not(i>j))  Sum= Sum + Matr[i][j];
    }
  }
  
  cout<<"\nLa suma de la triangular superior de la matriz es: "<<Sum;
  
  
  
  
  Sum=0;
  
  for(i=0; i<Fi; i++){
  	for(j=0; j<Fi; j++){
  		
  	 if (not(j>i))  Sum= Sum + Matr[i][j];
    } 
  }
  
  
  
  cout<<"\nLa suma de la diagonal triangular inferior de la matriz es: "<<Sum;
	
	getch();
	return 0;
}
