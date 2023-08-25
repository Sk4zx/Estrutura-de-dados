#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char nome[20];
	int matricula;
	float nota1;
	float nota2;
	float nota3;
}Estudante;


float verificaMedia(float n1, float n2, float n3){
	float media = (n1+n2+n3)/3;
	return media;
}
void verificaAprovacao(float valor){
	if(valor>7){
		printf("Aluno aprovado");
	}else{
		printf("Aluno reprovado");
	}
}

int main() {
	Estudante estudantes;
	
	printf("digite o nome do aluno: ");
	scanf("%s", &estudantes.nome);
	
	printf("digite a matricula do aluno: ");
	scanf("%d", &estudantes.matricula);
	
	printf("digite a nota 1 do aluno: ");
	scanf("%f", &estudantes.nota1);
	printf("digite a nota 2 do aluno: ");
	scanf("%f", &estudantes.nota2);
	printf("digite a nota 3 do aluno: ");
	scanf("%f", &estudantes.nota3);
	
	float resultado = verificaMedia(estudantes.nota1,estudantes.nota2, estudantes.nota3);
	printf("media do aluno: %.2f",resultado);
	verificaAprovacao(resultado);
	
	return 0;
}
