
// matheus tavares cavalcante//	


//programa de matriz 4x4 com a função de localizar o maior numero entre eles//

#include <stdio.h>

#define ROWS 4
#define COLS 4

void encontrarMaiorNumero(int matriz[ROWS][COLS]) {
    int maior = matriz[0][0];
    int linhaMaior = 0;
    int colunaMaior = 0;

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                linhaMaior = i;
                colunaMaior = j;
            }
        }
    }

    printf("O maior número é %d e está localizado na linha %d e coluna %d.\n", maior, linhaMaior, colunaMaior);
}

int main() {
    int matriz[ROWS][COLS];

    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    encontrarMaiorNumero(matriz);

    return 0;
}


