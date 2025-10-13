#include <stdio.h>
int main() {

// JOGO CARTA SUPER TRINFO

// Nomes das variaveis carta 01
char estado1[3];
char codigo1[50];
char nome1[50];
int populacao1;
float area1;
float pib1;
int numero1;

//Preenchimento dos Dados
printf("Digite o estado: \n");
scanf("%s", estado1);

printf("Digite o Codigo: \n");
scanf("%s", codigo1);

printf("Digite o Nome da Cidade: \n");
scanf("%s", nome1);

printf("Digite a População: \n");
scanf("%d", &populacao1);

printf("Digite a Área: \n");
scanf("%f", &area1);

printf("Digite o PIB: \n");
scanf("%f", &pib1);

printf("Digite o Numero de Pontos Turisticos: \n");
scanf("%d", &numero1);

// Inclui a Densidade, Per Capita e Super Poder
float densidade1 = (float) populacao1 / area1; // Para calcular media densidade populacinal
float percapita1 = (float) pib1 / populacao1; // para calcular media pib per capita
float superpoder1 = populacao1 + area1 + pib1 + percapita1 + numero1;

printf("\n-------------------------\n\n");

        //Imprimir os dados preenchidos
        printf("***CARTA 01***\n");

        printf("Estado: %s\n", estado1);
        printf("Código: %s\n", codigo1);
        printf("Nome da Cidade: %s\n", nome1);
        printf("População: %d mil habitantes\n", populacao1);
        printf("Área: %.2f km²\n", area1);
        printf("PIB: %.2f bilhões de reais\n", pib1);
        printf("Numero de Pontos Turisticos: %d\n", numero1);
        printf("PIB per capita: %.2f\n", percapita1);
        printf("Super Poder: %.2f\n", superpoder1);

        printf("\n---------------------------------\n\n");

            
                // Nomes das Variaveis carta 02
                char estado2[3];
                char codigo2[50];
                char nome2[50];
                int populacao2;
                float area2;
                float pib2;
                int numero2;

                //Preenchimento dos Dados
                printf("Digite o estado: \n");
                scanf("%s", estado2);

                printf("Digite o Codigo: \n");
                scanf("%s", codigo2);

                printf("Digite o Nome da Cidade: \n");
                scanf("%s", nome2);

                printf("Digite a População: \n");
                scanf("%d", &populacao2);

                printf("Digite a Área: \n");
                scanf("%f", &area2);

                printf("Digite o PIB: \n");
                scanf("%f", &pib2);

                printf("Digite o Numero de Pontos Turisticos: \n");
                scanf("%d", &numero2);

                float densidade2 = (float) populacao2 / area2; // Para calcular media densidade populacinal
                float percapita2 = (float) pib2 / populacao2; // para calcular media pib per capita
                float superpoder2 = populacao2 + area2 + pib2 + percapita2 + numero2;

                printf("\n-------------------------\n\n");

                        //Imprimir os dados preenchidos
                        printf("***CARTA 02***\n");
                        printf("Estado: %s\n", estado2);
                        printf("Código: %s\n", codigo2);
                        printf("Nome da Cidade: %s\n", nome2);
                        printf("População: %d mil habitantes\n", populacao2);
                        printf("Área: %.2f km²\n", area2);
                        printf("PIB: %.2f bilhões de reais\n", pib2);
                        printf("Numero de Pontos Turisticos: %d\n", numero2);
                        printf("Densidade Populacional: %.2f\n", densidade2);
                        printf("PIB per capita: %.2f\n", percapita2);
                        printf("Super Poder: %.2f\n", superpoder2);

                        printf("\n-------------------------\n\n");

                                /*
                                // impressão do resultado final (Logica Simples de Comparação)
                                printf("\nRESULTADO CARTA GANHADORA (Carta01 = 1 ou Carta02 = 0)\n\n");
                                
                                printf("População: %d\n", populacao1 > populacao2);
                                printf("Área: %d\n", area1 > area2);
                                printf("PIB: %d\n", pib1 > pib2);
                                printf("Pontos Turisticos: %d\n", numero1 > numero2);
                                printf("Densidade Populacional: %d\n", densidade1 < densidade2);
                                printf("PIB per capita: %d\n", percapita1 > percapita2);
                                printf("Super Poder: %d\n\n", superpoder1 > superpoder2);

                                printf("\n-------------------------\n\n");*/

                                // Aplicando Estrutura de Decisão
                                printf("\n***CARTA VENCEDORA***\n\n");

                                if (populacao1 > populacao2){
                                printf("População: Vencedor CARTA 01\n");
                                } else {
                                printf("População: Vencedor CARTA 02\n");
                                }

                                if (area1 > area2){
                                printf("Área: Vencedor CARTA 01\n");
                                } else {
                                printf("Área: Vencedor CARTA 02\n");
                                }

                                if (pib1 > pib2){
                                printf("PIB: Vencedor CARTA 01\n");
                                } else {
                                printf("PIB: Vencedor CARTA 02\n");
                                }

                                if (numero1 > numero2){
                                printf("Pontos Turisticos: Vencedor CARTA 01\n");
                                } else {
                                printf("Pontos Turisticos: Vencedor CARTA 02\n");
                                }

                                if (densidade1 < densidade2){
                                printf("Densidade Populacional: Vencedor CARTA 01\n");
                                } else {
                                printf("Densidade Populacional: Vencedor CARTA 02\n");
                                }

                                if (percapita1 > percapita2){
                                printf("PIB Per Capita: Vencedor CARTA 01\n");
                                } else {
                                printf("PIB Per Capita: Vencedor CARTA 02\n");
                                }

                                if (superpoder1 > superpoder2){
                                printf("Super Poder: Vencedor CARTA 01\n");
                                } else {
                                printf("Super Poder: Vencedor CARTA 02\n");
                                }

                                printf("\n-------------------------\n\n");

                                


return 0;

}