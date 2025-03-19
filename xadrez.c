#include <stdio.h>

int main(){

    int peça;
    int i = 1;
    int direcaoB; 

    printf("Bem-Vindo ao jogo de Xadrez!!! \n");
    printf("Escolha uma peça: \n");
    printf("1. Torre \n");
    printf("2. Bispo \n");
    printf("3. Rainha \n");
    printf("Digite sua escolha: ");
    scanf("%d", &peça);

    switch (peça)
    {
        //Código da Torre
        case 1: 
            for (int i = 0; i < 5; i++)
            {
                printf("Direita \n");
            }
        break;

        //Código do Bispo
        case 2:
        printf("Escolha uma direção: \n");
        printf("1. Cima, Direita \n");
        printf("2. Cima, Esquerda \n");
        printf("3. Baixo, Direita \n");
        printf("4. Baixo, Esquerda\n");
        printf("Digite sua escolha: ");
        scanf("%d", &direcaoB);

            //Escolha de direção do Bispo
            switch (direcaoB)
            {
                case 1:
                    while (i <= 5)
                    {
                        printf("Cima, Direita \n");
                        i++;
                    }
                    break;

                case 2:
                    while (i <= 5)
                    {
                        printf("Cima, Esquerda \n");
                        i++;
                    }
                    break;

                case 3:
                    while (i <= 5)
                    {
                        printf("Baixo, Direita \n");
                        i++;
                    }
                    break;

                case 4:
                    while (i <= 5)
                    {
                        printf("Baixo, Esquerda \n");
                        i++;
                    }
                    break;
                        
                default:
                    printf("Opção inválida");
                break;
            }
        break;


        //Código da Rainha
        case 3: 
            do
            {
                printf("Esquerda \n", i);
                i++;
            } while (i <= 8);
        break;
    
        default:
        printf("Opção inválida");
            break; 
    }

return 0;
}

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    
