/*37. Generar todas las tablas de multiplicar del 1 al 10.*/

#include<iostream>
using namespace std;

int main(){
	int x=10,res;
	
	for(int i=1;i<=x;i++){
		for(int j=1;j<=10;j++){
			res = j * i;
			cout<<i<<" * "<<j<<" = "<<res<<endl;
		}
		cout<<endl;
	}
	
	return 0;
}


