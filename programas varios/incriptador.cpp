#include<stdio.h>
#include<string.h>
#include<conio.h>


class incriptar{
	private:
		int can;
		int t;
		int x[];
		char y[1000];
		char y2[1000];
	
	public:
		void elegir();
		void cargar();
		void codigo();
};

int main(){
	incriptar r;
	r.elegir();
	r.cargar();
	r.codigo();
	getch();
	return 0;
}

void incriptar::elegir(){
	printf("que desea realizar con el incriptador: \n");
	printf("1)cifrar texto.\n");
	printf("2)decifrar codigo. \n");
	scanf("%d",&t);
	fflush(stdin);
}

void incriptar::cargar(){
	
	switch(t){
		case 1: printf("ingrese la frase: ");fgets(y,1000,stdin); printf("\n"); break;
		
		case 2: printf("ingrese la cantidad de nuemros: \n");
		        scanf("%d",&can);
		        for(int i=0;i<can;i++){
		        	scanf("%d",&x[i]);
				}break;
	}
}

void incriptar::codigo(){
	switch(t){
		case 1: can=strlen(y);
		        for(int i=0;i<can;i++){
		        	y2[i]=y[i];
				}
				printf("texto cifrado: ");
				for(int i=0;i<can-1;i++){
		        	x[i]=y2[i];
		        	printf("%d ",x[i]);
				}printf("\n");
				 printf("cantidad %d",can-1);
				break;
	    case 2: printf("codigo decifrado: ");
		        for(int i=0;i<can;i++){
		        	y[i]=x[i];
		        	printf("%c",y[i]);
				}
				break;
	}
}
