#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100000

void merge(int arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}

void quick_sort(int *a, int left, int right);

void bubble_sort(int *vetor, int tamanho) {
  int i, j, aux;

  for (i = 0; i < tamanho - 1; i++) {
    for (j = 0; j < tamanho - i - 1; j++) {
      if (vetor[j] > vetor[j + 1]) {
        aux = vetor[j];
        vetor[j] = vetor[j + 1];
        vetor[j + 1] = aux;
      }
    }
  }
}

int main() {
	
	int vetor[MAX];
	int i;
	
	for (i = 0; i < MAX; i++) {
    vetor[i] = rand() % MAX;
	}
	
	clock_t start_time_bubble = clock();
	
	bubble_sort(vetor, MAX);
	
	clock_t end_time_bubble = clock();
	double execution_time_bubble = (double)(end_time_bubble - start_time_bubble) / CLOCKS_PER_SEC;
	
	printf("\nTempo de execucao bolha: %f segundos\n", execution_time_bubble);
	
	clock_t start_time_quick = clock();
	
	quick_sort(vetor, 0, MAX);
	
	clock_t end_time_quick = clock();
	double execution_time_quick = (double)(end_time_quick - start_time_quick) / CLOCKS_PER_SEC;
	
	printf("\nTempo de execucao quick sort: %f segundos\n", execution_time_quick);
	
	clock_t start_time_merge = clock();
	
	mergeSort(vetor,0,MAX - 1);
	
	clock_t end_time_merge = clock();
	double execution_time_merge = (double)(end_time_merge - start_time_merge) / CLOCKS_PER_SEC;
	
	printf("\nTempo de execucao merge: %f segundos\n", execution_time_merge);
	
	return 0;
}

void quick_sort(int *a, int left, int right) {
	int i, j, x, y;
	
	i = left;
	j = right;
	x = a[(left + right) / 2];
	
	while (i <= j) {
		while (a[i] < x && i < right) {
			i++;
		}
		while (a[j] > x && j > left) {
			j--;
		}
		if (i <= j) {
			y = a[i];
			a[i] = a[j];
			a[j] = y;
			i++;
			j--;
		}
	}
	if (j > left) {
		quick_sort(a, left, j);
	}
	if (i < right) {
		quick_sort(a, i, right);
	}
}

