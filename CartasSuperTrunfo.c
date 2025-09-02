#include <stdio.h>


int main() {
 char estado1;
 char codigo1[3];        
 char nomecidade1[50];
 int populacao1;
 float area1;
 float pib1;
 int pontosturisticos1;

 char estado2;
 char codigo2[3];
 char nomecidade2[50];
 int populacao2;
 float area2;
 float pib2;
 int pontosturisticos2;

 float densidade1, densidade2;
 float pibpercapita1, pibpercapita2;
 float superpoder1, superpoder2;

  //CARTA 1
    printf("Cadastro da Carta 1\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomecidade1);

    printf("Digite a Populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a Area em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosturisticos1);

    densidade1 = populacao1 / area1;
    pibpercapita1 = (pib1 * 1000000000) / populacao1;
    superpoder1 = (float)populacao1 + area1 + (pib1 * 1000000000.0) + pontosturisticos1 + pibpercapita1 + (1.0 / densidade1);

    //Carta 2
    printf("\nCadastro da Carta 2\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o Codigo da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomecidade2);

    printf("Digite a Populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a Area em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosturisticos2);

    densidade2 = populacao2 / area2;
    pibpercapita2 = (pib2 * 1000000000) / populacao2;
    superpoder2 = (float)populacao2 + area2 + (pib2 * 1000000000.0) + pontosturisticos2 + pibpercapita2 + (1.0 / densidade2);

    //Exibição das Cartas
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: R$ %.2f\n", pibpercapita1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: R$ %.2f\n", pibpercapita2);
     printf("\n--- Comparacao de Cartas ---\n");

    printf("Populacao: Carta %d venceu (%d)\n", (populacao1 > populacao2 ? 1 : 2), (populacao1 > populacao2));
    printf("Area: Carta %d venceu (%d)\n", (area1 > area2 ? 1 : 2), (area1 > area2));
    printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2 ? 1 : 2), (pib1 > pib2));
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", (pontosturisticos1 > pontosturisticos2 ? 1 : 2), (pontosturisticos1 > pontosturisticos2));
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidade1 < densidade2 ? 1 : 2), (densidade1 < densidade2));
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pibpercapita1 > pibpercapita2 ? 1 : 2), (pibpercapita1 > pibpercapita2));
    printf("Super Poder: Carta %d venceu (%d)\n", (superpoder1 > superpoder2 ? 1 : 2), (superpoder1 > superpoder2));

    return 0;
}
