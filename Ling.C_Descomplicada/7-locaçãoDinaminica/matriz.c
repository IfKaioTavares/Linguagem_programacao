#include <stdio.h>
#include <stdlib.h>

int valorNaMatriz(int **matriz, int linhas, int colunas, int valor) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (matriz[i][j] == valor) {
                return 1;
            }
        }
    }
    return 0;
}

int main() {
    int linhas, colunas;
    int valorBuscado;

    printf("Informe o número de linhas da matriz: ");
    scanf("%d", &linhas);
    printf("Informe o número de colunas da matriz: ");
    scanf("%d", &colunas);

    int **matriz = (int **)malloc(linhas * sizeof(int *));
    for (int i = 0; i < linhas; i++) {
        matriz[i] = (int *)malloc(colunas * sizeof(int));
    }

    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Informe o valor a ser buscado na matriz: ");
    scanf("%d", &valorBuscado);

    if (valorNaMatriz(matriz, linhas, colunas, valorBuscado)) {
        printf("O valor está na matriz.\n");
    } else {
        printf("O valor não está na matriz.\n");
    }

    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}
