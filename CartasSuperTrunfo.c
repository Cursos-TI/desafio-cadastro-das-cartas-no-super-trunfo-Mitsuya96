#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    printf("Desafio Super Trufo!\n");

     // Variáveis para a Carta 1 (Goiás)

        char Estado = 'G';
        char Codigo[] = "G01";
        char Cidade[] = "Goiânia";
        int População = 1516000;
        float Area1 = 739.5;
        float PIB1 = 50.0;
        int Pontos_turisticos = 15;

     // Variáveis para a Carta 2 (Minas Gerais)
      char Estado2 = 'M';
      char Codigo2[] = "M02";
      char Cidade2[] = "Belo Horizonte";
      int Populacao2 = 2522000;
      float Area2 = 331.4;
      float PIB2 = 120.0;
      int Pontos_turisticos2 = 25;

   // Leitura dos dados da Carta 1
   printf("Insira os dados da Carta 1 (Goiás):\n");
   printf("Estado (A-H): ");
   scanf(" %c", &Estado);
   printf("Código da Carta (ex: G01): ");
   scanf("%s", Codigo);
   printf("Nome da Cidade: ");
   scanf(" %[^\n]", Cidade);
   printf("População: ");
   scanf("%d", &População);
   printf("Área (em km²): ");
   scanf("%f", &Area1);
   printf("PIB (em bilhões de reais): ");
   scanf("%f", &PIB1);
   printf("Número de Pontos Turísticos: ");
   scanf("%d", &Pontos_turisticos);

   // Leitura dos dados da Carta 2
   printf("\nInsira os dados da Carta 2 (Minas Gerais):\n");
    printf("Estado (A-H): ");
    scanf(" %c", &Estado2);
    printf("Código da Carta (ex: M02): ");
    scanf("%s", Codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", Cidade2);
    printf("População: ");
    scanf("%d", &Populacao2);
    printf("Área (em km²): ");
    scanf("%f", &Area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &PIB2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &Pontos_turisticos2);

   // Exibição dos dados da Carta 1
   printf("Carta 1 (Goiás):\n");
   printf("Estado: %c\n", Estado);
   printf("Código: %s\n", Codigo);
   printf("Nome da Cidade: %s\n", Cidade);
   printf("População: %d\n", População);
   printf("Área: %.2f km²\n", Area1);
   printf("PIB: %.2f bilhões de reais\n", PIB1);
   printf("Número de Pontos Turísticos: %d\n", Pontos_turisticos);

   // Exibição dos dados da Carta 2
   printf("\nCarta 2 (Minas Gerais):\n");
   printf("Estado: %c\n", Estado2);
   printf("Código: %s\n", Codigo2);
   printf("Nome da Cidade: %s\n", Cidade2);
   printf("População: %d\n", Populacao2);
   printf("Área: %.2f km²\n", Area2);
   printf("PIB: %.2f bilhões de reais\n", PIB2);
   printf("Número de Pontos Turísticos: %d\n", Pontos_turisticos2);

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
