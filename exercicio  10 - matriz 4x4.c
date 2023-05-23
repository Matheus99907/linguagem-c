
// matheus tavares cavalcante//	


// matriz 4x4 de valores maiores que 10//

#include <stdio.h>

#define ROWS 4
#define COLS 4

void imprimirMatriz(int matriz[ROWS][COLS]) {
    printf("Matriz:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz[ROWS][COLS];

    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    imprimirMatriz(matriz);

    return 0;
}

