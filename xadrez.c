#include <stdio.h>

void moverBispo(int passos, int atual) {
    if (atual == passos) return;
    
    // Loop aninhado para diagonal (cima e direita)
    for (int i = 0; i < 1; i++) {
        printf("Cima\n");
        for (int j = 0; j < 1; j++) {
            printf("Direita\n");
        }
    }
    moverBispo(passos, atual + 1);
}

void moverTorre(int passos, int atual) {
    if (atual == passos) return;
    printf("Direita\n");
    moverTorre(passos, atual + 1);
}

void moverRainha(int passos, int atual) {
    if (atual == passos) return;
    printf("Esquerda\n");
    moverRainha(passos, atual + 1);
}

void moverCavalo() {
    int i = 0, j = 0;
    while (1) {
        if (i >= 1) break;
        printf("Cima\n");
        j = 0;
        while (1) {
            if (j >= 2) break;
            printf("Direita\n");
            j++;
        }
        i++;
    }
}

int main() {
    printf("Movimento do Bispo:\n");
    moverBispo(5, 0);

    printf("\nMovimento da Torre:\n");
    moverTorre(5, 0);

    printf("\nMovimento da Rainha:\n");
    moverRainha(8, 0);

    printf("\nMovimento do Cavalo (L para cima e direita):\n");
    moverCavalo();

    return 0;
}
