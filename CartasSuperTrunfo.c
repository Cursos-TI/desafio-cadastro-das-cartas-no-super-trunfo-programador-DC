#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
   char estado;
   int cidade;
   int populacao;
   float area;
   float pib;
   int pontoturistico;

    // Cadastro das Cartas:
    printf(" cadastramento das cartas:\n");

    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o codigo da carta, seguindo as intruções:\n");
    printf("Coloque uma letra de A a H, para repersentar o estado:\n");
    scanf("%c", &estado);
    printf("Digite um número de 1 a 4, para representar a cidade: \n");
    scanf("%d", &cidade);
    printf("Digite a populacao (sem colocar . ou ,): \n");
    scanf("%d", &populacao);
    printf("Digite a área em km² (inserindo o ponto): \n");
    scanf("%f", &area);
    printf("Digite o pib da cidade (inserindo o ponto): \n");
    scanf("%f", &pib);
    printf("Digite os números totais de pontos turisticos: \n");
    scanf(" %d", &pontoturistico);

    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Dados da carta cadastrada:\n");
    printf("O codigo da carta é: %c%02d\n", estado, cidade);
    printf("O estado é: %c\n", estado);
    printf("A cidade é: %d\n", cidade);
    printf("A população é: %d\n", populacao);
    printf("A área da cidade é: %.2f km²\n", area);
    printf("O pib da cidade é: %.2f bilhões\n", pib);
    printf("O número de pontos turisticos da cidade é: %d \n", pontoturistico);

    return 0;
}
