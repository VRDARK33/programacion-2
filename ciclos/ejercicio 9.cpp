/*4. Leer dos números y mostrar todos los enteros comprendidos entre ellos.*/


#include<iostream>
using namespace std;

int main(){
	int x,y;
	
	printf("ingrese el valor de X y Y: ");scanf("%d",&x);scanf("%d",&y);
	
	if(x!=y){
		if(x>y){
			for(y;y<=x;y++){
				cout<<y<<" ";
			}
		}else{
			for(x;x<=y;x++){
				cout<<x<<" ";
			}
		}
	}
	
	return 0;
}

