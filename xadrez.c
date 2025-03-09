#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main()
{

    int contadorRainha, contadorTorre, contadorBispo, contadorCavaloEsquerda, contadorCavaloBaixo;

    // utilizando for para fazendo o contador da rainha ir de 1 a 8 para imprimir as direções 8 vezes
    for (contadorRainha = 1; contadorRainha <= 8; contadorRainha++)
    {
        printf("Esquerda %d\n", contadorRainha);
    }

    // espaçamento para melhor visualização
    printf("--------------#--------------\n");

    // inicializando o contador do bispo
    contadorBispo = 1;
    // utilizando while para fazer o contador da torre ir de 1 a 5 para imprimir as direções 5 vezes
    while (contadorBispo <= 5)
    {
        printf("Cima Direita %d\n", contadorBispo);
        contadorBispo++;
    }

    // espaçamento para melhor visualização
    printf("--------------#--------------\n");

    // inicializando o contador da torre
    contadorTorre = 1;
    // utilizando do while para fazer o contador da torre ir de 1 a 5 para imprimir as direções 5 vezes
    do
    {
        printf("Direita %d\n", contadorTorre);
        contadorTorre++;
    } while (contadorTorre <= 5);

    // espaçamento para melhor visualização
    printf("--------------#--------------\n");

    for (contadorCavaloEsquerda = 1; contadorCavaloEsquerda <= 1; contadorCavaloEsquerda++)
    {
        // inicializando o contador do cavalo Baixo
        contadorCavaloBaixo = 1;

        while (contadorCavaloBaixo <= 2)
        {
            printf("Baixo, ");
            contadorCavaloBaixo++;
        }

        printf("Esquerda\n");
    }

    return 0;
}
