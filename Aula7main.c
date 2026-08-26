#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	/*
	int a, b, c, r;
	
	printf("Entre com o valores para A, B, C: " );
	scanf("%d %d %d", &a, &b, &c);
	
	if(a>b){
		r = a;
	}else{
	    r = b;
	}
	if(c>r){
		r = c;
	}
	printf("%d eh o maior", r);
	
	*/
	
	//Ler um número e informar se ele é par ou ímpar//
	
	int n;
	
	printf("Entre com o número: " );
	scanf("%d", &n);
	
	if(n%2 == 0) printf("par"); else printf("ímpar");
	return 0;
}
