#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    char estado1, estado2;
    char codigo1[3], codigo2[3];  
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turisticos1, turisticos2;

    printf("Cadastre a primeira carta: \n");

    printf("Insira o estado entre A e H: ");
    scanf(" %c", &estado1); 

    printf("Insira o codigo utilizando um numero de 01 a 04: ");
    scanf("%2s", codigo1); 

    printf("Insira cidade sem o espaço: ");
    scanf("%19s", cidade1); 

    printf("Insira o numero da população local: ");
    scanf("%d", &populacao1);

    printf("Insira a area do estado: ");
    scanf("%f", &area1);

    printf("Insira o PIB do estado: ");
    scanf("%f", &pib1);

    printf("Insira os numeros dos pontos turisticos: ");
    scanf("%d", &turisticos1);

    printf("\nCadastre a segunda carta: \n");

    printf("Insira o estado entre A e H: ");
    scanf(" %c", &estado2); 

    printf("Insira o codigo utilizando um numero de 01 a 04: ");
    scanf("%2s", codigo2);

    printf("Insira cidade sem o espaço: ");
    scanf("%19s", cidade2);

    printf("Insira o numero da população local: ");
    scanf("%d", &populacao2);

    printf("Insira a area do estado: ");
    scanf("%f", &area2);

    printf("Insira o PIB do estado: ");
    scanf("%f", &pib2);

    printf("Insira os numeros dos pontos turisticos: ");
    scanf("%d", &turisticos2);

    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", turisticos1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", turisticos2);

}



