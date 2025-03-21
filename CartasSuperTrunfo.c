#include <stdio.h>

int main() {

    char estado1[] = "SP";
    char codigo1[] = "A01";
    char nomeCidade1[] = "São Paulo";
    long populacao1 = 11895578;
    float area1 = 1521.0;
    double pib1 = 3.5;
    int pontosTuristicos1 = 100;


    char estado2[] = "RS";
    char codigo2[] = "A02";
    char nomeCidade2[] = "Porto Alegre";
    long populacao2 = 1333000;
    float area2 = 496.8;
    double pib2 = 54.647;
    int pontosTuristicos2 = 25;

   
    printf("Informações sobre a cidade - Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %ld\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f trilhões\n", pib1);
    printf("Número de Pontos Turísticos: %d\n\n", pontosTuristicos1);


    printf("Informações sobre a cidade - Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %ld\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.3f milhões\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
