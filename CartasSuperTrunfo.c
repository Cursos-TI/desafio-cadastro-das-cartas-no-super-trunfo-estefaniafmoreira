#include <stdio.h>
#define MAX_CIDADES 32

int main(){
  char codigo[4];  // Ex: A01, B02;
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;

     printf("Bem-vindo ao sistema de cadastro de cartas do Super Trunfo!\n");
    

     printf("Código da cidade (ex: A01):\n");
     scanf("%c", &codigo);

     printf("Nome da cidade:\n");
     scanf("%s",&nome);

     printf("População: \n");
     scanf("%d", &populacao);

     printf("Área(km²):\n");
     scanf("%f",&area);

     printf("PIB:%.2f bilhões\n");
     scanf("%f",&pib);

     printf("Número de pontos turísticos:\n");
     scanf("%d\n",pontos_turisticos);

     printf("\n========== Cartas cadastradas ==========\n");

     printf("\nCódigo: %s\n");
     printf("Nome: %s\n");
     printf("População: %d habitantes\n");
     printf("Área: %.2f km²\n");
     printf("PIB: %.2f bilhões\n");
     printf("Pontos turísticos: %d\n");

return 0;

}
