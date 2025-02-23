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

    int ptsCarta01 = 0, ptsCarta02 = 0, opcao1 = 0, opcao2 = 0;

    printf("*****COMPARANDO OS ATRIBUTOS*****\n");

    // Criando Menu Interativo para o usuário

    printf("1. Comparar População.\n");
    printf("2. Comparar Área.\n");
    printf("3. Comparar PIB.\n");
    printf("4. Comparar Número de Pontos Turísticos.\n");
    printf("5. Comparar Densidade Populacional.\n");
    printf("6. Comparar PIB per Capta.\n");
    printf("7. Comparar Super Poder.\n");

    printf("\nEscolha o primeiro atributo: ");
    scanf("%d", &opcao1);

    switch (opcao1) {
        case 1: // Comparando o atributo POPULAÇÃO.

            printf("\n#Comparando População#\n");
            printf("=> Cidade %s - População: %lu\n", nomeCidade01, populacao01);
            printf("=> Cidade %s - População: %lu\n", nomeCidade02, populacao02);

            (populacao01 > populacao02) ? (ptsCarta01++) : 
            (populacao02 > populacao01) ? (ptsCarta02++) : 
            (ptsCarta01++, ptsCarta02++);
            break;
        case 2: // Comparando o atributo AREA.

            printf("\n#Comparando Área#\n");
            printf("=> Cidade %s - Área: %.2f\n", nomeCidade01, area01);
            printf("=> Cidade %s - Área: %.2f\n", nomeCidade02, area02);

            (area01 > area02) ? (ptsCarta01++) : (area02 > area01) ? (ptsCarta02++) : (ptsCarta01++, ptsCarta02++);
            break;
        case 3: // Comparando o atributo PIB.

            printf("\n#Comparando PIB#\n");
            printf("=> Cidade %s - PIB: %.2f\n", nomeCidade01, pib01);
            printf("=> Cidade %s - PIB: %.2f\n", nomeCidade02, pib02);

            (pib01 > pib02) ? (ptsCarta01++) : 
            (pib02 > pib01) ? (ptsCarta02++) : 
            (ptsCarta01++, ptsCarta02++);
            break;
        case 4: // Comparando o atributo NUMERO DE PONTOS TURISTICOS.

            printf("\n#Comparando Número de Pontos Turísticos#\n");
            printf("=> Cidade %s - Número de Pontos Turísticos: %d\n", nomeCidade01, numPontosTuristicos01);
            printf("=> Cidade %s - Número de Pontos Turísticos: %d\n", nomeCidade02, numPontosTuristicos02);

            (numPontosTuristicos01 > numPontosTuristicos02) ? (ptsCarta01++) : 
            (numPontosTuristicos02 > numPontosTuristicos01) ? (ptsCarta02++) : 
            (ptsCarta01++, ptsCarta02++);
            break;
        case 5: // Comparando o atributo DENSIDADE POPULACIONAL.

            printf("\n#Comparando Densidade Populacional#\n");
            printf("=> Cidade %s - Densidade Populacional: %.2f\n", nomeCidade01, densidadePop01);
            printf("=> Cidade %s - Densidade Populacional: %.2f\n", nomeCidade02, densidadePop02);

            (densidadePop01 < densidadePop02) ? (ptsCarta01++) : 
            (densidadePop02 < densidadePop01) ? (ptsCarta02++) : 
            (ptsCarta01++, ptsCarta02++);
            break;
        case 6: // Comparando o atributo PIB PER CAPTA.

            printf("\n#Comparando PIB per Capta#\n");
            printf("=> Cidade %s - PIB per Capta: %.2f\n", nomeCidade01, pibPerCapta01);
            printf("=> Cidade %s - PIB per Capta: %.2f\n", nomeCidade02, pibPerCapta02);

            (pibPerCapta01 > pibPerCapta02) ? (ptsCarta01++) : 
            (pibPerCapta02 > pibPerCapta01) ? (ptsCarta02++) : 
            (ptsCarta01++, ptsCarta02++);
            break;
        case 7: // Comparando o atributo SUPER PODER.

            printf("\n#Comparando Super Poder#\n");
            printf("=> Cidade %s - Super Poder: %.2f\n", nomeCidade01, superPoder01);
            printf("=> Cidade %s - Super Poder: %.2f\n", nomeCidade02, superPoder02);

            (superPoder01 > superPoder02) ? (ptsCarta01++) : 
            (superPoder02 > superPoder01) ? (ptsCarta02++) : 
            (ptsCarta01++, ptsCarta02++);
            break;
        default:
            printf("\nOpção Inválida... Saindo do Jogo...\n");
    }

    printf("\n1. Comparar População.\n");
    printf("2. Comparar Área.\n");
    printf("3. Comparar PIB.\n");
    printf("4. Comparar Número de Pontos Turísticos.\n");
    printf("5. Comparar Densidade Populacional.\n");
    printf("6. Comparar PIB per Capta.\n");
    printf("7. Comparar Super Poder.\n");

    printf("\nEscolha o segundo atributo: ");
    scanf("%d", &opcao2);

    if (opcao1 == opcao2) {
        printf("\nVoce escolheu o mesmo atributo!");
        printf("\nOpção Inválida... Saindo do Jogo...\n");
        return 0;
    }

    switch (opcao2) {
        case 1: // Comparando o atributo POPULAÇÃO.

            printf("\n#Comparando População#\n");
            printf("=> Cidade %s - População: %lu\n", nomeCidade01, populacao01);
            printf("=> Cidade %s - População: %lu\n", nomeCidade02, populacao02);

            (populacao01 > populacao02) ? (ptsCarta01++) : 
            (populacao02 > populacao01) ? (ptsCarta02++) : 
            (ptsCarta01++, ptsCarta02++);
            break;
        case 2: // Comparando o atributo AREA.

            printf("\n#Comparando Área#\n");
            printf("=> Cidade %s - Área: %.2f\n", nomeCidade01, area01);
            printf("=> Cidade %s - Área: %.2f\n", nomeCidade02, area02);

            (area01 > area02) ? (ptsCarta01++) : 
            (area02 > area01) ? (ptsCarta02++) : 
            (ptsCarta01++, ptsCarta02++);
            break;
        case 3: // Comparando o atributo PIB.

            printf("\n#Comparando PIB#\n");
            printf("=> Cidade %s - PIB: %.2f\n", nomeCidade01, pib01);
            printf("=> Cidade %s - PIB: %.2f\n", nomeCidade02, pib02);

            (pib01 > pib02) ? (ptsCarta01++) : 
            (pib02 > pib01) ? (ptsCarta02++) : 
            (ptsCarta01++, ptsCarta02++);
            break;
        case 4: // Comparando o atributo NUMERO DE PONTOS TURISTICOS.

            printf("\n#Comparando Número de Pontos Turísticos#\n");
            printf("=> Cidade %s - Número de Pontos Turísticos: %d\n", nomeCidade01, numPontosTuristicos01);
            printf("=> Cidade %s - Número de Pontos Turísticos: %d\n", nomeCidade02, numPontosTuristicos02);

            (numPontosTuristicos01 > numPontosTuristicos02) ? (ptsCarta01++) : 
            (numPontosTuristicos02 > numPontosTuristicos01) ? (ptsCarta02++) : 
            (ptsCarta01++, ptsCarta02++);
            break;
        case 5: // Comparando o atributo DENSIDADE POPULACIONAL.

            printf("\n#Comparando Densidade Populacional#\n");
            printf("=> Cidade %s - Densidade Populacional: %.2f\n", nomeCidade01, densidadePop01);
            printf("=> Cidade %s - Densidade Populacional: %.2f\n", nomeCidade02, densidadePop02);

            (densidadePop01 < densidadePop02) ? (ptsCarta01++) : 
            (densidadePop02 < densidadePop01) ? (ptsCarta02++) : 
            (ptsCarta01++, ptsCarta02++);
            break;
        case 6: // Comparando o atributo PIB PER CAPTA.

            printf("\n#Comparando PIB per Capta#\n");
            printf("=> Cidade %s - PIB per Capta: %.2f\n", nomeCidade01, pibPerCapta01);
            printf("=> Cidade %s - PIB per Capta: %.2f\n", nomeCidade02, pibPerCapta02);

            (pibPerCapta01 > pibPerCapta02) ? (ptsCarta01++) : 
            (pibPerCapta02 > pibPerCapta01) ? (ptsCarta02++) : 
            (ptsCarta01++, ptsCarta02++);
            break;
        case 7: // Comparando o atributo SUPER PODER.

            printf("\n#Comparando Super Poder#\n");
            printf("=> Cidade %s - Super Poder: %.2f\n", nomeCidade01, superPoder01);
            printf("=> Cidade %s - Super Poder: %.2f\n", nomeCidade02, superPoder02);

            (superPoder01 > superPoder02) ? (ptsCarta01++) : 
            (superPoder02 > superPoder01) ? (ptsCarta02++) : 
            (ptsCarta01++, ptsCarta02++);
            break;
        default:
            printf("\nOpção Inválida... Saindo do Jogo...\n");
    }


    if (ptsCarta01 > ptsCarta02) { // Verificando quem pontuou mais.
        printf("\n**PARABÉNS, CARTA 1 VENCEU**\n\n");
        printf("==CARTA 01==\n");
        printf("Estado: %c\n", estado01);
        printf("Código: %s\n", codCarta01);
        printf("Nome da Cidade: %s\n", nomeCidade01);
        printf("População: %lu habitantes\n", populacao01);
        printf("Área: %.2f km²\n", area01);
        printf("PIB: R$%.2f \n", pib01);
        printf("Número de Pontos Turísticos: %d\n", numPontosTuristicos01);
        printf("Densidade Populacional: %.2f hab/km²\n", densidadePop01);
        printf("PIB per Capita: R$ %.2f\n\n", pibPerCapta01);
    } else if (ptsCarta02 > ptsCarta01) {
        printf("\n**PARABÉNS, CARTA 2 VENCEU**\n\n");
        printf("==CARTA 02==\n");
        printf("Estado: %c\n", estado02);
        printf("Código: %s\n", codCarta02);
        printf("Nome da Cidade: %s\n", nomeCidade02);
        printf("População: %lu habitantes\n", populacao02);
        printf("Área: %.2f km²\n", area02);
        printf("PIB: R$%.2f \n", pib02);
        printf("Número de Pontos Turísticos: %d\n", numPontosTuristicos02);
        printf("Densidade Populacional: %.2f hab/km²\n", densidadePop02);
        printf("PIB per Capita: R$ %.2f\n\n", pibPerCapta02);
    } else {
        printf("\n****DEU EMPATE****\n\n");

        printf("==CARTA 01==\n");
        printf("Estado: %c\n", estado01);
        printf("Código: %s\n", codCarta01);
        printf("Nome da Cidade: %s\n", nomeCidade01);
        printf("População: %lu habitantes\n", populacao01);
        printf("Área: %.2f km²\n", area01);
        printf("PIB: R$%.2f \n", pib01);
        printf("Número de Pontos Turísticos: %d\n", numPontosTuristicos01);
        printf("Densidade Populacional: %.2f hab/km²\n", densidadePop01);
        printf("PIB per Capita: R$ %.2f\n\n", pibPerCapta01);

        printf("==CARTA 02==\n");
        printf("Estado: %c\n", estado02);
        printf("Código: %s\n", codCarta02);
        printf("Nome da Cidade: %s\n", nomeCidade02);
        printf("População: %lu habitantes\n", populacao02);
        printf("Área: %.2f km²\n", area02);
        printf("PIB: R$%.2f \n", pib02);
        printf("Número de Pontos Turísticos: %d\n", numPontosTuristicos02);
        printf("Densidade Populacional: %.2f hab/km²\n", densidadePop02);
        printf("PIB per Capita: R$ %.2f\n\n", pibPerCapta02);

    }

    printf("Obrigado por jogar! Até mais...\n\n");

    return 0;

}