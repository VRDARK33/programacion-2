/*9. Lea un entero de un dígito y diga la letra (mayúscula y minúscula), 
correspondiente a ese dígito, suponiendo que el número 0 corresponde a la letra 'A' - 'a'. */

int main(){
	int x;
	printf("ingrese u numero entero de un digito: "); scanf("%d",&x);
	
	switch(x){
		case 0: printf("a y A"); break;
		case 1: printf("b y B"); break;
		case 2: printf("c y C"); break;
		case 3: printf("d y D"); break;
		case 4: printf("e y E"); break;
		case 5: printf("f y F"); break;
		case 6: printf("g y G"); break;
		case 7: printf("h y H"); break;
		case 8: printf("i y I"); break;
		case 9: printf("j y J"); break;
		default: printf("numero no valido"); break;
		
	}
	
	return 0;
}



