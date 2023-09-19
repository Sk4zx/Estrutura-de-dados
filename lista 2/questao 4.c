#include <stdio.h>

// Função de particionamento para o Quicksort
int particao(int vet[], int low, int high) {
    int pivot = vet[high];
    int j, i = (low - 1);

    for (j = low; j <= high - 1; j++) {
        if (vet[j] < pivot) {
            i++;
            // Troca arr[i] e arr[j]
            int temp = vet[i];
            vet[i] = vet[j];
            vet[j] = temp;
        }
    }
    
    int temp = vet[i + 1];
    vet[i + 1] = vet[high];
    vet[high] = temp;

    return (i + 1);
}


void quicksort(int vet[], int low, int high) {
    if (low < high) {
        
        int pi = particao(vet, low, high);

        quicksort(vet, low, pi - 1);
        quicksort(vet, pi + 1, high);
    }
}

int main() {
    int matriz[2][2] = {{4, 2}, {3, 1}};
    int vetor[4],i,j;

    // Copiar a matriz para vetor
    int index = 0;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            vetor[index] = matriz[i][j];
            index++;
        }
    }

    quicksort(vetor, 0, 3);

    // Converter vetor ordenado de volta para a matriz
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

