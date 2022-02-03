//D1) Faça uma função que calcule o fatorial de um número. Sendo 3! = 3 * 2 * 1 = 6
#include<stdio.h>


 int _fatorial (int num){
 	int i, fator;
 	fator = 1;
 	i=1;
 	 	
 	while ( i<=num ){
 		fator =  fator * i;
 		i++;
	 }
	
;
	return fator;
}
int main (){
	
	int numero;
	printf (" insira um numero inteiro: ");
	scanf ("%d", &numero);

	printf (" fatoria %d!: %d ",numero, _fatorial(numero));

	return 0;
	
} 	
