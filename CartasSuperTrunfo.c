#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // variaveis para a carta 01
    char estado01;
    char codCarta01[4], nomeCidade01[20] = "";
    int populacao01, numPontosTuristicos01 = 0;
    float area01, pib01 = 0;

    // variaveis para a cara 02
    char estado02;
    char codCarta02[4], nomeCidade02[20] = "";
    int populacao02, numPontosTuristicos02 = 0;
    float area02, pib02 = 0;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

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
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Mostrando as cartas na tela
    printf("\n\n==CARTA 01==\n");
    printf("Estado: %c\n", estado01);
    printf("Código: %s\n", codCarta01);
    printf("Nome da Cidade: %s\n", nomeCidade01);
    printf("População: %d habitantes\n", populacao01);
    printf("Área: %.2f km²\n", area01);
    printf("PIB: %.2f bilhões de reais\n", pib01);
    printf("Número de Pontos Turísticos: %d\n", numPontosTuristicos01);
    
    printf("\n\n==CARTA 02==\n");
    printf("Estado: %c\n", estado02);
    printf("Código: %s\n", codCarta02);
    printf("Nome da Cidade: %s\n", nomeCidade02);
    printf("População: %d habitantes\n", populacao02);
    printf("Área: %.2f km²\n", area02);
    printf("PIB: %.2f bilhões de reais\n", pib02);
    printf("Número de Pontos Turísticos: %d\n", numPontosTuristicos02);

    return 0;
}
