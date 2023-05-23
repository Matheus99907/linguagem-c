
// matheus tavares cavalcante//	


//programa de matriz 5x5 na diagonal principal//

#include <stdio.h>

#define SIZE 5

void imprimirDiagonalPrincipal(int matriz[SIZE][SIZE]) {
    printf("Diagonal Principal:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d\n", matriz[i][i]);
    }
}

int main() {
    int matriz[SIZE][SIZE];

    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    imprimirDiagonalPrincipal(matriz);

    return 0;
}


