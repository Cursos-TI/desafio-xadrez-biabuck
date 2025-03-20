#include <stdio.h>

void torre(int casas){

    if (casas > 0)
    {
        printf("Direita \n");
        torre(casas - 1);
    }
}

void bispo(int casas){

    if (casas > 0)
    {
        printf("Direita, Cima \n");
        bispo(casas - 1);
    }
}

void rainha(int casas){

    if (casas > 0)
    {
        printf("Esquerda \n");
        rainha(casas - 1);
    }
}

int main(){

    int pecas;
    
    printf("Bem-Vindo ao jogo de Xadrez!!! \n");
    printf("Escolha uma peça: \n");
    printf("1. Torre \n");
    printf("2. Bispo \n");
    printf("3. Rainha \n");
    printf("4. Cavalo \n");
    printf("Digite sua escolha: ");
    scanf("%d", &pecas);
    printf("\n");

    switch (pecas)
    {
    case 1:
        torre(5);
    break;

    case 2:
        bispo(5);
    break;

    case 3:
        rainha(8);
    break;

    case 4:
        for (int i = 1, j = 1; i <= 1; i++)
        {
            while (j <= 2)
            {
                printf("Cima \n");
                j++;
            }
            
            printf("Direita \n");
        }
    break;

    default:
        printf("Opção inválida \n");
    break;
    }

return 0;
}