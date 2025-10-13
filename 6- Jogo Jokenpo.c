#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int escolherjogador, escolhacomputador;
    srand(time(0));

    printf("***JOGO DE JOKENPÔ***\n");
    printf("Escolha uma opção:\n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");
    printf("Escolha: \n");
    scanf("%d", &escolherjogador);

        escolhacomputador = rand() % 3 + 1;

            switch (escolherjogador){
            case 1:
            printf("Jogador: Pedra - \n");
            break;

            case 2:
            printf("Jogador: Papel - \n");
            break;

            case 3:
            printf("Jogador: Tesoura - \n");
            break;

            default:
            printf("Opção Invalida");
        }

                    switch (escolhacomputador){

                    case 1:
                    printf("Computador: Pedra\n");
                    break;

                    case 2:
                    printf("Computador: Papel\n");
                    break;

                    case 3:
                    printf("Computador: Tesoura\n");
                    break;

                }

                        if (escolhacomputador == escolherjogador){
                            printf("### Jogo Empatou###\n");

                        } else if ((escolherjogador == 1) && (escolhacomputador == 3) ||
                                  (escolherjogador == 2) && (escolhacomputador == 1) ||
                                  (escolherjogador == 3) && (escolhacomputador == 2))
                        {
                            printf("###Parabens, Você Ganhou###\n");

                        } else {
                            printf("###Você Perdeu###\n");
                        }

        return 0;
}