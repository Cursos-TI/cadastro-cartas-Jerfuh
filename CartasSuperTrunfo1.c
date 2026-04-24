#include <stdio.h>

int main() {
    // Declaração das variáveis para a Carta 1
    char estado1, codigo1[4], nome1[50];
    unsigned long int populacao1;
    float area1, pib1, densidade1, pib_capita1;
    int pontos1;

    // Declaração das variáveis para a Carta 2
    char estado2, codigo2[4], nome2[50];
    unsigned long int populacao2;
    float area2, pib2, densidade2, pib_capita2;
    int pontos2;

    // --- ENTRADA DE DADOS (Exemplo simplificado) ---
    // No seu programa real, você usaria scanf para ler esses valores
    
    // Dados da Carta 1
    estado1 = 'A';
    sprintf(codigo1, "A01");
    sprintf(nome1, "São Paulo");
    populacao1 = 12325000;
    area1 = 1521.11;
    pib1 = 699.28; // em bilhões
    pontos1 = 50;

    // Dados da Carta 2
    estado2 = 'B';
    sprintf(codigo2, "B02");
    sprintf(nome2, "Rio de Janeiro");
    populacao2 = 6748000;
    area2 = 1200.25;
    pib2 = 300.50; // em bilhões
    pontos2 = 30;

    // --- PROCESSAMENTO (Requisito de Eficiência) ---
    // Cálculo: População dividida pela área
    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;

    // Cálculo: PIB (convertido para reais) dividido pela população
    pib_capita1 = (pib1 * 1000000000) / populacao1;
    pib_capita2 = (pib2 * 1000000000) / populacao2;

    // --- SAÍDA DE DADOS (Requisito de Legibilidade) ---
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n\n", pib_capita1);

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_capita2);

    return 0;
}
