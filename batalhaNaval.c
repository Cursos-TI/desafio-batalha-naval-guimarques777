#include <stdio.h>

#define N 10

int main() {
    int tabuleiro[N][N] = {0}; // inicializa tudo com 0 (água)

    // --- Dois navios horizontais/verticais ---
    // Navio horizontal (linha 2, colunas 1 até 4)
    for (int j = 0; j < 3; j++) {
        tabuleiro[5][j] = 3;
    }

    // Navio vertical (coluna 6, linhas 5 até 8)
    for (int i = 0; i < 3; i++) {
        tabuleiro[3+i][5] = 3;
    }

    // --- Dois navios diagonais ---
    // Diagonal principal (linha = coluna)
    for (int i = 0; i < 3; i++) {
        tabuleiro[i][i] = 3;
    }

    // Diagonal secundária (linha + coluna = 9)
    for (int i = 0; i < 3; i++) {
        tabuleiro[i][9 - i] = 3;
    }

    // --- Exibir tabuleiro ---
    printf("\n--- Tabuleiro Batalha Naval ---\n\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%2d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}