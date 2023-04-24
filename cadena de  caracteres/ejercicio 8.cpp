/*8. Sustituir todos los espacios en blanco de una frase por un asterisco. */

#include<iostream>
#define max 100
using namespace std;

int main(){
	int j=0;
	char b[max],a=32;
	
	cout<<"ingrese una frase: "<<endl;
	cin.getline(b, max, '\n');
	
	for(j;j<=max;j++){
		if(b[j]==a){
			b[j]=42;
		}
	}
	
	cout<<b;
	
	return 0;
}

