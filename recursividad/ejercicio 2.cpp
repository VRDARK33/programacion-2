/*programas realizados en ver 5.11 de c++
26/09/2022 brayan andres sanchez 

//9-. Calculo del factorial de un numero entero positivo ingresado por teclado, recordar los máximos por
tipo de dato.*/


#include<iostream>

using namespace std;

class Recursividad {
public:
    int factorial(int fact);
};

int Recursividad::factorial(int fact)
{
    if (fact>0) {
        int valor = fact * factorial(fact - 1);
        return valor;
    }
    else
        return 1;
}


int main(){
	int a;
	cout<<"ingrese un valor para determinar su factorial: :)"<<endl;
	cin>>a;
    Recursividad *recu = new Recursividad();
    cout << "El factorial de "<<a<<" es "<< recu->factorial(a);
    delete recu;
    return 0;
}
