#include <stdio.h>

int main() {

 //primeira carta
 char codigo1[4];
 int populacao1;
 float area1 , pib1;
 int pontosturisticos1;

  //segunda carta
  char codigo2[4];
  int populacao2;
  float area2 , pib2;
  int pontosturisticos2;
  
  printf("carta 1\n");
  printf("Digite o número do codigo(ex:A01): \n");
  scanf("%s" , &codigo1);
  
  printf("Digite o número da população: ");
  scanf("%d" , &populacao1);

  printf("Digite número da aréa:");
  scanf("%f" , &area1);

  printf("Digite o número do pib: ");
  scanf("%f" , &pib1);

  printf("Digite o Número de pontos turisticos: ");
  scanf("%d" , &pontosturisticos1);

  printf("agora cadastre a segunda carta\n");
  printf("digite o codigo(ex: B01):\n");
  scanf("%s", &codigo2);

  printf("Digite o número de populacao: ");
  scanf("%d" , &populacao2);

  printf("Digite a area: ");
  scanf("%f" , &area2);

  printf("digite o pib:");
  scanf("%f" , &pib2);

  printf("digite o número de pontos turisticos: ");
  scanf("%d" , &pontosturisticos2);

  printf("----Cartas cadastradas ---\n");

  printf("%s\n", codigo1);
  printf("População: %d  \n" , populacao1);
  printf("área: %.2f km2 \n" , area1);
  printf("pib:  %.2f Bilhoes\n" , pib1);
  printf("pontos turisticos: %d\n", pontosturisticos1);

  printf("segunda carta \n");

  printf("%s\n" , codigo2 );
  printf("população: %d\n", populacao2);
  printf("área: %.2d km2\n" , area2);
  printf("pib:  %.2f Bilhoes \n" ,  pib2);
  printf("pontos turisticos: %d\n" , pontosturisticos2);

  
return 0;
}
