#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* Declaracao das variaveis */
    int idade, anoAtual, anoNascimento;

    /* Entrada dos dados */
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

    /* Calculo do ano de nascimento */
    anoNascimento = anoAtual - idade;

    /* Exibicao do resultado */
    printf("O ano de nascimento e: %d\n", anoNascimento);

    return 0;
}