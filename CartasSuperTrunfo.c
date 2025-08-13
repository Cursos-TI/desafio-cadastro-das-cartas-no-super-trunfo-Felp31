#include <stdio.h>

int main() {
    // Variáveis da primeira cidade
    char cod1[4] = "A01", nome1[30] = "Solaria";
    int pop1 = 150000;
    float area1 = 1234.56, pib1 = 9876.54;
    int pontos1 = 7;

    // Variáveis da segunda cidade
    char cod2[4] = "B02", nome2[30] = "Luminor";
    int pop2 = 230000;
    float area2 = 2456.78, pib2 = 12345.67;
    int pontos2 = 10;

    // Exibição dos dados da primeira cidade
    printf("\n--- Carta 1 ---\n");
    printf("Código: %s\n", cod1);
    printf("Nome: %s\n", nome1);
    printf("População: %d\n", pop1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontos1);

    // Exibição dos dados da segunda cidade
    printf("\n--- Carta 2 ---\n");
    printf("Código: %s\n", cod2);
    printf("Nome: %s\n", nome2);
    printf("População: %d\n", pop2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);

    return 0;
}