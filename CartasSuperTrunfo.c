#include <stdio.h>
#include <string.h>  // Biblioteca adicionada para manipulação de strings (se necessário futuramente)

int main() {
    // --- Declaração das variáveis ---
    char estado1;
    char codigo1[4];        
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

    int opcao; // <- Variável para armazenar a escolha do jogador no menu

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

    // --- MENU INTERATIVO ---
    printf("\n===== MENU DE COMPARACAO =====\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    printf("Escolha o atributo para comparar: ");
    scanf("%d", &opcao);

    printf("\n--- Comparacao de Cartas ---\n");
    switch (opcao) {
        case 1: // População
            printf("Populacao:\n");
            printf("%s: %d habitantes\n", nomecidade1, populacao1);
            printf("%s: %d habitantes\n", nomecidade2, populacao2);

            if (populacao1 > populacao2) {
                printf("Resultado: %s venceu!\n", nomecidade1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: %s venceu!\n", nomecidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2: // Área
            printf("Area:\n");
            printf("%s: %.2f km²\n", nomecidade1, area1);
            printf("%s: %.2f km²\n", nomecidade2, area2);

            if (area1 > area2) {
                printf("Resultado: %s venceu!\n", nomecidade1);
            } else if (area2 > area1) {
                printf("Resultado: %s venceu!\n", nomecidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3: // PIB
            printf("PIB:\n");
            printf("%s: %.2f bilhoes\n", nomecidade1, pib1);
            printf("%s: %.2f bilhoes\n", nomecidade2, pib2);

            if (pib1 > pib2) {
                printf("Resultado: %s venceu!\n", nomecidade1);
            } else if (pib2 > pib1) {
                printf("Resultado: %s venceu!\n", nomecidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4: // Pontos Turísticos
            printf("Pontos Turisticos:\n");
            printf("%s: %d pontos\n", nomecidade1, pontosturisticos1);
            printf("%s: %d pontos\n", nomecidade2, pontosturisticos2);

            if (pontosturisticos1 > pontosturisticos2) {
                printf("Resultado: %s venceu!\n", nomecidade1);
            } else if (pontosturisticos2 > pontosturisticos1) {
                printf("Resultado: %s venceu!\n", nomecidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5: // Densidade Demográfica (menor vence)
            printf("Densidade Demografica (menor vence):\n");
            printf("%s: %.2f hab/km²\n", nomecidade1, densidade1);
            printf("%s: %.2f hab/km²\n", nomecidade2, densidade2);

            if (densidade1 < densidade2) {
                printf("Resultado: %s venceu!\n", nomecidade1);
            } else if (densidade2 < densidade1) {
                printf("Resultado: %s venceu!\n", nomecidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 6: // PIB per Capita
            printf("PIB per Capita:\n");
            printf("%s: %.2f reais/habitante\n", nomecidade1, pibpercapita1);
            printf("%s: %.2f reais/habitante\n", nomecidade2, pibpercapita2);

            if (pibpercapita1 > pibpercapita2) {
                printf("Resultado: %s venceu!\n", nomecidade1);
            } else if (pibpercapita2 > pibpercapita1) {
                printf("Resultado: %s venceu!\n", nomecidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 7: // Super Poder
            printf("Super Poder:\n");
            printf("%s: %.2f pontos\n", nomecidade1, superpoder1);
            printf("%s: %.2f pontos\n", nomecidade2, superpoder2);

            if (superpoder1 > superpoder2) {
                printf("Resultado: %s venceu!\n", nomecidade1);
            } else if (superpoder2 > superpoder1) {
                printf("Resultado: %s venceu!\n", nomecidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("Opcao invalida! Tente novamente.\n");
    }

    return 0;
}
