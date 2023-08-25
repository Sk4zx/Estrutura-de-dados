#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nomeTitular[50];
    int numeroConta;
    float saldo;
}ContaBancaria;

void depositar(ContaBancaria *conta, float valor) {
    if (valor > 0) {
        conta->saldo += valor;
        printf("Deposito de %.2f realizado com sucesso.\n", valor);
    } else {
        printf("Valor invalido para deposito.\n");
    }
}

void sacar(ContaBancaria *conta, float valor) {
    if (valor > 0 && valor <= conta->saldo) {
        conta->saldo -= valor;
        printf("Saque de %.2f realizado com sucesso.\n", valor);
    } else {
        printf("Valor invalido para saque ou saldo insuficiente.\n");
    }
}

void verificarSaldo(ContaBancaria *conta) {
    printf("Saldo atual: %.2f\n", conta->saldo);
}

int main() {
    ContaBancaria conta;
    int opcao;
    float valor;
    
    conta.saldo = 0;
    
    printf("Digite o nome do titular da conta: ");
    scanf("%s", conta.nomeTitular);

    printf("Digite o numero da conta: ");
    scanf("%d", &conta.numeroConta);

    

    while (opcao != 4){
	 
        printf("\nMenu:\n");
        printf("1. Depositar\n");
        printf("2. Sacar\n");
        printf("3. Verificar Saldo\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o valor para deposito: ");
                scanf("%f", &valor);
                depositar(&conta, valor);
                break;
            case 2:
                printf("Digite o valor para saque: ");
                scanf("%f", &valor);
                sacar(&conta, valor);
                break;
            case 3:
                verificarSaldo(&conta);
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

