#include <stdio.h>

int main() {
    // --- DECLARAÇÃO DAS VARIÁVEIS ---
    char estado1, codigo1[4], nome1[50];
    unsigned long int populacao1;
    float area1, pib1, densidade1, pib_capita1, superPoder1; // Adicionado superPoder
    int pontos1;

    char estado2, codigo2[4], nome2[50];
    unsigned long int populacao2;
    float area2, pib2, densidade2, pib_capita2, superPoder2; // Adicionado superPoder
    int pontos2;

    // --- ENTRADA DE DADOS ---
    // (Mantive seus dados de exemplo, mas você pode usar scanf se preferir)
    estado1 = 'A';
    sprintf(codigo1, "A01");
    sprintf(nome1, "São Paulo");
    populacao1 = 12325000;
    area1 = 1521.11;
    pib1 = 699.28;
    pontos1 = 50;

    estado2 = 'B';
    sprintf(codigo2, "B02");
    sprintf(nome2, "Rio de Janeiro");
    populacao2 = 6748000;
    area2 = 1200.25;
    pib2 = 300.50;
    pontos2 = 30;

    // --- PROCESSAMENTO (Cálculos Base) ---
    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;

    pib_capita1 = (pib1 * 1000000000) / populacao1;
    pib_capita2 = (pib2 * 1000000000) / populacao2;

    // --- CÁLCULO DO SUPER PODER (Nível Mestre) ---
    // Soma de atributos. Para densidade, usamos o inverso (1/densidade) 
    // porque quanto menor a densidade, maior o poder.
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontos1 + pib_capita1 + (1.0f / densidade1);
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontos2 + pib_capita2 + (1.0f / densidade2);

    // --- SAÍDA DE DADOS (Relatório das Cartas) ---
    printf("--- DADOS DAS CARTAS ---\n");
    printf("Carta 1 (%s): Densidade %.2f | PIB Capita %.2f | Poder %.2f\n", nome1, densidade1, pib_capita1, superPoder1);
    printf("Carta 2 (%s): Densidade %.2f | PIB Capita %.2f | Poder %.2f\n\n", nome2, densidade2, pib_capita2, superPoder2);

    // --- COMPARAÇÃO DE CARTAS (A Batalha!) ---
    printf("--- RESULTADO DA BATALHA ---\n");

    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos1 > pontos2);
    
    // Regra especial: Menor densidade vence (operador <)
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);
    
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_capita1 > pib_capita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}
