/*2-. Que pida un número del 1 al 12 y diga el nombre del mes correspondiente.*/

#include<iostream>
using namespace std;

int main(){
	int x;
	
	cout<<"ingrese un numero del 1 al 12 para saber el mes: "<<endl;
	cin>>x;
	
	switch(x){
		case 1: cout<<"enero"; break;
		case 2: cout<<"febrero"; break;
		case 3: cout<<"marzo"; break;
		case 4: cout<<"abril"; break;
		case 5: cout<<"mayo"; break;
		case 6: cout<<"junio"; break;
		case 7: cout<<"julio"; break;
		case 8: cout<<"agosto"; break;
		case 9: cout<<"septiembre"; break;
		case 10: cout<<"octubre"; break;
		case 11: cout<<"noviembre"; break;
		case 12: cout<<"diciembre"; break;
		default :cout<<"numero no valido";
	}
	
	
	return 0;
}

