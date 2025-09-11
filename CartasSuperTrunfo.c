#include <stdio.h>
#include <string.h> 

int main() {
    // --- Declaração das variáveis ---
    char estado1, estado2;
    char codigo1[4], codigo2[4];        
    char nomecidade1[50], nomecidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;

    float densidade1, densidade2;
    float pibpercapita1, pibpercapita2;
    float superpoder1, superpoder2;

    int opcao1, opcao2; 
    float v1c1, v1c2, v2c1, v2c2; 

    // --- CARTA 1 ---
    printf("Cadastro da Carta 1\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o Codigo da Carta (ex: A01): ");
    scanf("%3s", codigo1);

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

    // --- PRIMEIRO MENU ---
    printf("\n===== MENU DE COMPARACAO =====\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica (menor vence)\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    printf("Escolha o PRIMEIRO atributo: ");
    scanf("%d", &opcao1);

    // --- SEGUNDO MENU ---
    printf("\n===== SEGUNDO ATRIBUTO =====\n");
    switch (opcao1) {
        case 1: printf("2 - Area\n3 - PIB\n4 - Pontos Turisticos\n5 - Densidade\n6 - PIB per Capita\n7 - Super Poder\n"); break;
        case 2: printf("1 - Populacao\n3 - PIB\n4 - Pontos Turisticos\n5 - Densidade\n6 - PIB per Capita\n7 - Super Poder\n"); break;
        case 3: printf("1 - Populacao\n2 - Area\n4 - Pontos Turisticos\n5 - Densidade\n6 - PIB per Capita\n7 - Super Poder\n"); break;
        case 4: printf("1 - Populacao\n2 - Area\n3 - PIB\n5 - Densidade\n6 - PIB per Capita\n7 - Super Poder\n"); break;
        case 5: printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Pontos Turisticos\n6 - PIB per Capita\n7 - Super Poder\n"); break;
        case 6: printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Pontos Turisticos\n5 - Densidade\n7 - Super Poder\n"); break;
        case 7: printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Pontos Turisticos\n5 - Densidade\n6 - PIB per Capita\n"); break;
        default: printf("Opcao invalida!\n"); return 0;
    }
    printf("Escolha o SEGUNDO atributo: ");
    scanf("%d", &opcao2);

    // --- ATRIBUTO 1 ---
    switch (opcao1) {
        case 1: v1c1 = populacao1; v1c2 = populacao2; break;
        case 2: v1c1 = area1; v1c2 = area2; break;
        case 3: v1c1 = pib1; v1c2 = pib2; break;
        case 4: v1c1 = pontosturisticos1; v1c2 = pontosturisticos2; break;
        case 5: v1c1 = densidade1; v1c2 = densidade2; break;
        case 6: v1c1 = pibpercapita1; v1c2 = pibpercapita2; break;
        case 7: v1c1 = superpoder1; v1c2 = superpoder2; break;
    }

    // --- ATRIBUTO 2 ---
    switch (opcao2) {
        case 1: v2c1 = populacao1; v2c2 = populacao2; break;
        case 2: v2c1 = area1; v2c2 = area2; break;
        case 3: v2c1 = pib1; v2c2 = pib2; break;
        case 4: v2c1 = pontosturisticos1; v2c2 = pontosturisticos2; break;
        case 5: v2c1 = densidade1; v2c2 = densidade2; break;
        case 6: v2c1 = pibpercapita1; v2c2 = pibpercapita2; break;
        case 7: v2c1 = superpoder1; v2c2 = superpoder2; break;
    }


    // --- COMPARAÇÃO INDIVIDUAL ---
    printf("\n--- Comparacao do Primeiro Atributo ---\n");
    printf("%s -> %.2f\n%s -> %.2f\n", nomecidade1, v1c1, nomecidade2, v1c2);
    (v1c1 > v1c2) ? printf("Vencedor: %s\n", nomecidade1) :
    (v1c2 > v1c1) ? printf("Vencedor: %s\n", nomecidade2) :
                    printf("Empate!\n");

    printf("\n--- Comparacao do Segundo Atributo ---\n");
    printf("%s -> %.2f\n%s -> %.2f\n", nomecidade1, v2c1, nomecidade2, v2c2);
    (v2c1 > v2c2) ? printf("Vencedor: %s\n", nomecidade1) :
    (v2c2 > v2c1) ? printf("Vencedor: %s\n", nomecidade2) :
                    printf("Empate!\n");



    // --- SOMA FINAL ---
    float soma1 = v1c1 + v2c1;
    float soma2 = v1c2 + v2c2;

    // --- EXIBE RESULTADOS ---
    printf("\n--- Comparacao ---\n");
    printf("%s -> %.2f + %.2f = %.2f\n", nomecidade1, v1c1, v2c1, soma1);
    printf("%s -> %.2f + %.2f = %.2f\n", nomecidade2, v1c2, v2c2, soma2);

    (soma1 > soma2) ? printf("Vencedor: %s\n", nomecidade1) :
    (soma2 > soma1) ? printf("Vencedor: %s\n", nomecidade2) :
                      printf("Empate!\n");

    return 0;
}
