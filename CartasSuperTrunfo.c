#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  char estado[25];
  char codigo[25];
  char cidade[25];
  int populacao;
  int turismo;
  float area;
  float pib;

printf("nome do estado: ", estado);
scanf("%s", estado);

printf("codigo da carta: ", codigo);
scanf("%s", codigo);

printf("digite a cidade: ", cidade);
scanf("%s", cidade);

printf("digite o numero da populacao: ", populacao);
scanf("%d", &populacao);

printf("digite o numero da area: ", area);
scanf("%f", &area);

printf("digite o valor do pib: ", pib);
scanf("%f", &pib);

printf("digite os numero de pontos turisticos: ", turismo);
scanf("%d", &turismo);

printf("Estado: %s\n", estado);
printf("Codigo: %s\n", codigo);
printf("Cidade: %s\n", cidade);
printf("Populacao: %d de habitantes\n", populacao);
printf("Area: %f de Km²\n", area);
printf("PIB: %f de reais\n", pib);
printf("Numero de pontos turisticos: %d\n", turismo);


  char estado2[25];
  char codigo2[25];
  char cidade2[25];
  int populacao2;
  int turismo2;
  float area2;
  float pib2;

printf("nome do estado: ", estado2);
scanf("%s", estado2);

printf("codigo da carta: ", codigo2);
scanf("%s", codigo2);

printf("digite a cidade: ", cidade2);
scanf("%s", cidade2);

printf("digite o numero da populacao: ", populacao2);
scanf("%d", &populacao2);

printf("digite o numero da area: ", area2);
scanf("%f", &area2);

printf("digite o valor do pib: ", pib2);
scanf("%f", &pib2);

printf("digite os numero de pontos turisticos: ", turismo2);
scanf("%d", &turismo2);

printf("Estado: %s\n", estado2);
printf("Codigo: %s\n", codigo2);
printf("Cidade: %s\n", cidade2);
printf("Populacao: %d de habitantes\n", populacao2);
printf("Area: %f de Km²\n", area2);
printf("PIB: %f de reais\n", pib2);
printf("Numero de pontos turisticos: %d\n", turismo2);


return 0;

} 
