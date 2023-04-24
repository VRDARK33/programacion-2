/*41. Determinar a cuánto es igual la suma de los elementos de la serie de Fibonacci entre 0 y 100.*/
#include<iostream>
using namespace std;

int main(){
	int res,sum,x=0,y=1;
	
	for(int i=1;i<=100;i++){
		res = x + y;
		x=y;
		y=res;
		sum += res;
		cout<<res<<" ";
	}
	cout<<endl;
	cout<<endl;
	cout<<sum;
	
	return 0; 
}


