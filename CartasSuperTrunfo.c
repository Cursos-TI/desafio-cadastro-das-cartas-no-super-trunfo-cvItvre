#include <stdio.h>

int main() {

    // variaveis para a carta 01
    char estado01;
    char codCarta01[4], nomeCidade01[20] = "";
    int populacao01, numPontosTuristicos01 = 0;
    float area01, pib01 = 0;
    float densidadePop01, pibPerCapta01;

    // variaveis para a cara 02
    char estado02;
    char codCarta02[4], nomeCidade02[20] = "";
    int populacao02, numPontosTuristicos02 = 0;
    float area02, pib02 = 0;
    float densidadePop02, pibPerCapta02;

    printf("=====CADASTRO CARTA SUPER TRUNFO=====\n\n");

    // Cadastrando a Carta 01.
    printf("=> Cadastro Carta 1\n");
    
    printf("Digite o Estado da carta (Uma letra de 'A' a 'H'): ");
    scanf(" %c", &estado01);

    printf("Digite o Código da Carta (EstadoNumero, com números entre 01-04 (ex: A01, B03)): ");
    scanf(" %s", codCarta01);

    printf("Digite o nome da Cidade: ");
    scanf(" %s", nomeCidade01);

    printf("Digite o número de habitantes da cidade %s: ", nomeCidade01);
    scanf("%d", &populacao01);

    printf("Digite a área da cidade %s em quilômetros quadrados: ", nomeCidade01);
    scanf("%f", &area01);

    printf("Digite o Produto Interno Bruto da cidade %s: ", nomeCidade01);
    scanf("%f", &pib01);

    printf("Digite a quantidade de pontos turísticos na cidade %s: ", nomeCidade01);
    scanf("%d", &numPontosTuristicos01);

    // Calculando a Densidade Populacional e o PIB Per Capta da Carta 01
    densidadePop01 = (float) populacao01 / area01;
    pibPerCapta01 = pib01 / (float) populacao01;

    // Cadastrando a Carta 02.
    printf("\n=> Cadastro Carta 2\n");
    
    printf("Digite o Estado da carta (Uma letra de 'A' a 'H'): ");
    scanf(" %c", &estado02);

    printf("Digite o Código da Carta (EstadoNumero, com números entre 01-04 (ex: A01, B03)): ");
    scanf(" %s", codCarta02);

    printf("Digite o nome da Cidade: ");
    scanf(" %s", nomeCidade02);

    printf("Digite o número de habitantes da cidade %s: ", nomeCidade02);
    scanf("%d", &populacao02);

    printf("Digite a área da cidade %s em quilômetros quadrados: ", nomeCidade02);
    scanf("%f", &area02);

    printf("Digite o Produto Interno Bruto da cidade %s: ", nomeCidade02);
    scanf("%f", &pib02);

    printf("Digite a quantidade de pontos turísticos na cidade %s: ", nomeCidade02);
    scanf("%d", &numPontosTuristicos02);

    // Calculando a Densidade Populacional e o PIB Per Capta da Carta 02
    densidadePop02 = (float) populacao02 / area02;
    pibPerCapta02 = pib02 / (float) populacao02;

    // Mostrando as cartas na tela
    printf("\n\n==CARTA 01==\n");
    printf("Estado: %c\n", estado01);
    printf("Código: %s\n", codCarta01);
    printf("Nome da Cidade: %s\n", nomeCidade01);
    printf("População: %d habitantes\n", populacao01);
    printf("Área: %.2f km²\n", area01);
    printf("PIB: R$ %.2f \n", pib01);
    printf("Número de Pontos Turísticos: %d\n", numPontosTuristicos01);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePop01);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapta01);
    
    printf("\n\n==CARTA 02==\n");
    printf("Estado: %c\n", estado02);
    printf("Código: %s\n", codCarta02);
    printf("Nome da Cidade: %s\n", nomeCidade02);
    printf("População: %d habitantes\n", populacao02);
    printf("Área: %.2f km²\n", area02);
    printf("PIB: R$ %.2f \n", pib02);
    printf("Número de Pontos Turísticos: %d\n", numPontosTuristicos02);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePop02);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapta02);

    return 0;

}