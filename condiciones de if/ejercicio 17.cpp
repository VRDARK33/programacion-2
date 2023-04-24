#include<iostream>
using namespace std;

int main(){
	int a,b,c,mayor;
	
	cout<<"ingrese los valores de A B C"<<endl;
	cin>>a>>b>>c;
	if(a!=b &&  a!=c && b!=c){
	mayor = (a>b && a>c)?a;
	mayor = (b>a && b>c)?b:c;
	}else{
		cout<<"error hay numeros iguales";
	}
	
	cout<<"el numero mayor  es: "<<mayor;
	
	return 0;
}
