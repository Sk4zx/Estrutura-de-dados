#include <stdio.h>

int main() {
    int matriz[3][3] = {{1, 2, 3}, 
						{4, 5, 6}, 
						{7, 8, 9}};
						
    int i,j, valor, encontrado = 0;

    printf("Digite o valor que deseja buscar na matriz: ");
    scanf("%d", &valor);

    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (matriz[i][j] == valor) {
                printf("O valor %d foi encontrado na posição (%d, %d).\n", valor, i, j);
                encontrado = 1;
            }
        }
    }

    if (encontrado==0) {
        printf("O valor %d não foi encontrado\n", valor);
    }

    return 0;
}

