#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	int n, d, td=0, suma=0;
	char cad [1000];
	cout<<"numero: ";
	cin>>n;
	fflush (stdin);
	if (n>=10000){
		do{
			d=n%10;
			suma= suma+d;
			n=n/10;
			td++;
		} while (n>0);
		cout<<"El numero ingresado tiene " <<td <<" digitos";
		cout<<"\nLa suma de los digitos del numero ingresado es " <<suma;
		cout<<"\nIngrese otra vez el numero: ";
		cin>>cad;
		strrev(cad);
		printf("El numero invertido es %s", cad);
	} else cout<<"error, numero invalido";
	return 0;
}
