/*2. Lea dos n�meros y diga si el primero es m�ltiplo del segundo. */


#include<iostream>}
using namespace std;

int main(){
	int x,y,res;
	
	cout<<"ingrse los valores de x y y ";
	cin>>x>>y;
	
	res = x%y;
	
	if(res == 0){
		cout<<"el primero es multiplo del segundo";
	}else{
		cout<<"no es multiplo";
	}
	
	return 0;
}


