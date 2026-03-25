#include <stdio.h>

// Desafio Super Trunfo - Países
//NIVEL MESTRE
int main() {

//carta 1
    // inserindo os itens a serem exibidos da carta 1, o usuario escolherá os valores
    char estadoEscolhido1;
    int numero1;
    char cidade1[50];
   unsigned long int habitantes1;
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
    scanf("%lu", &habitantes1);
// o usuario digita o valor da area da cidade escolhida
    printf("Digite a area da cidade em km²: \n");
    scanf("%f", &Area1);
// o usuario digita o PIB da cidade escolhida
    printf("Digite o PIB da cidade em R$: \n");
    scanf("%f", &PIB1);
// o usuario digita o numero de pontos turisticos da cidade escolhida
    printf("Digite o numero de pontos turisticos da cidade: \n");
    scanf("%d", &PTUR1);
    float densidadePopulacional1 = habitantes1 / Area1; // calculando a densidade populacional
    float pibPerCapita1 = PIB1 / habitantes1; // calculando o PIB per capita
    float SuperPoder1 = habitantes1 + Area1 + PIB1 + PTUR1 + (1 / densidadePopulacional1) + pibPerCapita1; 
    // calculando o super poder da carta 1
    //(super poder é a soma de todas as categorias, mais o inverso da densidade populacional,
    // para que uma cidade com menor densidade populacional tenha um super poder maior,
    // e o PIB per capita, para que uma cidade com um PIB per capita maior tenha um super poder maior)

    // o programa imprime/mostra as informaçoes fornecidas pelo usuario para a carta 1
    printf("\nCARTA 1\n");
    printf("Estado: %c\n", estadoEscolhido1);
    printf("Codigo do estado: %d %c\n", numero1, estadoEscolhido1);
    printf("Cidade: %s\n", cidade1);
    printf("Numero de habitantes: %d\n", habitantes1);
    printf("Area: %.2f km²\n", Area1);
    printf("PIB: R$ %.2f\n", PIB1);
    printf("Pontos turisticos: %d\n", PTUR1);
    printf("Densidade populacional: %.2f habitantes/km²\n", densidadePopulacional1);
    printf("PIB per capita: R$ %.2f\n", pibPerCapita1);
    printf("SuperPoder:%.2f\n",SuperPoder1);
     
    //carta 2
    // inserindo os itens a serem exibidos da carta 2, o usuario escolherá os valores
    char estadoEscolhido2;
    int numero2;
    char cidade2[50];
  unsigned long int habitantes2;
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
    scanf("%lu", &habitantes2);
// o usuario digita o valor da area da cidade escolhida
    printf("Digite a area da cidade em km²: \n");
    scanf("%f", &Area2);
// o usuario digita o PIB da cidade escolhida
    printf("Digite o PIB da cidade em R$: \n");
    scanf("%f", &PIB2);
// o usuario digita o numero de pontos turisticos da cidade escolhida
    printf("Digite o numero de pontos turisticos da cidade: \n");
    scanf("%d", &PTUR2);
    float densidadePopulacional2 = habitantes2 / Area2; // calculando a densidade populacional
    float pibPerCapita2 = PIB2 / habitantes2; // calculando o PIB per capita
    float SuperPorder2 = habitantes2 + Area2 + PIB2 + PTUR2 + (1 / densidadePopulacional2 ) + pibPerCapita2; // calculando o super poder da carta 2


    // o programa imprime/mostra as informaçoes fornecidas pelo usuario para a carta 2
    printf("\nCARTA 2\n");
    printf("Estado: %c\n", estadoEscolhido2);
    printf("Codigo do estado: %d %c\n", numero2, estadoEscolhido2);
    printf("Cidade: %s\n", cidade2);
    printf("Numero de habitantes: %lu\n", habitantes2);
    printf("Area: %.2f km²\n", Area2);
    printf("PIB: R$ %.2f\n", PIB2);
    printf("Pontos turisticos: %d\n", PTUR2);
    printf("Densidade populacional: %.2f habitantes/km²\n", densidadePopulacional2);
    printf("PIB per capita: R$ %.2f\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", SuperPorder2);

// comparando as categorias das cartas e mostrando o vencedor de cada categoria usando if e else,
// o jogador com o maior valor em cada categoria vence, exceto na categoria de densidade populacional, 
// onde o jogador com o menor valor vence.

if  (habitantes1 > habitantes2)
    {printf ("\nHabitantes: Jogador 1 Venceu\n");}
    else
    {printf ("\nHabitantes: jogador 2 venceu\n");}
if  (Area1 > Area2)
    {printf ("Area: Jogador 1 Venceu\n");}
    else
    {printf ("Area: jogador 2 venceu\n");}
if  (PIB1 > PIB2)
    {printf ("PIB: Jogador 1 Venceu\n");}
    else
    {printf ("PIB: jogador 2 venceu\n");}
if  (PTUR1 > PTUR2)
    {printf ("Pontos turisticos: Jogador 1 Venceu\n");}
    else
    {printf ("Pontos turisticos:  jogador 2 venceu\n");}
if  (densidadePopulacional1 < densidadePopulacional2)
    {printf ("Densidade populacional: Jogador 1 Venceu!\n");}
    else
    {printf ("Densidade populacional: jogador 2 venceu!\n");}    
if  (pibPerCapita1 > pibPerCapita2)
    {printf ("PIB per capita: Jogador 1 Venceu!\n");}
    else    
    {printf ("PIB per capita: jogador 2 venceu!\n");}
if (SuperPoder1 > SuperPorder2)
{printf("Super Poder: Jogador 1 venceu!\n");}
    else
    {printf("Super Poder: O jogador 2 venceu!\n");}
return 0;
} 

