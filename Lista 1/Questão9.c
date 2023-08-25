#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char nome[20];
	char cargo[20];
	float salario;
	int dataAdmissao;
	int rendimento;
}Funcionario;

float aumentaSalario(float salario, int rendimento) {
	if(rendimento > 7) {
		salario *= 1.10;
	}
	if(rendimento > 8) {
		salario *= 1.20;
	}
	if(rendimento > 9) {
		salario *= 1.30;
	}
	if(rendimento > 10) {
		salario *= 1.40;
	}
	return salario;
}

int calculaTempo(int data, int dataA) {
	return dataA - data;
}

int main() {
	Funcionario funcionario;
	int anoAtual;
	
	printf("Digite o nome do funcionario: ");
	scanf("%s", funcionario.nome);
	
	printf("Digite o cargo do funcionario: ");
	scanf("%s", funcionario.cargo);
	
	printf("Digite o salario: ");
	scanf("%f", &funcionario.salario);
	
	printf("Digite o rendimento (0-10): ");
	scanf("%d", &funcionario.rendimento);
	
	printf("Digite o ano de admissao: ");
	scanf("%d", &funcionario.dataAdmissao);
	
	printf("Digite o ano atual: ");
	scanf("%d", &anoAtual);
	
	int tempoNaEmpresa = calculaTempo(funcionario.dataAdmissao, anoAtual);
	printf("Tempo na empresa: %d anos\n", tempoNaEmpresa);
	
	float resultado = aumentaSalario(funcionario.salario, funcionario.rendimento);
	printf("Novo salario baseado no rendimento: %.2f\n", resultado);
	
	
	
	
	return 0;
}

