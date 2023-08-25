#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct{
	char nome[30];
	int idade;
	float altura;
}Pessoa;

int main() {
	
	Pessoa p;
	strcpy(p.nome, "Renan");
	p.idade = 18;
	p.altura = 1.66;
	
	printf("nome: %s\nidade: %d\naltura: %.2f", p.nome, p.idade, p.altura);
	
	return 0;
}
