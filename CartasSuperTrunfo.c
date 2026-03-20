#include <stdio.h>
#include <string.h>

int main()
{
    // VARIÁVEIS CARTA 1
    char statecard, code[50], city[50];
    int points_tur;
    float area, pib, density, pibpercapita;
    unsigned long int population;

    // VARIÁVEIS CARTA 2
    char statecardTwo, codeTwo[50], cityTwo[50];
    int points_turTwo;
    float areaTwo, pibTwo, densityTwo, pibpercapitaTwo;
    unsigned long int populationTwo;

    float superPowerOne, superPowerTwo;

    // ENTRADA DE DADOS - CARTA 1
    printf("Digite o estado (A-H): \n");
    scanf(" %c", &statecard);

    printf("Digite o código da carta: \n");
    scanf("%s", code);

    getchar();

    printf("Digite a cidade: \n");
    fgets(city, 50, stdin);
    city[strcspn(city, "\n")] = 0;

    printf("Digite a população: \n");
    scanf("%lu", &population);

    printf("Digite a área: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Quantidade de pontos turísticos: \n");
    scanf("%d", &points_tur);

    // ENTRADA DE DADOS - CARTA 2
    printf("Digite o estado da segunda carta (A-H): \n");
    scanf(" %c", &statecardTwo);

    printf("Digite o código da segunda carta: \n");
    scanf("%s", codeTwo);

    getchar();

    printf("Digite a cidade: \n");
    fgets(cityTwo, 50, stdin);
    cityTwo[strcspn(cityTwo, "\n")] = 0;

    printf("Digite a população: \n");
    scanf("%lu", &populationTwo);

    printf("Digite a área: \n");
    scanf("%f", &areaTwo);

    printf("Digite o PIB: \n");
    scanf("%f", &pibTwo);

    printf("Quantidade de pontos turísticos: \n");
    scanf("%d", &points_turTwo);

    // MANIPULAÇÃO DE DADOS
    density = (float)population / area;
    pibpercapita = pib / (float)population;

    densityTwo = (float)populationTwo / areaTwo;
    pibpercapitaTwo = pibTwo / (float)populationTwo;

    // 1.0f / density INVERTE A DENSIDADE
    superPowerOne = (float)population + area + pib + (float)points_tur + pibpercapita + (1.0f / density);
    superPowerTwo = (float)populationTwo + areaTwo + pibTwo + (float)points_turTwo + pibpercapitaTwo + (1.0f / densityTwo);

    // SAÍDA DE DADOS E COMPARAÇÕES
    printf("\n=== COMPARAÇÃO DE CARTAS ===\n");

    printf("Atributo: População\n");
    printf("Carta 1 - %s: %lu\n", city, population);
    printf("Carta 2 - %s: %lu\n", cityTwo, populationTwo);
    if (population > populationTwo)
    {
        printf("População: Carta 1 Venceu!\n");
    }
    else
    {
        printf("População: Carta 2 Venceu!\n");
    }

    printf("Atributo: PIB\n");
    printf("Carta 1 - %s: %.2f\n", city, pib);
    printf("Carta 2 - %s: %.2f\n", cityTwo, pibTwo);
    if (pib > pibTwo)
    {
        printf("PIB: Carta 1 Venceu!\n");
    }
    else
    {
        printf("PIB: Carta 2 Venceu!\n");
    }

    printf("Atributo: Pontos Turísticos\n");
    printf("Carta 1 - %s: %d\n", city, points_tur);
    printf("Carta 2 - %s: %d\n", cityTwo, points_turTwo);
    if (points_tur > points_turTwo)
    {
        printf("Pontos Turísticos: Carta 1 Venceu!\n");
    }
    else
    {
        printf("Pontos Turísticos: Carta 2 Venceu!\n");
    }

    printf("Atributo: Densidade Populacional\n");
    printf("Carta 1 - %s: %.2f\n", city, density);
    printf("Carta 2 - %s: %.2f\n", cityTwo, densityTwo);
    if (density < densityTwo)
    {
        printf("Densidade Populacional: Carta 1 Venceu!\n");
    }
    else
    {
        printf("Densidade Populacional: Carta 2 Venceu!\n");
    }

    printf("Atributo: PIB per Capita\n");
    printf("Carta 1 - %s: %.2f\n", city, pibpercapita);
    printf("Carta 2 - %s: %.2f\n", cityTwo, pibpercapitaTwo);
    if (pibpercapita > pibpercapitaTwo)
    {
        printf("PIB per Capita: Carta 1 Venceu!\n");
    }
    else
    {
        printf("PIB per Capita: Carta 2 Venceu!\n");
    }

    printf("Atributo: Super Poder\n");
    printf("Carta 1 - %s: %.2f\n", city, superPowerOne);
    printf("Carta 2 - %s: %.2f\n", cityTwo, superPowerTwo);
    if (superPowerOne > superPowerTwo)
    {
        printf("Super Poder: Carta 1 Venceu!\n");
    }
    else
    {
        printf("Super Poder: Carta 2 Venceu!\n");
    }

    return 0;
}