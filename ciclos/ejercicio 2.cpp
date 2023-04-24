/*44. Leer un número y calcularle su factorial.*/

#include<iostream>
using namespace std;

int main(){
	int x,res=1,i;
	
	printf("ingrese un numero entero: ");scanf("%d",&x);
	
	i=x;
	while(i>0){
		res *= i;
		i--;
	}
	
	cout<<res;
	return 0;
}


