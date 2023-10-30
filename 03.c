#include <stdio.h>

int main() {
    int matriz1[50][50], matriz2[50][50];
    int linhas, colunas, inversas;

    printf("Insira a quantidade de linhas: ");
    scanf("%d", &linhas);

    printf("Insira a quantidade de colunas: ");
    scanf("%d", &colunas);

    printf("\nInsira os valores da matriz 1: \n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("\nInsira os valores da matriz 2: \n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &matriz2[i][j]);
        }
    }
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz1[i][j] + matriz2[i][j] != 0) {
                inversas = 0; 
                break; 
            }
        }
        if (inversas == 0) {
            break; 
        }
    }

    if (inversas == 1) {
        printf("As matrizes sao inversas!\n");
    } else {
        printf("As matrizes nao sao inversas!\n");
    }
    
    getch();

    return 0;
}
