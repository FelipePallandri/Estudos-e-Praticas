#include <stdio.h>

int main(){

    int idade = 16;
    int resultado;

    /*idade >= 18 ? printf("Você é maior\n") : printf("Você é menor\n"); //mais simples e resumido*/

    resultado = idade >= 18 ? 1 : 0; // ARMAZENANDO EM UMA VARIAVEL

    if(resultado == 1){
        printf("Você é maior de idade\n");
    } else {
        printf("Você é menor de idade\n");
    }

    return 0;

}