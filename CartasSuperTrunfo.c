#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

void limpar_entrada(void) {
    char c;
    while((c = getchar()) != '\n' && c != EOF) {}
} // função que limpa o buffer de entrada de dados após quebra de linha

int main() {

  printf("Desafio do super trunfo!\n");
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Variáveis para a primeira carta:
  char estado1;
  char cidade1[30], codigo1[10];
  int populacao1, turistico1, num_cod1;
  double pib1, area1;
  // Variáveis para a segunda carta:
  char estado2;
  char cidade2[30], codigo2[10];
  int populacao2, turistico2, num_cod2;
  double pib2, area2;
  // Área para entrada de dados

  //Informações sobre a primeira carta:
  printf("Carta 1:\n");
    
  printf("Estado (A-H \"MAIUSCULO\"): ");
  scanf(" %c", &estado1); // Estado carta 1

  num_cod1 = estado1 - 'A' + 1;
  snprintf(codigo1, sizeof(codigo1), "%c0%d", estado1, num_cod1);
  printf("Codigo %s\n", codigo1); // Código carta 1
  
  printf("Nome da cidade: ");
  limpar_entrada();
  fgets(cidade1, sizeof(cidade1), stdin); 
  cidade1[strcspn(cidade1, "\n")] = '\0'; // Cidade carta 1
  
  printf("Populacao da cidade: ");
  scanf("%d", &populacao1); // População carta 1
  
  printf("Area da cidade (em metros quadrados): ");
  scanf("%lf", &area1); // Area da cidade carta 1
  
  printf("PIB da cidade (em bi): ");
  scanf("%lf", &pib1); // PIB carta 1
  
  printf("Numero de pontos turisticos: ");
  scanf("%d", &turistico1); // Numero de pontos turísticos carta 1

  //Informações sobre a segunda carta:
  printf("\nCarta 2:\n");
    
  printf("Estado (A-H \"MAIUSCULO\"): ");
  scanf(" %c", &estado2); // Estado carta 2

  num_cod2 = estado2 - 'A' + 1;
  snprintf(codigo2, sizeof(codigo2), "%c0%d", estado2, num_cod2);
  printf("Codigo %s\n", codigo2); // Código carta 2
  
  printf("Nome da cidade: ");
  limpar_entrada();
  fgets(cidade2, sizeof(cidade2), stdin); 
  cidade2[strcspn(cidade2, "\n")] = '\0'; // Cidade carta 2
  
  printf("Populacao da cidade: ");
  scanf("%d", &populacao2); // População carta 2
  
  printf("Area da cidade (em metros quadrados): ");
  scanf("%lf", &area2); // Area da cidade carta 2
  
  printf("PIB da cidade (em bi): ");
  scanf("%lf", &pib2); // PIB carta 2
  
  printf("Numero de pontos turisticos: ");
  scanf("%d", &turistico2); // Numero de pontos turísticos carta 2
  
  // Área para exibição dos dados da cidade
  // Exibição dos dados da primeira carta:
  printf("\nCarta 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Codigo: %s\n", codigo1);
  printf("Nome da cidade: %s\n", cidade1);
  printf("Populacao: %d\n", populacao1);
  printf("Area: %.2lf km2\n", area1);
  printf("PIB: %.2lf bilhoes de reais\n", pib1);
  printf("Numero de pontos turisticos: %d\n", turistico1);

  // Exibição dos dados da segunda carta:
  printf("\nCarta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Nome da cidade: %s\n", cidade2);
  printf("Populacao: %d\n", populacao2);
  printf("Area: %.2lf km2\n", area2);
  printf("PIB: %.2lf bilhoes de reais\n", pib2);
  printf("Numero de pontos turisticos: %d\n", turistico2);



return 0;
} 
