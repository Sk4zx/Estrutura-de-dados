#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int n1;
	float n2;
	char letra;
}Tipo;

int main() {
	
	Tipo t;
	t.n1 = 10;
	t.n2 = 10.99999;
	t.letra = 'A';
	
	printf("ponto flutuante: %f\ninteiro: %d\nLetra: %c",t.n2, t.n1, t.letra);
	return 0;
}
