/*5-. Que muestre un men� con las operaciones b�sicas y calcule esta 
operaci�n con dos valores pedidos para la operaci�n.*/

#include<iostream>
using namespace std;

int main(){
	int a,b, resultado;
	char x;
	
	cout<<"escoger uno de los signos para la operacion: "<<endl;
	cout<<"+, -, *, /"<<endl;
	cin>>x;
	
	cout<<"ingrese los valores de a y b: "<<endl;
	cin>>a>>b;
	
	
	switch(x){
		case '+':resultado = a + b; cout<<"el resultado es: "<<resultado; break;
		case '-':resultado = a - b; cout<<"el resultado es: "<<resultado; break;
		case '*':resultado = a * b; cout<<"el resultado es: "<<resultado; break;
		case '/':resultado = a / b; cout<<"el resultado es: "<<resultado; break;
	}
	
	return 0;
}


