/*4. Lea dos valores reales (x,y) y diga en que cuadrante del espacio cartesiano está*/

#include<iostream>

using namespace std;

int cuadrante(int a, int b){
	if(a > 0 && b > 0 ){
		cout<<"el cuadrante de (x,y) es cuadrante 1"<<endl;
	}else if(a < 0 && b > 0 ){
		cout<<"el cuadrante de (x,y) es cuadrante 2"<<endl;
	}else if(a < 0 && b < 0 ){
		cout<<"el cuadrante de (x,y) es cuadrante 3"<<endl;
	}else if(a > 0 && b < 0 ){
		cout<<"el cuadrante de (x,y) es cuadrante 4"<<endl;
	}
}

int main(){
	int x, y; 
	
	cout<<"ingrese el valor de X \n"; cin>>x;
	cout<<"ingrese el valor de Y \n"; cin>>y;
	
	cuadrante(x,y);
	return 0;
}

