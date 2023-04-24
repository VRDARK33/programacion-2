/*14. Mostrar en pantalla los primeros 20 múltiplos de 3*/


#include<iostream>
using namespace std;

int main(){
	int x=3;
	
	for(int i=1;i<=20;i++){
		x = x * i;
		cout<<x<<" ";
		x=3;
	}
	
	return 0;
}

