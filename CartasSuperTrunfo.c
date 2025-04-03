// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa
// Sugestão: Defina variáveis separadas para cada atributo da cidade.
// Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
// Cadastro das Cartas:
// Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
// Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
// Exibição dos Dados das Cartas: // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
// Exiba os valores inseridos para cada atributo da cidade, um por linha.

#include <stdio.h>

// Definição da estrutura para armazenar os dados de uma carta

    typedef struct {
    char estado;
    char codigo[4];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
}   Carta;

    // Função para ler os dados de uma carta

    void lerCarta(Carta *carta, const char *nomeCarta) {
    printf("\nInsira os dados da %s:\n", nomeCarta);
    printf("Estado (A-H): ");
    scanf(" %c", &carta->estado);
    printf("Código da Carta (ex: G01): ");
    scanf("%s", carta->codigo);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta->cidade);
    printf("População: ");
    scanf("%d", &carta->populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta->area);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta->pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta->pontos_turisticos);
}

     // Função para exibir os dados de uma carta
    void exibirCarta(const Carta *carta, const char *nomeCarta) {
    printf("\n%s:\n", nomeCarta);
    printf("Estado: %c\n", carta->estado);
    printf("Código: %s\n", carta->codigo);
    printf("Nome da Cidade: %s\n", carta->cidade);
    printf("População: %d\n", carta->populacao);
    printf("Área: %.2f km²\n", carta->area);
    printf("PIB: %.2f bilhões de reais\n", carta->pib);
    printf("Número de Pontos Turísticos: %d\n", carta->pontos_turisticos);
}

int main() {
    printf("Desafio Super Trunfo!\n");

    // Declaração das cartas com inicialização designada
       Carta 
       carta1 = {
      .estado = 'G',
      .codigo = "G01",
      .cidade = "Goiânia",
      .populacao = 1516000,
      .area = 739.5,
      .pib = 50.0,
      .pontos_turisticos = 15
  };

       Carta 
       carta2 = {
      .estado = 'M',
      .codigo = "M02",
      .cidade = "Belo Horizonte",
      .populacao = 2522000,
      .area = 331.4,
      .pib = 120.0,
      .pontos_turisticos = 25
  };

       // Exibição dos dados das cartas
       exibirCarta(&carta1, "Carta 1 (Goiás)");
       exibirCarta(&carta2, "Carta 2 (Minas Gerais)");

       return 0;
}

