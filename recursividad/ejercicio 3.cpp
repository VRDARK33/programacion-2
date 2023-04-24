//serie de fibonachi
#include<stdio.h>

class fibonachi{
	public: 
	int fibo(int f);
};

int main(){
	int a;
	printf("ingrese el tamaño de fibonachi: ");
	scanf("%d",&a);
	fibonachi *fib = new fibonachi();
	fib->fibo(a);
	for(int i;i<=a;i++){
		printf("%d ",fib->fibo(i));
	}
	delete fib;
	return 0;
}

int fibonachi::fibo(int f){
	if(f<2){
		return f;
	}else{
		return fibo(f-1)+ fibo(f-2);
	}
}
