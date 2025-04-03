#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    printf("Desafio Super Trufo! \n");

    //Variável  para a Carta 1 (Goiás)
    char Estado1;
    char Código1[4];
    char Cidade1[50];
    int  População1;
    float Area1;
    float PIB1;
    int pontos_turisticos1;

    //Variável  para a Carta 2 (Minas Gerai)
    char Estado2;
    char Código2[4];
    char Cidade2[50];
    int  População2;
    float Area2;
    float PIB2;
    int  pontos_turisticos2;

    //Leitura dos Dados da Carta 1

    printf("Insira os dados da Carta 1 (Goiás): \n");
    printf("Estado (A-H):");
    scanf("%c", &Estado1);
    printf("Código da Carta (ex: G01): ");
    scanf("%s", Código1);
    printf("Nome da Cidade: ");
    scanf ("%c[^\n]", Cidade1);
    printf("População: ");
    scanf("%d", &População1);
    printf("Área (em km²): ");
    scanf("%f", &Area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &PIB1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);

    //Leitura dos Dados da Carta 2
    printf("Insira os dados da Carta 2 (Minas Gerais): \n");
    printf("Estado (A-H):");
    scanf("%c", &Estado2);
    printf("Código da Carta (ex: G01): ");
    scanf("%s", Código2);
    printf("Nome da Cidade: ");
    scanf ("%c[^\n]", Cidade2);
    printf("População: ");
    scanf("%d", &População2);
    printf("Área (em km²): ");
    scanf("%f", &Area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &PIB2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);


      // Exibição dos dados da Carta 1
      printf("\n Carta 1:\n");
      printf("Estado: %c\n", Estado1);
      printf("Código: %s\n", Código1);
      printf("Nome da Cidade: %s\n", Cidade1);
      printf("População: %d\n", População1);
      printf("Área: %.2f km²\n", Area1);
      printf("PIB: %.2f bilhões de reais\n", PIB1);
      printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
  
      // Exibição dos dados da Carta 2
      printf("\nCarta 2:\n");
      printf("Estado: %c\n", Estado2);
      printf("Código: %s\n", Código2);
      printf("Nome da Cidade: %s\n", Cidade2);
      printf("População: %d\n", População2);
      printf("Área: %.2f km²\n", Area2);
      printf("PIB: %.2f bilhões de reais\n", PIB2);
      printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);


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
