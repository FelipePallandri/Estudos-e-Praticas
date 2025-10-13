#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    /*int opcao;
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

    }*/

 // Jogo de adivinhar o numero secreto
 int opcao;
 int numeroSecreto, palpite;

  printf("Menu Principal\n");
  printf("1. Iniciar Jogo\n");
  printf("2. Ver Regras\n");
  printf("3. Sair\n");
  printf("Escolha uma opção: \n");
  scanf("%d", &opcao);

  switch (opcao) {

    case 1:
      srand(time(0));
      numeroSecreto = rand() % 10 + 1;
      
      printf("Adivinhe o número (entre 1 e 10): \n");
      scanf("%d", &palpite);

      if (palpite == numeroSecreto) {
        printf("Parabéns! Você acertou!\n");
      } else {
        printf("Você errou. O número era %d.\n", numeroSecreto);
      }
      break;

    case 2:
      printf("Regras do Jogo:\n");
      printf("1. Escolha uma opção no menu.\n");
      printf("2. Se você escolher 'Iniciar Jogo', adivinhe o número secreto.\n");
      printf("3. O jogo termina quando você escolhe 'Sair'.\n");
      break;

    case 3:
      printf("Saindo...\n");
      break;

    default:
      printf("Opção inválida. Tente novamente.\n");
  }

  return 0;


}