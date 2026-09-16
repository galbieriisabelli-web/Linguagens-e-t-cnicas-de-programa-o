#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int A, B, C, D, aux;

    printf("Digite um valor para A: ");
    scanf("%d", &A);
    
    printf("Digite um valor para B: ");
    scanf("%d", &B);
    
    printf("Digite um valor para C: ");
    scanf("%d", &C);
    
    printf("Digite um valor para D: ");
    scanf("%d", &D);

    aux = A;
    A = C;
    C = D;
    D = B;
    B = aux;

    printf(" C= %d A= %d D= %d B= %d", A, B, C, D);

	return 0;
}
