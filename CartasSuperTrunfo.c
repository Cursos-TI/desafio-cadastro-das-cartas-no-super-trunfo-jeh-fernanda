#include <stdio.h>

int main() {
    // Dados da carta 1
    char codigo1[] = "A01";
    char estado1[] = "Ceara";
    char cidade1[] = "Fortaleza";
    float populacao1 = 247980;
    float pib1 = 250000;

    // Dados da carta 2
    char codigo2[] = "B02";
    char estado2[] = "Goias";
    char cidade2[] = "Goiania";
    float populacao2 = 127650;
    float pib2 = 370000;

    int escolha;

    // Exibe carta 1
    printf("=== CARTA 1 ===\n");
    printf("Codigo: %s\n", codigo1);
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %.0f\n", populacao1);
    printf("PIB: %.0f\n\n", pib1);

    // Exibe carta 2
    printf("=== CARTA 2 ===\n");
    printf("Codigo: %s\n", codigo2);
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %.0f\n", populacao2);
    printf("PIB: %.0f\n\n", pib2);



  
    return 0;
}
