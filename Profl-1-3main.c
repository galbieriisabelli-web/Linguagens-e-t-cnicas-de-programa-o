#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
    //LISTA 1 EXERCÍCIO 3// 
    
int main(int argc, char *argv[]) {
	
    /*
    
	int n, resultado, bit_64, bit_32, bit_16, bit_8, bit_4, bit_2;
	printf("Entre com o valor para a conversao: ");
	scanf("%d",&n);  //n=52
	
	bit_64 = n%2; //0
	resultado = n/2; //26
	// 52%2 = 0 //
	bit_32 = resultado%2; //0
	resultado = resultado/2; //26
	
	bit_16 = resultado%2; //0
	resultado = resultado/2; //26
	
	bit_8 = resultado%2; //0
	resultado = resultado/2; //26
	
	bit_4 = resultado%2; //0
	resultado = resultado/2; //26
	
	bit_2 = resultado%2; //0
	resultado = resultado/2; //26
	
	printf("O numero %d em binário = %d%d%d%d%d%d%d", n,
	         resultado%2, bit_2, bit_4, bit_8, bit_16, bit_32, bit_64);
             
    */ 
    
    //Lista 1 EXERCÍCIO 8//
    
    int x1, x2, y1, y2, p1, p2;
    float dist;

    
    printf("Insira as coordenadas do ponto P1: ");
    scanf("%d %d", &x1, &y1);

    printf("Insira as coordenadas do ponto P2: ");
    scanf("%d %d", &x2, &y2);   
    
    p1 = pow(x2-x1, 2);  //pow raíz
    p2 = pow(y2-y1, 2);
    
    dist = sqrt(p1+p2);
    
    printf("Distancia (%f)",dist);
	  
	return 0;
}
