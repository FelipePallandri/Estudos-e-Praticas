#include <stdio.h>

int main(){
/* // 
int a = 10, b = 5;

if (a > 0 && b > 0){
    printf("Os dois numeros são positivos\n");
} else {
    printf("Um dos numeros é negativo");
}*/


    /*int a = 10, b = 5;

    if (a > 0 || b > 0){
        printf("Um dos numeros é positivo\n");
    } else {
        printf("Os dois numeros são negativos");
    }*/

        /*int a = 0;

        if (!a) {
            printf("A variavel a é zero\n");
        } else {
            printf("A variavel a não é zero");
        }*/

//idade >= 18 verdadeira
//idade <= 30 verdadeira
//altura >= 1.75 verdadeira
// verdadeira && verdadeira
// verdaeira && verdadeira =  verdadeira

int idade = 20;
float altura = 1.75;

if (idade >= 18 && idade <= 30 && altura >= 1.75){
    printf("Você esta na faixa etária e tem a altura adequada\n");
} else {
    printf("Você não atende aos criterios\n");
}

}