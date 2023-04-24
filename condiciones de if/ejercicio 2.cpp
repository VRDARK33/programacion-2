/*los siguientes programas se realizaron en la 
ver 5.11 de c++ brayan andres sanchez.
17-08-2022 

/*1-. Que pida un número del 1 al 7 y diga el día de la semana correspondiente.*/

#include<iostream>
using namespace std;

int main(){
	int x;
	
	cout<<"ingrese un numero del 1 al 7 para el dia de la semana: "<<endl;
	cin>>x;
	
	if(!(x<=0)||(x>=8)){
		switch(x){
			case 1: cout<<"lunes"; break;
			case 2: cout<<"martes"; break;
			case 3: cout<<"miercoles"; break;
			case 4: cout<<"jueves"; break;
			case 5: cout<<"viernes"; break;
			case 6: cout<<"sabado"; break;
			case 7: cout<<"domingo"; break;
		}
	}else{
		cout<<"numero no valido";
	}
	
	return 0;
}

