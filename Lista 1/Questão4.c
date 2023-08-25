#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[20];
    int tel;
}Contato;

int main() {
    Contato contatos[2];
    int escolha = 0, i = 0;

    while (escolha != 4) {

        printf("\nMenu:\n");
        printf("1. Adicionar Contatos\n");
        printf("2. Listar Contatos\n");
        printf("3. Buscar Contato por Nome\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                for(i=0;i<2;i++) {
                    printf("Digite o nome do contato:");
                    scanf("%s", contatos[i].nome);

                    printf("Digite o telefone: ");
                    scanf("%d", &contatos[i].tel);
                }
                break;
            case 2:
                if(i==0) {
                    printf("Nenhum contato cadastrado.\n");
                }else{
                    for(i=0;i<2;i++) {
                        printf("Nome: %s, Telefone: %d\n", contatos[i].nome, contatos[i].tel);
                    }
                }
                break;
            
            case 3:
                if(i==0) {
                    printf("Nenhum contato cadastrado.\n");
                }
                
                if(i!=0){
                	char busca[20];
                	printf("Digite o nome do contato que deseja buscar: ");
                	scanf("%s",&busca);
                	
                	for (i=0;i<2;i++){
                		if(strcmp(contatos[i].nome, busca)==0){
                			printf("Nome: %s, Tel: %d", contatos[i].nome, contatos[i].tel);               			
						}
					}	
				}
					
                break;
            case 4:
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opcao invalida. Escolha novamente.\n");
        }
    }

    return 0;
}

