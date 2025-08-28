#include <stdio.h>

// ==================================================
// Função recursiva para mover peças (Nível Mestre)
// ==================================================
void moverBispoRecursivo(int passos, int i) {
    if (i >= passos)
        return;
    printf("Bispo: Cima-Direita\n");
    moverBispoRecursivo(passos, i + 1);
}

void moverTorreRecursivo(int passos, int i) {
    if (i >= passos)
        return;
    printf("Torre: Direita\n");
    moverTorreRecursivo(passos, i + 1);
}

void moverRainhaRecursivo(int passos, int i) {
    if (i >= passos)
        return;
    printf("Rainha: Esquerda\n");
    moverRainhaRecursivo(passos, i + 1);
}

// ==================================================
// Função principal
// ==================================================
int main() {
    // =============================
    // Nível Novato
    // =============================
    printf("=== NÍVEL NOVATO ===\n");

    int bispoPassos = 5;
    int torrePassos = 5;
    int rainhaPassos = 8;
    int i, j;

    // Movimentação do Bispo (diagonal superior direita)
    for (i = 0; i < bispoPassos; i++) {
        printf("Bispo: Cima-Direita\n");
    }

    // Movimentação da Torre (direita)
    for (i = 0; i < torrePassos; i++) {
        printf("Torre: Direita\n");
    }

    // Movimentação da Rainha (esquerda)
    for (i = 0; i < rainhaPassos; i++) {
        printf("Rainha: Esquerda\n");
    }

    // =============================
    // Nível Aventureiro
    // =============================
    printf("\n=== NÍVEL AVENTUREIRO ===\n");

    // Movimento do Cavalo em L para baixo e esquerda usando loops aninhados
    int lPassos = 2; // L de 2x1
    for (i = 0; i < lPassos; i++) {
        for (j = 0; j < 1; j++) { // segundo loop pode ser while ou do-while
            printf("Cavalo: Baixo-Esquerda\n");
        }
    }

    // =============================
    // Nível Mestre
    // =============================
    printf("\n=== NÍVEL MESTRE ===\n");

    // Bispo recursivo (5 passos diagonal superior direita)
    moverBispoRecursivo(bispoPassos, 0);

    // Torre recursiva (5 passos para direita)
    moverTorreRecursivo(torrePassos, 0);

    // Rainha recursiva (8 passos para esquerda)
    moverRainhaRecursivo(rainhaPassos, 0);

    // Cavalo com loops e condições múltiplas
    printf("Cavalo: L para cima-direita\n");
    int cavaloLin = 0, cavaloCol = 0;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 1; j++) {
            cavaloLin += 2; // sobe 2 casas
            cavaloCol += 1; // direita 1 casa
            if (cavaloLin > 8 || cavaloCol > 8) break; // condição de limite
            printf("Cavalo moveu para posição (%d, %d)\n", cavaloLin, cavaloCol);
        }
    }

    return 0;
}
