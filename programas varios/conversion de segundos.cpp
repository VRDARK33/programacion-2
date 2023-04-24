#include <iostream>
using namespace std;
int main (){
	int sem, d, h, m, s, n;
	cout<<"#segundos: ";
	cin>>n;
	sem=(n>=604800)? n/604800 : 0;
	d=((n%604800)>=86400)? (n%604800)/86400 : 0;
	h=(((n%604800)%86400)>=3600)? ((n%604800)%86400)/3600 : 0;
	m=((((n%604800)%86400)%3600)>=60)? (((n%604800)%86400)%3600)/60 : 0;
	s=(((n%604800)%86400)%3600)%60;
	printf("%i segundos = %i semanas, %i dias, %i horas, %i minutos y %i segundos", n, sem, d, h, m, s);
	return 0;
}
