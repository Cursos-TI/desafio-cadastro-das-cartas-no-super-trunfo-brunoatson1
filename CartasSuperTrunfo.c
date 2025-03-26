#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    int codigo;
    char nome[100];
    int populacao;
    float area;
    float pib;
    int pontos_turismo;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Cadastro da Carta - Cidade\n");

    printf("Informe o código da cidade: ");
    scanf("%d", &codigo);

    printf("Informe o nome da cidade: ");
    getchar();  // Limpa o buffer do teclado
    fgets(nome, sizeof(nome), stdin);

    printf("Informe a população da cidade: ");
    scanf("%d", &populacao);

    printf("Informe a área da cidade (em km²): ");
    scanf("%f", &area);

    printf("Informe o PIB da cidade (em bilhões de R$): ");
    scanf("%f", &pib);

    printf("Informe o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turismo);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\n--- Dados Cadastrados ---\n");
    printf("Código da cidade: %d\n", codigo);
    printf("Nome da cidade: %s", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f bilhões\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turismo);

    return 0;
}
