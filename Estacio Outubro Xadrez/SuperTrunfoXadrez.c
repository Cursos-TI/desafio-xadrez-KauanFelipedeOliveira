#include <stdio.h>

int main() {
    // ===============================
    // Simulação de Movimentos no Xadrez
    // Peças: Torre, Bispo e Rainha
    // Estruturas usadas: for, while, do-while
    // ===============================

    int i; // variável de controle

    // =====================================
    // 1. TORRE - movimento horizontal (FOR)
    // =====================================
    // A torre move-se em linha reta, horizontalmente ou verticalmente.
    // Aqui simularemos 5 casas para a direita.

    printf("=== Movimento da Torre ===\n");
    for (i = 1; i <= 5; i++) {
        printf("Casa %d: Direita\n", i);
    }

    // =====================================
    // 2. BISPO - movimento diagonal (WHILE)
    // =====================================
    // O bispo move-se na diagonal. Vamos simular
    // 5 casas na diagonal superior direita.

    printf("\n=== Movimento do Bispo ===\n");
    i = 1;
    while (i <= 5) {
        printf("Casa %d: Cima, Direita\n", i);
        i++;
    }

    // =====================================
    // 3. RAINHA - movimento em todas as direções (DO-WHILE)
    // =====================================
    // A rainha combina os movimentos da torre e do bispo.
    // Aqui simularemos 8 casas para a esquerda.

    printf("\n=== Movimento da Rainha ===\n");
    i = 1;
    do {
        printf("Casa %d: Esquerda\n", i);
        i++;
    } while (i <= 8);

    // =====================================
    // Fim do programa
    // =====================================
    printf("\nSimulação concluída!\n");

    return 0;
}
