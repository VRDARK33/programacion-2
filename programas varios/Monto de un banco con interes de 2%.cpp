#include <iostream>
using namespace std;
int main(){
	int m;
	float n, f;
	cout<<"monto: ";
	cin>>n;
	for (m=1; m<=12; m++){
		f=n+(n*0.02);
		n=f;
	}
	cout<<"monto final: " <<f;
	return 0;
}
