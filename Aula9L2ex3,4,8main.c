#include <stdio.h>
#include <stdlib.h>

/*
tipo nome (Lista de parametros){
         comandos
         comandos...
}
*/

void exec3 (){
	    //Leia um valor que represente uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. A fórmula de conversão é: F = C * (9.0/5.0) + 32.0, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.
	    float tempC, tempF;
        printf("Insira a temperatura em C: \n"); 
		scanf ("%f", &tempC) ;
        tempF = tempF * (9.0/5.0) + 32.0;
        printf("Os %f C° sao %f F \n", tempC, tempF) ;
}

void exec4 (){
	    //Faça um programa que Leia um valor em reais e a cotação do dólar. Em seguida, imprima o valor correspondente em dólares.
	    float reais, dolares, cotacao;
        printf("\nInsira o valor em reais: ");
        scanf("%f", &reais);
        printf("Digite a cotacao do dolar: ");
        scanf("%f", &cotacao);
        dolares = reais / cotacao;
        printf("Valor em dolares: %.2f\n", dolares);
}

void exec8(){
	    //(URI 1019) Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica, e informe-o expresso no formato horas:minutos:segundos.
        int sec, horas, min;
        printf ("Insira o tempo em segundos \n") ;
        scanf ("%d", &sec);
        horas = sec/3600;
        min = (sec - (horas*3600))/60;
        sec = sec - ((horas*3600)+(min*60));
        printf("\t %d: %d: %d", horas, min, sec);
}

int main(int argc, char *argv[]) {
	
	int op;
	printf("Insira qual exercício quer resolver: [2|3|8]\n");
	scanf("%d", &op);
	
	switch(op){
		
	case 3:
		exec3();
    break;    
    
    case 4:
        exec4();
    break;
    
    case 8:
    	exec8();
    break;
    
	}
	
	return 0;
}
