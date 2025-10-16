#include <stdio.h>

int main() {
    // ===============================
    // Simulação de Movimentos no Xadrez
    // Peças: Torre, Bispo, Rainha e Cavalo
    // Estruturas: for, while, do-while, loops aninhados
    // ===============================

    int i, j; // variáveis de controle para os loops

    // =====================================
    // 1. TORRE - movimento horizontal (FOR)
    // =====================================
    printf("=== Movimento da Torre ===\n");
    for (i = 1; i <= 5; i++) {
        printf("Casa %d: Direita\n", i);
    }

    // =====================================
    // 2. BISPO - movimento diagonal (WHILE)
    // =====================================
    printf("\n=== Movimento do Bispo ===\n");
    i = 1;
    while (i <= 5) {
        printf("Casa %d: Cima, Direita\n", i);
        i++;
    }

    // =====================================
    // 3. RAINHA - movimento horizontal (DO-WHILE)
    // =====================================
    printf("\n=== Movimento da Rainha ===\n");
    i = 1;
    do {
        printf("Casa %d: Esquerda\n", i);
        i++;
    } while (i <= 8);

    // =====================================
    // 4. CAVALO - movimento em “L” (FOR + WHILE)
    // =====================================
    // O Cavalo move-se em formato de "L":
    // 2 casas em uma direção (aqui: para baixo)
    // e 1 casa perpendicularmente (aqui: para a esquerda)
    // Usaremos um loop for e um loop while aninhado.

    printf("\n=== Movimento do Cavalo ===\n");

    int movimentosBaixo = 2;
    int movimentosEsquerda = 1;

    // Loop externo: controla o movimento vertical (para baixo)
    for (i = 1; i <= movimentosBaixo; i++) {
        printf("Casa %d: Baixo\n", i);
    }

    // Loop interno (aninhado): movimento horizontal (para a esquerda)
    j = 1;
    while (j <= movimentosEsquerda) {
        printf("Casa %d: Esquerda\n", i); // i mantém o valor após o for (3)
        j++;
    }

    // =====================================
    // Fim da simulação
    // =====================================
    printf("\nSimulação concluída!\n");

    return 0;
}
