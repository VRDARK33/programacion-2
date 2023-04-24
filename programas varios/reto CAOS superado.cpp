/*
    Nombre: Reto CAOS.                             SUPERADO
    Autor: brayan andres sanchez perez 
    Date: 14/09/22 4:48 pm
    Descripción: El profeor CAOS hizo la proposición de un reto a sus estudiantes el dia 14/09/22 a las 8:45 am ,me presento uno de los estudiantes que fue capaz
    de hacerlo muchas gracias profe besos y abrazos.
    */
#include<iostream>
#include<string.h>
using namespace std;

class vector{
	private:
		int i=0,j;
	    float v[5],may;
	    char my[30];
	    char nombre[5][30];
	
	public:
		void cargarDatos();
		void organizar();
		void imprimir();
		
		
};

void vector::cargarDatos(){
	cout<<"ingrese los nombres y  notas con un decimal. "<<endl;
	for(i=0;i<5;i++){
		cin.getline(nombre[i],'\n');
		cin>>v[i];
		
	}
	
	cout<<"\n";
}

void vector::organizar(){
	for(i=0;i<5;i++){
		for( j=i+1;j<5;j++){
			if(v[j]<v[i]){
				may = v[j];
				v[j] = v[i];
				v[i] = may;
				strcpy(my,nombre[j]);
				strcpy(nombre[j],nombre[i]);
				strcpy(nombre[i],my);
				
			}
		}
	}
}

void vector::imprimir(){
	for(i=0;i<5;i++){
		cout<<nombre[i]<<" "<<v[i]<<endl;
	}
}



int main(){
	
	vector v1;
	v1.cargarDatos();
	v1.organizar();
	v1.imprimir();
	
	return 0;
}


