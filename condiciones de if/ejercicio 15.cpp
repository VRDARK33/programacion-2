/*7-. Solicitar el día de la semana, 
imprimir el correspondiente a los planetas del sistema solar, 
lunes=luna, martes=marte, miércoles=mercurio, jueves=júpiter, viernes= venus, 
sábado= Saturno, domingo= sol.*/

#include<iostream>
using namespace std;

int main(){
	int x;
	
	cout<<"ingrese un numero del 1 al 7 para el dia de la semana: "<<endl;
	cin>>x;
	
	if(!(x<=0)||(x>=8)){
		switch(x){
			case 1: cout<<"luna"; break;
			case 2: cout<<"marte"; break;
			case 3: cout<<"mercurio"; break;
			case 4: cout<<"jupiter"; break;
			case 5: cout<<"venus"; break;
			case 6: cout<<"saturno"; break;
			case 7: cout<<"sol"; break;
		}
	}else{
		cout<<"numero no valido";
	}
	
	return 0;
}


