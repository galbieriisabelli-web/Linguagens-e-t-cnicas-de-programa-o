#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, j, k, n, r;
	
	// vamos relembrar algumas estruturas que vimos essa semana
	
    /*Laço for repete um conjunto de instruções, de um valor
	    inicial (inicialização), até uma detrminada condição,
	    realizando uma operação (incremento) a cada execução [sempre]
	*/
	for (i=0, j=1; i<10; i++, j--){
        printf("esse é o laço FOR ");    
    }
    
    /*Laço WHILE (enquanto), que testa se uma condição é verdadeira,
	caso seja executa um bloco de comandos repetindo o processo
	enquanto a condição for avaliada com verdadeira.*/
	  
    while (i<10){
        printf("%d, laco WHILE", i);
        if(n%2 == 0) i++;
        n++;
    }
    
    /* Laco DO WHILE, semelhante ao Laço while, porém antes de
	realizar a verificação ele executa o conjunto de instruções para
	após aa execução realizar a verificação da condição*/
	do{
		printf("%d, laco DO", i);
		if(n%2 == 0) i++;
		n++;
	}   while (i<10);
	
	
	
	
	//Exercício 1;
	/*Elabore um programa que permita a entrada de 3 valores.
	E conte do primeiro valor inserido, até o segundo valor, com o 
	passo da contagem dado pelo terceiro valor  */
	//ex: 1,8,2 >> contar de 1 a 8, com passo 2 = 3,5,7.
	
	
	int ini, fim, passo;
    printf(" entre com o valor inicial, final, e passo");
    scanf("%d %d %d", &ini, &fim, &passo);
    if(ini<fim){
       while(ini<fim){
       	   printf("|%d|", ini);
       	   ini += passo;
	   }
    }else{
       while(ini<fim){
       	   printf("|%d|", ini);
       	   ini -= passo;
       }
    }
    
	//Exercício 2;
	/* Faça um programa que receba um numero n e realize a some dos
	n primeiros termos da sequencia definida como:
	[S = 1/2; 1/4; 1/8 1/16... N] */
	
	/*
	printf("\nDigite a quantidade de termos: ");
    scanf("%d", &n);

    if(n <= 0){
        printf("Digite um numero positivo.\n");
    } else {
        for(i=1; i<=n; i++){
            termo = termo / 2;
            soma = soma + termo;
        }

        printf("A soma da sequencia e: %.6f\n", soma);
    }
	*/
	
	//Exercício 3;
	/*Crie um programa que exiba na tela, o triangulo de pascal. */
	
	/*
	printf("\nTRIANGULO DE PASCAL\n");

    printf("Digite o numero de linhas: ");
    scanf("%d", &n);

    for(i=0; i<n; i++){

        r = 1;

        for(j=0; j<n-i-1; j++){
            printf("  ");
        }

        for(k=0; k<=i; k++){
            printf("%4d", r);
            r = r * (i-k) / (k+1);
        }

        printf("\n");
    }
	*/
	
	return 0;
}
