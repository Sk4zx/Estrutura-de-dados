#include <stdio.h>
#include <stdlib.h>


void insertionSort(int vet[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = vet[i];
        j = i - 1;
        
        while (j >= 0 && vet[j] > key) {
            vet[j + 1] = vet[j];
            j = j - 1;
        }
        vet[j + 1] = key;
    }
}

int main() {
    int matriz[2][2] = {{43, 21}, {3, 19}};
    int i,j,vetor[4];

    // Copiar a matriz para o vetor
    int index = 0;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            vetor[index] = matriz[i][j];
            index++;
        }
    }

    
    insertionSort(vetor, 4);

    // Converter vetor de volta para a matriz
    index = 0;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            matriz[i][j] = vetor[index];
            index++;
        }
    }

    printf("Matriz ordenada:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

