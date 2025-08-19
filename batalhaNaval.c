#include <stdio.h>

#define N 10

int main() {
    int tabuleiro[N][N] = {0}; // inicializa tudo com 0 (água)

    // navio horizontal
   
    for (int j = 0; j < 3; j++) {
        tabuleiro[5][j] = 3;
    }

    // Navio vertical 
    for (int i = 0; i < 3; i++) {
        tabuleiro[3+i][5] = 3;
    }

    
    // Diagonal principal 
    for (int i = 0; i < 3; i++) {
        tabuleiro[i][i] = 3;
    }

    // Diagonal secundária 
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