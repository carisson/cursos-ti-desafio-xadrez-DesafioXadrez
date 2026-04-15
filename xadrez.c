#include <stdio.h>
void moverTorre(int casas) {
  if (casas > 0)
  {
    printf("Direita \n");
    moverTorre(casas - 1);
  };
 
}

void moverRainha(int setor){
if (setor > 0){
    printf("Esquerda\n");
    moverRainha(setor -1);
   }

}
void moverBispo(int casas) {
    if (casas <= 0) {
        printf("Nenhum movimento a fazer.\n");
        return;
    }

    int bsp = 0; // contador para alternar direções

    do {
        printf("Bispo movimento... ");
        if (bsp % 2 == 0) {
            printf("pra cima \n");
        } else {
            printf("direita\n");
        }
        bsp++;
        casas--;
    } while (casas > 0);
}

void moverCavalo(int cav) {
    while (cav--) {
        // Duas casas para cima
        for (int i = 0; i < 2; i++) {
            printf("Cavalo movimento pra\tCima\n");
        }
        // Uma casa para a direita
        printf("Cavalo movimento pra\tDireita\n");
    }
}
// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int torre, bispo = 1, rainha = 1, cavalo = 1;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("Defina quantos movimento o Bispo deve realizar: ");
    scanf("%d", &bispo);
   moverBispo(bispo);

 printf("\n");
    

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
   printf("Defina quantos movimentos a Torre deve realizar: ");
   scanf("%d", &torre);
   printf("Torre movimento\n");
   moverTorre(torre);
  
  printf("\n");
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
  printf("Defina os movimentos da Rainha:");
 scanf("%d", &rainha);
 moverRainha(rainha);

printf("\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("Defina os movimentos do Cavalo: ");
  scanf("%d", &cavalo);
  moverCavalo(cavalo);

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
