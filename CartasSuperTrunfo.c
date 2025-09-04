#include <stdio.h>

int main() {
    char estado1;
    char codigo1[4];        // precisa de 4 posições (ex: "A01\0")
    char nomecidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    char estado2;
    char codigo2[4];
    char nomecidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    float densidade1, densidade2;
    float pibpercapita1, pibpercapita2;
    float superpoder1, superpoder2;

    // --- CARTA 1 ---
    printf("Cadastro da Carta 1\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o Codigo da Carta (ex: A01): ");
    scanf("%3s", codigo1); // lê até 3 caracteres e fecha com \0

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

    // --- CARTA 2 ---
    printf("\nCadastro da Carta 2\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o Codigo da Carta (ex: B02): ");
    scanf("%3s", codigo2);

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


    //printf("Populacao: Carta %d venceu (%d)\n", (populacao1 > populacao2 ? 1 : 2), (populacao1 > populacao2)); 
    //printf("Area: Carta %d venceu (%d)\n", (area1 > area2 ? 1 : 2), (area1 > area2)); 
    //printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2 ? 1 : 2), (pib1 > pib2)); 
    //printf("Pontos Turisticos: Carta %d venceu (%d)\n", (pontosturisticos1 > pontosturisticos2 ? 1 : 2), (pontosturisticos1 > pontosturisticos2)); 
    //printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidade1 < densidade2 ? 1 : 2), (densidade1 < densidade2)); 
    //printf("PIB per Capita: Carta %d venceu (%d)\n", (pibpercapita1 > pibpercapita2 ? 1 : 2), (pibpercapita1 > pibpercapita2)); 
    //printf("Super Poder: Carta %d venceu (%d)\n", (superpoder1 > superpoder2 ? 1 : 2), (superpoder1 > superpoder2));

    // --- Comparação (atributo fixo: População) ---
    printf("\n--- Comparacao de Cartas (Atributo: Populacao) ---\n\n");

    printf("Carta 1 - %s (%c): %d habitantes\n", nomecidade1, estado1, populacao1);
    printf("Carta 2 - %s (%c): %d habitantes\n", nomecidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", nomecidade1);
    } else if (populacao2 > populacao1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", nomecidade2);
    } else {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}
