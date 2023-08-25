#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[50];
    float preco;
    int quantidadeEstoque;
}Produto;

float calcularTotal(float preco, int quantidade) {
    return preco * quantidade;
}

int main() {
    Produto produtos[3]; 
    int i;

   
    strcpy(produtos[0].nome, "Produto 1");
    produtos[0].preco = 10.0;
    produtos[0].quantidadeEstoque = 10;

    strcpy(produtos[1].nome, "Produto 2");
    produtos[1].preco = 20.0;
    produtos[1].quantidadeEstoque = 5;

    strcpy(produtos[2].nome, "Produto 3");
    produtos[2].preco = 15.0;
    produtos[2].quantidadeEstoque = 8;

    int opcao = -1, quantidade;
    float totalCompra = 0.0;

     while (opcao != 0){
	 
        printf("\nMenu:\n");
        for (i = 0; i < 3; i++) {
            printf("%d. %s - R$%.2f (%d em estoque)\n", i + 1, produtos[i].nome, produtos[i].preco, produtos[i].quantidadeEstoque);
        }
        printf("0. Finalizar Compra\n");
        printf("Escolha um produto (ou 0 para finalizar): ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 3) {
            int produtoIndex = opcao - 1;

            if (produtos[produtoIndex].quantidadeEstoque > 0) {
                printf("Digite a quantidade desejada: ");
                scanf("%d", &quantidade);

                if (quantidade > 0 && quantidade <= produtos[produtoIndex].quantidadeEstoque) {
                    float totalProduto = calcularTotal(produtos[produtoIndex].preco, quantidade);
                    totalCompra += totalProduto;

                    produtos[produtoIndex].quantidadeEstoque -= quantidade;
                    printf("Produto adicionado ao carrinho: %s, Quantidade: %d, Total: R$%.2f\n", produtos[produtoIndex].nome, quantidade, totalProduto);
                } else {
                    printf("Quantidade inválida ou indisponível em estoque.\n");
                }
            } else {
                printf("Produto indisponível em estoque.\n");
            }
        } else if (opcao == 0) {
            printf("Compra finalizada.\n");
            printf("Total da compra: R$%.2f\n", totalCompra);
        } else {
            printf("Opção inválida. Escolha novamente.\n");
        }

    }

    return 0;
}

