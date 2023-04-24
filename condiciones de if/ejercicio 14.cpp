/*10. Validar que dada una fecha, esta sea correcta. Para que una fecha sea correcta es
necesario:

? El año debe ser mayor que cero.
? El mes debe estar entre 1 y 12.
? Dependiendo del mes que sea, el día debe estar dentro de los límites válidos. 
*/
#include<iostream>
using namespace std;


int main(){
	int ano, mes, dia;
	
	cout<<"ingrese el ano";cin>>ano;
	cout<<"ingrese el  mes";cin>>mes;
	cout<<"ingrese el dia";cin>>dia;
	
	(ano>0)?cout<<"ano correcto"<<endl:cout<<"ano incorrecto"<<endl;
	(mes>=1 && mes<=12)?cout<<"mes correcto"<<endl:cout<<"mes incorrecto"<<endl;
	(((mes==1)||(mes==3)||(mes==5)||(mes==7)||(mes==8)||(mes==10)||(mes==12))&&(dia>=1 && dia<=31))?cout<<"dia correcto":(((mes==4)||(mes==6)||(mes==9)||(mes==11))&&(dia>=1 && dia<=30))?cout<<"dia correcto":((mes==2)&&(dia>=1 && dia<=28))?cout<<"dia correcto":cout<<"dia incorrecto";
	
	
	return 0;
}


