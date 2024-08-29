#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char nome;
    char codigo;
    int populacao;
    int pontoturistico;
    float area;
    float pib;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("cadastre sua primeira carta!\n");
    printf("digite o codigo: \n");
    scanf("%s", &codigo);
    printf("digite o nome da cidade: \n");
    scanf("%s", &nome);
    printf("digite a populacao: \n");
    scanf("%d", &populacao);
    printf("digite a area da cidade: \n");
    scanf("%f", &area);
    printf("digite o pib da cidade: \n");
    scanf("%f", &pib);
    printf("digite o numero de ponto turistico: \n");
    scanf(" %d", &pontoturistico);

  
    
    
    
    
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
