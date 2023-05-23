#include <stdio.h>

float saldo = 0.0;

void deposito(float valor) {
    saldo += valor;
    printf("Depósito realizado com sucesso.\n");
}

void saque(float valor) {
    if (saldo >= valor) {
        saldo -= valor;
        printf("Saque realizado com sucesso.\n");
    } else {
        printf("Saldo insuficiente para saque.\n");
    }
}

void mostrarSaldo() {
    printf("Saldo atual: %.2f\n", saldo);
}

int main() {
    int opcao;
    float valor;

    while (1) {
        printf("\nSelecione uma opção:\n");
        printf("1. Depositar\n");
        printf("2. Sacar\n");
        printf("3. Mostrar saldo\n");
        printf("4. Sair\n");

        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o valor a ser depositado: ");
                scanf("%f", &valor);
                deposito(valor);
                break;
            case 2:
                printf("Digite o valor a ser sacado: ");
                scanf("%f", &valor);
                saque(valor);
                break;
            case 3:
                mostrarSaldo();
                break;
            case 4:
                printf("Obrigado por utilizar nosso caixa eletrônico.\n");
                return 0;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    }

    return 0;
}

