#include <stdio.h>

int main() {

    // variaveis para a carta 01
    char estado01;
    char codCarta01[4] = "", nomeCidade01[20] = "";
    unsigned long int populacao01 = 0;
    int numPontosTuristicos01 = 0;
    float area01 = 0, pib01 = 0;
    float densidadePop01 = 0, pibPerCapta01 = 0;
    float superPoder01 = 0;

    // variaveis para a cara 02
    char estado02;
    char codCarta02[4] = "", nomeCidade02[20] = "";
    unsigned long int populacao02 = 0;
    int numPontosTuristicos02 = 0;
    float area02 = 0, pib02 = 0;
    float densidadePop02 = 0, pibPerCapta02 = 0;
    float superPoder02 = 0;

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
    scanf("%lu", &populacao01);

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
    scanf("%lu", &populacao02);

    printf("Digite a área da cidade %s em quilômetros quadrados: ", nomeCidade02);
    scanf("%f", &area02);

    printf("Digite o Produto Interno Bruto da cidade %s: ", nomeCidade02);
    scanf("%f", &pib02);

    printf("Digite a quantidade de pontos turísticos na cidade %s: ", nomeCidade02);
    scanf("%d", &numPontosTuristicos02);

    // Calculando a Densidade Populacional e o PIB Per Capta da Carta 02
    densidadePop02 = (float) populacao02 / area02;
    pibPerCapta02 = pib02 / (float) populacao02;

    // Calculando os Super Poderes
    superPoder01 = populacao01 + numPontosTuristicos01 + area01 + pib01 + pibPerCapta01 + (1 / densidadePop01);
    superPoder02 = populacao02 + numPontosTuristicos02 + area02 + pib02 + pibPerCapta02 + (1 / densidadePop02);

    // Mostrando as cartas na tela
    printf("\n\n==CARTA 01==\n");
    printf("Estado: %c\n", estado01);
    printf("Código: %s\n", codCarta01);
    printf("Nome da Cidade: %s\n", nomeCidade01);
    printf("População: %lu habitantes\n", populacao01);
    printf("Área: %.2f km²\n", area01);
    printf("PIB: R$%.2f \n", pib01);
    printf("Número de Pontos Turísticos: %d\n", numPontosTuristicos01);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePop01);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapta01);
    
    printf("\n\n==CARTA 02==\n");
    printf("Estado: %c\n", estado02);
    printf("Código: %s\n", codCarta02);
    printf("Nome da Cidade: %s\n", nomeCidade02);
    printf("População: %lu habitantes\n", populacao02);
    printf("Área: %.2f km²\n", area02);
    printf("PIB: R$%.2f \n", pib02);
    printf("Número de Pontos Turísticos: %d\n", numPontosTuristicos02);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePop02);
    printf("PIB per Capita: R$ %.2f\n\n", pibPerCapta02);

    // COMPARANDO AS CARTAS

    // int compPopulacao = (populacao01 > populacao02 ? 1 : 2);
    // int compArea = (area01 > area02 ? 1 : 2);
    // int compPIB = (pib01 > pib02 ? 1 : 2);
    // int compPtsTuristicos = (numPontosTuristicos01 > numPontosTuristicos02 ? 1 : 2);
    // int compDensidade = (densidadePop01 < densidadePop02 ? 1 : 2);
    // int compPPP = (pibPerCapta01 > pibPerCapta02 ? 1 : 2);
    // int compSuperPoder = (superPoder01 > superPoder02 ? 1 : 2);

    int ptsCarta01 = 0, ptsCarta02 = 0;

    printf("*****COMPARANDO OS ATRIBUTOS*****\n");

    if (populacao01 > populacao02) { // Comparando o atributo POPULAÇÃO.
        printf("População: Carta 1 venceu!!!\n");
        ptsCarta01++;
    } else {
        printf("População: Carta 2 venceu!!!\n");
        ptsCarta02++;
    }

    if (area01 > area02) { // Comparando o atributo AREA.
        printf("Área: Carta 1 venceu!!!\n");
        ptsCarta01++;
    } else {
        printf("Área: Carta 2 venceu!!!\n");
        ptsCarta02++;
    }

    if (pib01 > pib02) { // Comparando o atributo PIB.
        printf("PIB: Carta 1 venceu!!!\n");
        ptsCarta01++;
    } else {
        printf("PIB: Carta 2 venceu!!!\n");
        ptsCarta02++;
    }

    if (numPontosTuristicos01 > numPontosTuristicos02) { // Comparando o atributo NUMERO DE PONTOS TURISTICOS.
        printf("Pontos Turísticos: Carta 1 venceu!!!\n");
        ptsCarta01++;
    } else {
        printf("Pontos Turísticos: Carta 2 venceu!!!\n");
        ptsCarta02++;
    }
    
    if (densidadePop01 < densidadePop02) { // Comparando o atributo DENSIDADE POPULACIONAL.
        printf("Densidade Populacional: Carta 1 venceu!!!\n");
        ptsCarta01++;
    } else {
        printf("Densidade Populacional: Carta 2 venceu!!!\n");
        ptsCarta02++;
    }

    if (pibPerCapta01 > pibPerCapta02) { // Comparando o atributo PIB PER CAPTA.
        printf("PIB per Capta: Carta 1 venceu!!!\n");
        ptsCarta01++;
    } else {
        printf("PIB per Capta: Carta 2 venceu!!!\n");
        ptsCarta02++;
    }

    if (superPoder01 > superPoder02) { // Comparando o atributo SUPER PODER.
        printf("Super Poder: Carta 1 venceu!!!\n\n");
        ptsCarta01++;
    } else {
        printf("Super Poder: Carta 2 venceu!!!\n\n");
        ptsCarta02++;
    }

    if (ptsCarta01 > ptsCarta02) { // Verificando quem pontuou mais.
        printf("**PARABÉNS, CARTA 1 VENCEU**\n\n");
    } else {
        printf("**PARABÉNS, CARTA 2 VENCEU**\n\n");
    }

    printf("Obrigado por jogar! Até mais...\n\n");

    return 0;

}