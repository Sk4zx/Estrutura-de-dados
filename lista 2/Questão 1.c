#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int i, j, aux, vet[5] = {84,43,12,5,2};
	
	for(i=0;i<=5;i++){
		for(j=0;j<=3;j++){
			if(vet[j]>vet[j+1]){
				aux=vet[j];
				vet[j]=vet[j+1];
				vet[j+1]=aux;
			}
		}
	}
	
	for (i=0;i<5;i++){
		printf("%d\t",vet[i]);
	}
	return 0;
}
