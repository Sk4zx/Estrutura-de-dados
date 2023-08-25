#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
	float x;
	float y;
}Ponto;

float distancia(Ponto p1, Ponto p2){
	float dx = p2.x - p1.x;
	float dy = p2.y - p2.y;
	return sqrt(dx*dx + dy*dy);
}

float inclinacao(Ponto p1, Ponto p2){
	float i;
	i = (p2.y - p1.y) / (p2.x - p1.x);
	return i;
}

int main() {
	
	Ponto p1 = {2.0, 5.0};
	Ponto p2 = {1.0, 8.0};
	
	float distanciaDoisPontos = distancia(p1, p2);
	float inclinacaoReta = inclinacao(p1,p2);
	
	printf("pontos: %.2f %.2f e %.2f %.2f\n", p1.x, p1.y, p2.x, p2.y);
	
	printf("Distancia entre os 2 pontos: %.2f\n",distanciaDoisPontos);
	printf("Inclinacao da reta: %.2f",inclinacaoReta);
	
	
	
	return 0;
}
