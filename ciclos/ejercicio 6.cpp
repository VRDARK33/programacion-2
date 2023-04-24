/*27. Leer 2 números enteros y determinar cuál de los dos tiene mayor cantidad de dígitos.*/
#include<iostream>
using namespace std;

int main(){
	int x, y,r1,r2,c1=0,c2=0;
	cout<<"ingrese el valor de X y Y"; cin>>x>>y;
	
	for(int i=1;i<=99999;i++){
		r1=x%10;
		r1=x/10;
		x=r1;
		c1++;
		if(r1==0){
			break;
		}
			
	}
	
	for(int i=1;i<=99999;i++){
		r2=y%10;
		r2=y/10;
		y=r2;
		c2++;
		if(r2==0){
			break;
		}
			
	}
	
	(c1==c2)? printf("misma cantidad de digitos :) "):(c1>c2)?printf("el 1 # tiene mas digitos :) "):printf("el 2 # tiene mas digitos:) ");	
	cout<<"cantidad de digitos: "<<c1<<" "<<c2;


	
	
	return 0;
}

