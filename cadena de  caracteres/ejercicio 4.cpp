/*6. Leer una frase y contar el número de vocales (de cada una) que aparecen. */

#include<iostream>
#define max 100
using namespace std;

int main(){
	int j=1,a=0,e=0,i=0,o=0,u=0;
	char b[max];
	
	cout<<"ingrese una frase: "<<endl;
	cin.getline(b, 100, '\n');
	
	for(j;j<=max;j++){
		
		switch(b[j]){
			case 'a' : a++; break;
			case 'e' : e++; break;
			case 'i' : i++; break;
			case 'o' : o++; break;
			case 'u' : u++; break;
			
		}
	}
	
	cout<<a<<" "<<e<<" "<<i<<" "<<o<<" "<<u<<endl;
	
	return 0;
}
