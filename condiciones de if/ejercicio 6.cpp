/*3-. Que pida una letra y detecte si es una vocal, 
en caso afirmativo imprimir una palabra que empiece por esa vocal.*/

#include<iostream>
using namespace std;

int main(){
	char a;
	
	cout<<"ingrese una letra: "<<endl;
	cin>>a;
	
	switch(a){
		case 'a': case 'A': cout<<"avion"; break;
		case 'e': case 'E': cout<<"elefante"; break;
		case 'i': case 'I': cout<<"iglesia"; break;
		case 'o': case 'O': cout<<"oso"; break;
		case 'u': case 'U': cout<<"uva"; break;
		default : cout<<"la letra ingresada no es una vocal"; break;
	}
	
	return 0;
}

