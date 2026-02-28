#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Variáveis Carta 1

  char Estado1;
  char Código1[10];
  char Nome_da_Cidade1[20];
  int População1;
  float Área1;
  float PIB1;
  int Número_de_pontos_turísticos1;
  float Densidade_Populacional1;
  float PIB_per_Capita1;

  
  // Variáveis Carta 2

  char Estado2;
  char Código2[10];
  char Nome_da_Cidade2[20];
  int População2;
  float Área2;
  float PIB2;
  int Número_de_pontos_turísticos2;
  float Densidade_Populacional2;
  float PIB_per_Capita2;


  
  // Área para entrada de dados
  // Entrada de dados Carta 1

  printf("CARTA 1 \n");
  printf("Digite o Estado carta 1: \n");
  scanf("%c", &Estado1);

  printf("Digite o Código carta 1: \n");
  scanf("%s", Código1);

  printf("Digite nome da cidade carta 1: \n");
  scanf("%s", &Nome_da_Cidade1);

  printf("Digite a população carta 1: \n");
  scanf("%d", &População1);

  printf("Digite a área carta 1: \n");
  scanf("%f", &Área1);

  printf("Digite o PIB carta 1: \n");
  scanf("%f", &PIB1);

  printf("Digite o número de pontos turísticos carta 1: \n");
  scanf("%d", &Número_de_pontos_turísticos1);

  Densidade_Populacional1 = (float)(População1 / Área1);
  PIB_per_Capita1 = (float)(PIB1 / População1);

  

  // Entrada de dados Carta 2
  
  printf("CARTA 2 \n");
  printf("Digite o Estado carta 2: \n");
  scanf(" %c", &Estado2);

  printf("Digite o Código carta 2: \n");
  scanf(" %s", Código2);

  printf("Digite nome da cidade carta 2: \n");
  scanf(" %s", &Nome_da_Cidade2);

  printf("Digite a população carta 2: \n");
  scanf(" %d", &População2);

  printf("Digite a área carta 2: \n");
  scanf(" %f", &Área2);

  printf("Digite o PIB carta 2: \n");
  scanf(" %f", &PIB2);

  printf("Digite o número de pontos turísticos carta 2: \n");
  scanf(" %d", &Número_de_pontos_turísticos2);

  Densidade_Populacional2 = (float)(População2 / Área2);
  PIB_per_Capita2 = (float)(PIB2 / População2);

  
  // Área para exibição dos dados da cidade
  // Exibição dados Carta 1

  printf("CARTA 1 \n");
  printf("Estado: %c \n", Estado1);
  printf("Código: %s \n", Código1);
  printf("Nome da Cidade: %s \n", Nome_da_Cidade1);
  printf("População: %d \n", População1);
  printf("Área: %f km² \n", Área1);
  printf("PIB: %f bilhões de reais \n", PIB1);
  printf("Número de pontos turísticos: %d \n", Número_de_pontos_turísticos1);
  printf("Densidade Populacional: %.2f \n", Densidade_Populacional1);
  printf ("PIB per Capita: %.2f", PIB_per_Capita1);
  printf("\n \n");

  // Exibição dados Carta 2

  printf("CARTA 2 \n");
  printf("Estado: %c \n", Estado2);
  printf("Código: %s \n", Código2);
  printf("Nome da Cidade: %s \n", Nome_da_Cidade2);
  printf("População: %d \n", População2);
  printf("Área: %f km² \n", Área2);
  printf("PIB: %f bilhões de reais \n", PIB2);
  printf("Número de pontos turísticos: %d \n", Número_de_pontos_turísticos2);
  printf("Densidade Populacional: %.2f \n", Densidade_Populacional2);
  printf ("PIB per Capita: %.2f", PIB_per_Capita2);


return 0;
}





