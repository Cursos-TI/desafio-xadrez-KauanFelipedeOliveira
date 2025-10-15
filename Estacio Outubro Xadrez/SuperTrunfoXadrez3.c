#include <stdio.h>

// =======================================
// Funções recursivas para Torre, Bispo e Rainha
// =======================================

// Função recursiva para a Torre (movimento em linha reta)
void moverTorre(int casasRestantes) {
    if (casasRestantes == 0) return; // condição de parada
    printf("Direita\n");
    moverTorre(casasRestantes - 1); // chamada recursiva
}

// Função recursiva e aninhada para o Bispo (diagonal)
void moverBispo(int vertical, int horizontal) {
    // loop externo (vertical)
    for (int i = 1; i <= vertical; i++) {
        // loop interno (horizontal)
        for (int j = 1; j <= horizontal; j++) {
            printf("Cima, Direita\n");
        }
    }

    // chamada recursiva para reduzir movimentos restantes
    if (vertical > 1 && horizontal > 1)
        moverBispo(vertical - 1, horizontal - 1);
}

// Função recursiva para a Rainha (movimento em linha reta)
void moverRainha(int casasRestantes) {
    if (casasRestantes == 0) return; // condição de parada
    printf("Esquerda\n");
    moverRainha(casasRestantes - 1); // chamada recursiva
}

// =======================================
// Função para o Cavalo (loops complexos)
// =======================================
// Movimento em “L”: duas casas para cima e uma para a direita.
// Usaremos loops aninhados com múltiplas condições, além de break/continue.
void moverCavalo() {
    printf("=== Movimento do Cavalo ===\n");
    int i, j;

    for (i = 1; i <= 2; i++) {  // movimento vertical (para cima)
        if (i == 2) {
            printf("Casa %d: Cima\n", i);
            continue; // segue para a próxima iteração
        }
        printf("Casa %d: Cima\n", i);
    }

    // movimento horizontal (para a direita)
    for (j = 1; j <= 1; j++) {
        if (j > 1) break; // condição desnecessária mas exemplifica o uso de break
        printf("Casa %d: Direita\n", i + j - 1);
    }
}

// =======================================
// Função principal
// =======================================
int main() {
    // ===============================
    // Simulação de Movimentos no Xadrez
    // Nível Mestre - Recursividade e Loops Avançados
    // ===============================

    printf("=== Movimento da Torre ===\n");
    moverTorre(5); // 5 casas para a direita

    printf("\n=== Movimento do Bispo ===\n");
    moverBispo(3, 3); // movimento diagonal recursivo

    printf("\n=== Movimento da Rainha ===\n");
    moverRainha(8); // 8 casas para a esquerda

    printf("\n=== Movimento do Cavalo ===\n");
    moverCavalo(); // movimento em “L” com loops complexos

    printf("\nSimulação concluída com sucesso!\n");

    return 0;
}
