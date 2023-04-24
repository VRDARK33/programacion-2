/*36. Mostrar en pantalla la tabla de multiplicar del número 5.*/

#include<iostream>
using namespace std;

int main(){
	int res;
	for(int i=1;i<=10;i++){
		res= 5 * i;
		cout<<"5 * "<<i<<" = "<<res<<endl;
	}
	
	return 0;
}

