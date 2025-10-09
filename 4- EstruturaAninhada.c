#include <stdio.h>

int main(){
                                    // ESTRUTURAS DE DECISÃO ENINHADAS

    /*int idade;
    float renda;
    int dependente;


    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite a sua renda mensal: ");
    scanf("%f", &renda);

    printf("Digite o numero de dependentes: ");
    scanf("%d", &dependente);


    if (idade >= 18 && idade < 60){
        if (renda < 3000){
            if (dependente > 2)
        {
        printf("Você atende a todos os criterios\n");
} else {
        printf("Você não atende ao criterio dependentes\n");
    }
} else {
        printf ("Você não atende criterio renda\n");
    }
} else {
        printf("Você não atende ao criterio idade\n");
    }*/


             int numero;
             
             printf("Digite um numero: ");
             scanf("%d", &numero);
             
             if (numero > 0){
                if (numero % 2 == 0){
                    printf("Numero PAR\n");
                } else {
                    printf("Numero IMPAR\n");
                }

             } else if (numero == 0){
                printf("Numero é zero");

             } else {
                printf("Negativo");
             }

}