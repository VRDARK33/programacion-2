/* 3. Dada la temperatura en grados Fahrenheit (f) 
convertirla a grados centígrados (c) y viceversa */

#include<iostream>
#include<cmath>

using namespace std;

int main(){
	float c, f2, f;
	
	cout<<"ingrese el valor de Fahrenheit\n";cin>>f2;
	
	c =  (f2-32) * 5/9;
	f = (c * 9/5) + 32;
	
	cout<<"el valor de centigrados\n"<<c<<"\n";
	cout<<"el valor de Fahrenheit\n"<<f<<"\n";
	
	
	return 0;
}


