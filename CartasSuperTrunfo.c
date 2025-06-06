#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    char estado1, estado2;
    char codigo1[3], codigo2[3];  
    char cidade1[20], cidade2[20];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turisticos1, turisticos2;

    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;

    float superPoder1, superPoder2;

    //Primeira Carta

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

    //Segunda Carta

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

    // Cálculos

    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // Exibição

    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);


    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);


    superPoder1 = (float)populacao1 + area1 + pib1 + turisticos1 + pibPerCapita1 + (1.0f / densidade1);
    superPoder2 = (float)populacao2 + area2 + pib2 + turisticos2 + pibPerCapita2 + (1.0f / densidade2);

    // Comparações
    printf("\n--- Comparação de Cartas ---\n");

    printf("População: Carta 1 = %lu | Carta 2 = %lu → ", populacao1, populacao2);
    printf("Vencedor: Carta %d\n", (populacao1 > populacao2) ? 1 : 2);

    printf("Área: Carta 1 = %.2f | Carta 2 = %.2f → ", area1, area2);
    printf("Vencedor: Carta %d\n", (area1 > area2) ? 1 : 2);

    printf("PIB: Carta 1 = %.2f | Carta 2 = %.2f → ", pib1, pib2);
    printf("Vencedor: Carta %d\n", (pib1 > pib2) ? 1 : 2);

    printf("Pontos Turísticos: Carta 1 = %d | Carta 2 = %d → ", turisticos1, turisticos2);
    printf("Vencedor: Carta %d\n", (turisticos1 > turisticos2) ? 1 : 2);

    printf("Densidade Populacional: Carta 1 = %.2f | Carta 2 = %.2f → ", densidade1, densidade2);
    printf("Vencedor: Carta %d (menor vence)\n", (densidade1 < densidade2) ? 1 : 2);

    printf("PIB per Capita: Carta 1 = %.6f | Carta 2 = %.6f → ", pibPerCapita1, pibPerCapita2);
    printf("Vencedor: Carta %d\n", (pibPerCapita1 > pibPerCapita2) ? 1 : 2);

    printf("Super Poder: Carta 1 = %.2f | Carta 2 = %.2f → ", superPoder1, superPoder2);
    printf("Vencedor: Carta %d\n", (superPoder1 > superPoder2) ? 1 : 2);

}



