#include<iostream>
using namespace std;

int main(){
/*	
	do{
		switch(i){
		case 1:cout<<"A A A A A A A A A \n"; break;
		case 2:cout<<"  A A A A A A A \n"; break;
		case 3:cout<<"    A A A A A \n" ; break;
		case 4:cout<<"      A A A  \n"; break;
		case 5:cout<<"       A A  \n"; break;
		case 6:cout<<"        A \n"; break;
	}
		i++;
	}while(i<7);

*/

for(int i = 1; i<=5;i++){
	for(int j=1;j<=5-i;j++){
		cout<<" ";
	}
	
	for(int j=1;j<=i;j++){
		cout<<" *";
	}
	
cout<<"\n";
}
for(int i=4;i>=1;i--){
	
	for(int j=i;j<=4;j++){
		cout<<" ";
	}
	
	for(int j=1;j<=i;j++){
		cout<<" *";
	}
	
	cout<<"\n";

}





	return 0;
}



