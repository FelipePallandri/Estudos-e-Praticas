#include <stdio.h>

int main(){

    int opcao;
    float saldo = 1000;

    printf("Escolha uma opção: \n");
    printf("1. Verificar Saldo\n");
    printf("2. Fazer Deposito\n");
    printf("3. Fazer Saque\n");

    scanf("%d", &opcao);

    switch (opcao){
        
        case 1:
        printf("O seu saldo é: R$ %.2f\n", saldo);
        break;

        case 2:
        printf("Digite o banco que deseja depositar\n");
        printf("Digite a agencia que deseja depositar\n");
        printf("Digite a conta que deseja depositar\n");
        break;

        case 3:
        printf("Digite o valor a sacar\n");
        break;

        default:
        printf("Opção invalida\n");
        break;

    }

}