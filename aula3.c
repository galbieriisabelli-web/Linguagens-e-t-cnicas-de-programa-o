#include <stdio.h>
#include <stdlib.h>
#define pi 3.141592

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float area, raio;
	
	printf("Insira o raio do circulo");
	scanf("%f", &raio);
	
	//area = M_PI* pow(raio,2);
	area = pi*(raio*raio);
	
	
	printf("A Area do circulo de raio %f = %f", raio, area);
	
	
	return 0;
}
