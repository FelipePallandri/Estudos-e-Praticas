#include <stdio.h>
int main() {

    // Praticando While
        /*int i = 0;

        while (i <= 100){

        if(i % 2 != 0)
        {
            printf("O numero %d é impar!\n", i);
        }

        i++;
        }*/

    // Praticando Do-While

        /*int numero;

        do {
        printf("Digite um numero PAR para sair do programa...\n");
        scanf("%d", &numero);

        if(numero % 2 == 0){
            printf("%d é par!\n", numero);

        } else {
            printf("%d é impar!\n", numero);
        }

        } while (numero % 2 != 0);

        printf("Você digitou numero PAR, saindo do jogo...");*/

    // Praticando For

        int numero, i;

        printf("Digite um numero para calcular a tabuada...\n");
        scanf("%d", &numero);

        for (i = 0; i <= 10; i++)
        {
            printf("%d x %d = %d\n", i, numero, i * numero);
        }


return 0;

}