/*28. Leer 2 números enteros y determinar cuál de los dos tiene mayor cantidad de dígitos primos.*/
#include<iostream>
using namespace std;

int main(){
	int x, y,r1,r2,c1=0,c2=0;
	cout<<"ingrese el valor de X y Y"; cin>>x>>y;
	

	
	while(x>0){
		r1=x%10;
		if((r1==1)||(r1==2)||(r1==3)||(r1==5)||(r1==7)){
			c1++;
			
		}
		r1=x/10;
		x=r1;
		
		r2=y%10;
		if((r2==1)||(r2==2)||(r2==3)||(r2==5)||(r2==7)){
			c2++;
			
		}
		r2=y/10;
		y=r2;
		
		
		
	}
	
	(c1==c2)? printf("misma cantidad de digitos primos :) "):(c1>c2)?printf("el 1 # tiene mas digitos primos :) "):printf("el 2 # tiene mas digitos primos :) ");	
	cout<<"cantidad de digitos primos: "<<c1<<" "<<c2;

	
	return 0;
}


