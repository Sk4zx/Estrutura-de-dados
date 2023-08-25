#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char titulo[20];
    char autor[20];
    int ano;
}Livro;

int main() {
    Livro livros[2];
    int escolha = 0, i = 0;

    while (escolha != 4) {

        printf("\nMenu:\n");
        printf("1. Adicionar livros\n");
        printf("2. Listar livros\n");
        printf("3. Buscar livros por autor\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                for (i = 0; i < 2; i++) {
                    printf("Digite o titulo do livro:");
                    scanf("%s", livros[i].titulo);

                    printf("Digite o autor: ");
                    scanf("%s", livros[i].autor);
                    
                    printf("Digite o ano da publicacao: ");
                    scanf("%d", &livros[i].ano);
                }
                break;
            case 2:
                if (i == 0) {
                    printf("Nenhum livro cadastrado.\n");
                } else {
                    for (i = 0; i < 2; i++) {
                        printf("titulo: %s, autor: %s, ano: %d\n",
                               livros[i].titulo, livros[i].autor, livros[i].ano);
                    }
                }
                break;
            
            case 3:
                if (i == 0) {
                    printf("Nenhum livro cadastrado.\n");
                } else {
                    char busca[20];
                    printf("Digite o nome do autor que deseja buscar: ");
                    scanf("%s", busca);
                    
                    int encontrado = 0;

                    for (i = 0; i < 2; i++) {
                        if (strcmp(livros[i].autor, busca) == 0) {
                            printf("titulo: %s, autor: %s, ano: %d\n",
                                   livros[i].titulo, livros[i].autor, livros[i].ano);
                            encontrado = 1;
                        }
                    }
                    
                    if (!encontrado) {
                        printf("Nenhum livro encontrado para o autor '%s'.\n", busca);
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

