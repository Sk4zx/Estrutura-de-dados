#include <stdio.h>
#include <stdlib.h>

void insertionSortDecrescente(int vet[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = vet[i];
        j = i - 1;
        while (j >= 0 && key > vet[j]) {
            vet[j + 1] = vet[j];
            j = j - 1;
        }
        vet[j + 1] = key;
    }
}

int main() {
	
	int i, vetor[5] = {84,43,12,5,2};
	
	insertionSortDecrescente(vetor, 5);
	
	for(i=0;i<5;i++){
		printf("%d\t",vetor[i]);
	}
	
	return 0;
}
