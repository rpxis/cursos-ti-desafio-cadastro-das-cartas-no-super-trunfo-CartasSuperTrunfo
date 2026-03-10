#include <stdio.h>

// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main()
{
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char statecard, code[50], city[50];
    int population, points_tur;
    float area, pib;

    // Cadastro das Cartas:
    printf("Digite o estado (A-H): \n");
    scanf(" %c", &statecard);

    printf("Digite o código da carta: \n");
    scanf("%s", code);

    getchar(); // limpa o ENTER do buffer

    printf("Digite a cidade: \n");
    fgets(city, 50, stdin);

    // LIMPEZA DO \n
    city[strcspn(city, "\n")] = 0;

    printf("Digite a população: \n");
    scanf("%d", &population);

    printf("Digite a área: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Quantidade de pontos turísticos: \n");
    scanf("%d", &points_tur);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\n=== DADOS DA CARTA ===\n");
    printf("Estado: %c\n", statecard);
    printf("Código: %s\n", code);
    printf("Nome da cidade: %s\n", city);
    printf("População: %d\n", population);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", points_tur);

    return 0;
}
