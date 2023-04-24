/*19. Leer el nombre de una persona y un carácter y comprobar si dicho carácter está en su nombre. */

#include<iostream>
#define max 100
using namespace std;

int main(){
	char caracter, nombre[max];
	cout<<"ingrese una frase: "<<endl;
	cin.getline(nombre,max,'\n');
	cout<<"ingrese un caracter: "<<endl;
	cin>>caracter;
	
	for(int i=0;i<=max;i++){
		if(nombre[i]==caracter){
			cout<<"este caracter esta en su nombre"<<endl;
		}
	}
	
	
	return 0;
}


