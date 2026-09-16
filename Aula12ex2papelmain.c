#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	float valorEmpresa, precoAcao, vpa, pvp;
    int quantidadeAcoes;

    printf("Digite o valor patrimonial da empresa: R$ ");
    scanf("%f", &valorEmpresa);

    printf("Digite a quantidade de acoes disponiveis: ");
    scanf("%d", &quantidadeAcoes);

    printf("Digite o preco atual da acao: R$ ");
    scanf("%f", &precoAcao);

    vpa = valorEmpresa / quantidadeAcoes;

    pvp = precoAcao / vpa;

    printf("\nVPA = %.2f\n", vpa);
    printf("P/VP = %.2f\n", pvp);

    if (pvp < 0.0) {
        printf("Classificacao: Pessima\n");
    }
    else if (pvp < 0.8) {
        printf("Classificacao: Otima\n");
    }
    else if (pvp <= 1.2) {
        printf("Classificacao: Indiferente\n");
    }
    else if (pvp <= 2.0) {
        printf("Classificacao: Boa\n");
    }
    else {
        printf("Classificacao: Ruim\n");
    }
	
	
	return 0;
}
