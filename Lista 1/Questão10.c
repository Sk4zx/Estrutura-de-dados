#include <stdio.h>
#include <stdlib.h>

typedef struct{
	float dolar;
	float euro;
}moeda;

int main() {
	moeda m;
	int escolha;
	
	printf("selecione uma moeda:\n1. Dolar\n2. Euro\n");
	scanf("%d", &escolha);
	
	
	switch(escolha){
		case 1:
			printf("digite o valor: ");
			scanf("%f", &m.dolar);
			m.euro = m.dolar * 0.93;
			printf("valor em euro: %.2f", m.euro);
			break;
		case 2:
			printf("digite o valor: ");
			scanf("%f", &m.euro);
			m.dolar = m.euro * 1.08;
			printf("valor em dolar: %.2f", m.dolar);
			break;
	}
	
	
	
	
	return 0;
}
