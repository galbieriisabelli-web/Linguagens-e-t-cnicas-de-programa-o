#include <stdio.h>
#include <stdlib.h>

float calc_inss (float salario){
	// implementa o exercício 07
	if(salario<= 1412.00) return salario*0.075;
	else if(salario <= 2666.68)return salario*0.09;
	else if(salario <= 4000.00) return salario*0.12;
	else return salario *0.14;    
}

int main(int argc, char *argv[]) {
	
	float salario, desconto;
	scanf("%f", &salario);
	
	desconto = calc_inss(salario);
	printf("%f || %f", desconto, calc_inss(salario));
	
float clac_irpf(){
	// implementa o exercício 08
	
}
	
int main(int argc, char *argv[]) {
	// implementa o exercício 09,utilizando as funções dos exercícios anteriores

	return 0;
}
