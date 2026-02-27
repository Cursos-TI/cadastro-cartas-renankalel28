#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

//carta 1
    // inserindo os itens a serem exibidos da carta 1, o usuario escolherá os valores
    char estadoEscolhido1;
    int numero1;
    char cidade1[50];
    int habitantes1;
    float Area1, PIB1;
    int PTUR1;
// o usuario escolhe o estado e digita sua inicial de A a H
    printf("- Cadastre a Carta 1 - \nDigite o Estado (letra de 'A' a 'H'): \n");
    scanf(" %c", &estadoEscolhido1);
// o usuario escolhe o codigo do estado digitando um numero de 01 a 08
    printf("Digite o codigo do Estado (numero de 01-08): \n");
    scanf("%d", &numero1);
// o usuario escreve o nome da cidade (não pode haver espaço)
    printf("Escreva o nome da cidade(sem espacao): \n");
    scanf(" %49s",cidade1);
// o usuario escreve o numero de habitantes da cidade escolhida
    printf("Digite o numero de habitantes da cidade: \n");
    scanf("%d", &habitantes1);
// o usuario digita o valor da area da cidade escolhida
    printf("Digite a area da cidade em km²: \n");
    scanf("%f", &Area1);
// o usuario digita o PIB da cidade escolhida
    printf("Digite o PIB da cidade em R$: \n");
    scanf("%f", &PIB1);
// o usuario digita o numero de pontos turisticos da cidade escolhida
    printf("Digite o numero de pontos turisticos da cidade: \n");
    scanf("%d", &PTUR1);
// o programa imprimi/mostra as informaçoes fornecidas pelo usuario para a carta 1
    printf("\nCARTA 1\n");
    printf("Estado: %c\n", estadoEscolhido1);
    printf("Codigo do estado: %d %c\n", numero1, estadoEscolhido1);
    printf("Cidade: %s\n", cidade1);
    printf("Numero de habitantes: %d\n", habitantes1);
    printf("Area: %.2f km²\n", Area1);
    printf("PIB: R$ %.2f\n", PIB1);
    printf("Pontos turisticos: %d\n", PTUR1);
     
    //carta 2
    // inserindo os itens a serem exibidos da carta 2, o usuario escolherá os valores
    char estadoEscolhido2;
    int numero2;
    char cidade2[50];
    int habitantes2;
    float Area2, PIB2;
    int PTUR2;
// o usuario escolhe o estado e digita sua inicial de A a H
    printf("\n- Cadastre a Carta 2 - \nDigite o Estado (letra de 'A' a 'H'): \n");
    scanf(" %c", &estadoEscolhido2);
// o usuario escolhe o codigo do estado digitando um numero de 01 a 08
    printf("Digite o codigo do Estado (numero de 01-08): \n");
    scanf("%d", &numero2);
// o usuario escreve o nome da cidade (nao pode haver espaço)
    printf("Escreva o nome da cidade(sem espaco): \n");
    scanf(" %49s", cidade2);
// o usuario escreve o numero de habitantes da cidade escolhida
    printf("Digite o numero de habitantes da cidade: \n");
    scanf("%d", &habitantes2);
// o usuario digita o valor da area da cidade escolhida
    printf("Digite a area da cidade em km²: \n");
    scanf("%f", &Area2);
// o usuario digita o PIB da cidade escolhida
    printf("Digite o PIB da cidade em R$: \n");
    scanf("%f", &PIB2);
// o usuario digita o numero de pontos turisticos da cidade escolhida
    printf("Digite o numero de pontos turisticos da cidade: \n");
    scanf("%d", &PTUR2);
// o programa imprimi/mostra as informaçoes fornecidas pelo usuario para a carta 2
    printf("\nCARTA 2\n");
    printf("Estado: %c\n", estadoEscolhido2);
    printf("Codigo do estado: %d %c\n", numero2, estadoEscolhido2);
    printf("Cidade: %s\n", cidade2);
    printf("Numero de habitantes: %d\n", habitantes2);
    printf("Area: %.2f km²\n", Area2);
    printf("PIB: R$ %.2f\n", PIB2);
    printf("Pontos turisticos: %d\n", PTUR2);

return 0;
} 
