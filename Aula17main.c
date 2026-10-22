#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que Leia uma palavra , 
e verifique se ela um palindromo

Entrada: ABBA
Saída: é um palindromo

Um palíndromo é uma palavra, frase ou número que pode 
ser lido da esquerda para a direita ou
da direita para a esquerda, 
mantendo exatamente o mesmo sentido*/


int main(int argc, char *argv[]) {
	int i,j,palindromo;
	char palavra[30];
	scanf("%s", &palavra);
	printf("Inserido %s", palavra);
	printf("\n");
	for (i=0; i<30 && palavra[i] != '\0'; i++);
	for(j=i-1, i=0; i<j; i++, j--){
	    if (palavra[i] == palavra[j]) palindromo = 1;
        else {
			    palindromo = 0;
		        break;
		}
    }
    if(palindromo) printf("eh palindromo");
    else printf ("nao eh palindromo");
	return 0;
}
