//d2) Fa�a uma fun��o que calcule o Fatorial Duplo de um n�mero, que � a multiplica��o dos n�meros �mpares at� o 
//n�mero informado. Sendo 5!! = 1 * 3 * 5 = 15.
#include<stdio.h>
#include <locale.h>

 int _fatorial (int num){
 	
 	int i, fator;
 	fator = 1;
 	i=1;
 	 	
 	while ( i<=num ){
 		fator =  fator * i;
 		i=i+2;
	 }
	
	
	return fator;
}
int main (){
	
	int numero;
	printf (" insira um numero inteiro e impar: ");
	scanf ("%d", &numero);

	printf (" fatoria %d!: %d ",numero, _fatorial(numero));

	return 0;
	
} 	
