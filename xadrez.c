#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int torre, bispo = 1, rainha = 1, cavalo = 1;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    do
 {
   printf("Bispo movimento...");
   if (bispo %2 == 0){
    printf("pra cima \n");
   }else{
    printf("pra direita\n");
   }
   bispo++;
 } while (bispo <= 10);

printf("\n");
    

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
     for (torre = 0; torre < 5; torre++)
 {
   printf("Torre movimeto à direita!!\n");

 }

 printf("\n");
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    while (rainha <=8)
 {
    printf("Rainha movimento à esquerda\n");
    rainha++;
 }

 printf("\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
     while (cavalo --)
    {
      
       for (int i = 0; i < 2; i++)
       {
        printf("Cavalo Movimento pra\t");
        printf("Cima\n");
       }

      printf("Cavalo Movimento pra\t");
      printf("Direita\n");
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
