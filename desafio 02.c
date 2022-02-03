//d2) Faça uma função que calcule o Fatorial Duplo de um número, que é a multiplicação dos números ímpares até o 
//número informado. Sendo 5!! = 1 * 3 * 5 = 15.
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
