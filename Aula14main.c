#include <stdio.h>
#include <stdlib.h>

/* leia um valor par e mostre sua raiz */

int main(int argc, char *argv[]) {
	int valor[10],i, cont;
	
	for(i=0; i<10; i++){
		scanf("%d", &valor[i]);
	}
	i=0;
	
	printf("Acabou o for");
	printf("iniciando o While");
	while (i<10){
		scanf("%d", &valor[i]);
		i++;
	}
	
	i=0;
	do{
		printf("%d",valor[i]);
		i++;
	}while(i<10);
	
	
	/*
	printf("Insira um valor par");
	scanf("%d", &valor);
	while (valor%2 == 1){
	    printf("valor inserido impar, \n insira um novo valor: \n");
	    scanf("%d", &valor);
    }
    
    do {
    	printf("Insira um valor par");
    	scanf("%d", &valor);
	}while (valor%2 == 1);
	
	printf("a raiz de %d = %f", valor, sqrt(valor));
	return 0;*/
}

