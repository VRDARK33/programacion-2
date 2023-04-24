/*2. Lea dos números y diga si el primero es múltiplo del segundo.*/

#include<iostream>
using namespace std;

int multiplo(int a, int b){
	int ar;
	ar = a % b; 
		if(ar == 0){
		cout<<"el primer digito es multiplo del segundo "<<endl; 
	}else{
		cout<<"el primer digito no es multiplo del segundo "<<endl;
	}
}

int main(){
	int n1, n2;
	
	cout<<"\n digite el primer numero ";cin>>n1;
	cout<<"\n digite el segundo numero ";cin>>n2;
	
	multiplo(n1,n2);
	
	return 0;
}

