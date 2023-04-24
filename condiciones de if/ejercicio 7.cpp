/*4. Lea dos valores reales (x,y) y diga en que cuadrante del espacio cartesiano está.*/

#include<iostream>
using namespace std;

int main(){
	int x,y;
	
	
	cout<<"ingrese los valores de x y";
	cin>>x>>y;
	
	if((x>0)&&(y>0)){
		cout<<"cuadrante 1";
	}else if((x<0)&&(y>0)){
		cout<<"cuadrante 2";
	}else if((x<0)&&(y<0)){
		cout<<"cuadrante 3";
	}else if((x>0)&&(y<0)){
		cout<<"cuadrante 4";
	}else{
		cout<<"origen";
	}
	
	return 0;
}


