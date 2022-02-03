//D3) Faça uma função que calcule o Super Fatorial. Sendo sf(4) = 1! * 2! * 3! * 4! = 288.
#include<stdio.h>


 int _fatorial (int num){
 	int i,j, fator,inter;
 	fator = 1;
 	inter = 1;
 	j=1;
 	i=1;
 		
 	while ( i<=num ){
 		while (j<=i){
		 
 			inter = inter * j;
	 		j++;}
 		fator =  fator* inter;
 		i++;
	 }
	
	return fator;
}
int main (){
	
	int numero;
	printf (" insira um numero inteiro: ");
	scanf ("%d", &numero);

	printf (" super fatorial %d!: %d ",numero, _fatorial(numero));

	return 0;
	
} 	
