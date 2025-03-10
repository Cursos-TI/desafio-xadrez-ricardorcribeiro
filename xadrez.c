#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
void movimentacaoRainha(int movimentosRainha)
{
    if(movimentosRainha > 0)
    {
        movimentacaoRainha(movimentosRainha -1);
        printf("Esquerda %d\n", movimentosRainha);
    }
}

void movimentacaoTorre(int movimentosTorre)
{
    if(movimentosTorre > 0)
    {
        movimentacaoTorre(movimentosTorre -1);
        printf("Direita %d\n", movimentosTorre);
    }
}

void movimentacaoBispo(int movimentosBispo)
{
    if(movimentosBispo <= 5)
    {
        for (int i = 0; i < 1; i++)
        {
            printf("Cima\n");
            for (int z = 0; z < 1; z++)
            {
                printf("Direita %d\n", movimentosBispo);
            }
        }
        movimentacaoBispo(movimentosBispo +1);
    }
}

int main()
{
    int contadorCavaloDireita, contadorCavaloCima;

    // chamando a função recursiva movimentacaoRainha para imprimir a movimentação da rainha
    movimentacaoRainha(8);

    // espaçamento para melhor visualização
    printf("--------------#--------------\n");

    // chamando a função recursiva movimentacaoTorre para imprimir a movimentação da torre
    movimentacaoTorre(5);

    // espaçamento para melhor visualização
    printf("--------------#--------------\n");

    // chamando a função recursiva movimentacaoBispo para imprimir a movimentação do bispo
    movimentacaoBispo(1);


    // espaçamento para melhor visualização
    printf("--------------#--------------\n");

    for (contadorCavaloDireita = 1, contadorCavaloCima = 1; contadorCavaloCima <= 2 && contadorCavaloDireita <= 2 ; contadorCavaloDireita++)
    {
        //loop mais interno onde faz a movimentação do cavalo para cima
        for (contadorCavaloCima = 1; contadorCavaloCima < 3; contadorCavaloCima++)
        {
            //imprime a movimentação do cavalo para cima
            printf("Cima\n");
            //validação de o codigo deve imprimir a movimentação para a direita ou se deve passar para o proximo loop
            if (contadorCavaloCima != 2)
                continue;
            printf("Direita\n");
        }
    }

    return 0;
}
