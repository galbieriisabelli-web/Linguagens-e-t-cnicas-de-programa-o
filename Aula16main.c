#include <stdio.h>
#include <stdlib.h>

/*3) Implemente um programa que leia um número n [com n positivo & n ‹= 64] e mostre na tela o seu
valor em base binária (bits). */

int main(int argc, char*argv){
    int n, aux, mult=1; // 8 + 2 = 10 >>1010
    scanf("%d", &n);
    aux=0;
    while(n>0){
   	    aux=aux+(n%2)*mult;
        n=n/2;
        mult=mult*10;
    }
    printf("%d", aux);
    
	return 0;
}
