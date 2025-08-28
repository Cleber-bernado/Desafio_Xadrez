#include <stdio.h>
#include <stdlib.h> // Necessário para abs()
#include <time.h>

int main() {
    int i, j; // variáveis para loops
    srand(time(NULL)); // inicializa gerador de números aleatórios

    /*
     * ============================================
     * NÍVEL NOVATO - Tabuleiro pequeno (5x5)
     * Dois navios: um vertical e outro horizontal
     * ============================================
     */
    printf("=== NÍVEL NOVATO ===\n");
    int tabuleiroNovato[5][5];
    
    // Inicializa tabuleiro com zeros
    for (i = 0; i < 5; i++)
        for (j = 0; j < 5; j++)
            tabuleiroNovato[i][j] = 0;

    // Navio vertical na coluna 1 (linha 1 a 3)
    for (i = 1; i <= 3; i++) {
        tabuleiroNovato[i][1] = 3;
        printf("Navio vertical: (%d, %d)\n", i, 1);
    }

    // Navio horizontal na linha 4 (coluna 2 a 4)
    for (j = 2; j <= 4; j++) {
        tabuleiroNovato[4][j] = 3;
        printf("Navio horizontal: (%d, %d)\n", 4, j);
    }

    /*
     * ============================================
     * NÍVEL AVENTUREIRO - Tabuleiro maior (10x10)
     * Quatro navios: vertical, horizontal e dois diagonais
     * ============================================
     */
    printf("\n=== NÍVEL AVENTUREIRO ===\n");
    int tabuleiroAventureiro[10][10];

    // Inicializa tabuleiro
    for (i = 0; i < 10; i++)
        for (j = 0; j < 10; j++)
            tabuleiroAventureiro[i][j] = 0;

    // Navio vertical na coluna 0 (linha 0 a 3)
    for (i = 0; i <= 3; i++)
        tabuleiroAventureiro[i][0] = 3;

    // Navio horizontal na linha 9 (coluna 5 a 8)
    for (j = 5; j <= 8; j++)
        tabuleiroAventureiro[9][j] = 3;

    // Navio diagonal principal (0,0) até (3,3)
    for (i = 0; i <= 3; i++)
        tabuleiroAventureiro[i][i] = 3;

    // Navio diagonal secundária (0,9) até (3,6)
    for (i = 0; i <= 3; i++)
        tabuleiroAventureiro[i][9-i] = 3;

    // Exibe todo o tabuleiro
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++)
            printf("%d ", tabuleiroAventureiro[i][j]);
        printf("\n");
    }

    /*
     * ============================================
     * NÍVEL MESTRE - Habilidades Especiais
     * Matrizes para padrões cone, cruz e octaedro
     * ============================================
     */
    printf("\n=== NÍVEL MESTRE ===\n");

    int cone[5][5];
    int cruz[5][5];
    int octaedro[5][5];

    // Inicializa todas as matrizes com 0
    for (i = 0; i < 5; i++)
        for (j = 0; j < 5; j++) {
            cone[i][j] = 0;
            cruz[i][j] = 0;
            octaedro[i][j] = 0;
        }

    // Habilidade Cone
    printf("Cone:\n");
    for (i = 0; i < 5; i++)
        for (j = 0; j < 5; j++)
            if (j >= 2-i && j <= 2+i)
                cone[i][j] = 1;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++)
            printf("%d ", cone[i][j]);
        printf("\n");
    }

    // Habilidade Cruz
    printf("\nCruz:\n");
    for (i = 0; i < 5; i++) {
        cruz[2][i] = 1; // linha central
        cruz[i][2] = 1; // coluna central
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++)
            printf("%d ", cruz[i][j]);
        printf("\n");
    }

    // Habilidade Octaedro
    printf("\nOctaedro:\n");
    for (i = 0; i < 5; i++)
        for (j = 0; j < 5; j++)
            if (abs(i-2) + abs(j-2) <= 2)
                octaedro[i][j] = 1;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++)
            printf("%d ", octaedro[i][j]);
        printf("\n");
    }

    return 0;
}
