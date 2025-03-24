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

    printf("\n Atenção! As informações devem ser preenchidas sem pontos, vírgulas ou espaços.\n\n");

    printf("Digite o estado (A-H, apenas uma letra): ");
    scanf("%c", &estado1);

    printf("Digite o código da carta (ex: A01, A02...): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade (sem espaços): ");
    scanf("%s", cidade1);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade (km²): ");
    scanf("%f", &area1);
    
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &turistico1);


    //Cadastro de dados - Carta 2
    printf("\n Cadastro - Carta 2:\n");

    printf("\n Atenção! As informações devem ser preenchidas sem pontos, vírgulas ou espaços.\n\n");

    printf("Digite o estado (A-H, apenas uma letra): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (ex: A01, A02...): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade (sem espaços): ");
    scanf("%s", cidade2);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &turistico2);

    // Exibição das cartas 1 - 2

    //Carta 1
    printf("\n   Carta 1   \n");

    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Número de pontos Turísticos: %d\n", turistico1);

    //Carta 2
    printf("\n   Carta 2   \n");

    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Número de pontos Turísticos: %d\n", turistico2);

    return 0;
}
