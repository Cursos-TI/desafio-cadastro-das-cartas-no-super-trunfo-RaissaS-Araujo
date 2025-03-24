#include <stdio.h>

int main() {

    //Carta 1
    char estado1;
    char codigo1 [5];
    char cidade1 [50];
    int populacao1;
    float area1;
    float pib1;
    int turistico1;

    //Carta 2
    char estado2;
    char codigo2 [5];
    char cidade2 [50];
    int populacao2;
    float area2;
    float pib2;
    int turistico2;

    //Cadastro de dados - Carta 1
    printf(" Cadastro - Carta 1:\n");

    printf("Digite o estado (A-H): ");
    scanf("%c", &estado1);

    printf("Digite o código da carta (ex: A01, A02...): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite o nome da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade (km): ");
    scanf("%f", &area1);








    return 0;
}
