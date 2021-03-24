#include <stdio.h>
#include <stdlib.h>
#include"complexo.h"

int main(void) {
  int op=0;
  float a, b, c, d;
  complexo *com1, *com2, *res;

  printf("\nNúmero complexo:\n");
  printf("\n     a     +     bi");
  printf("\n     |           |");
  printf("\nparte real   parte imaginária\n");
  
  //Entrada das informações para alocar os numero complexos
  printf("\nInsira a parte real do primeiro número complexo:");
  scanf(" %f", &a);
  printf("\nAgora a parte imaginária:");
  scanf(" %f", &b);

  com1 = alocaNum(a, b);
  system("clear");

  printf("\nNúmero complexo:\n");
  printf("\n     a     +     bi");
  printf("\n     |           |");
  printf("\nparte real   parte imaginária\n");
  
 
  printf("\nInsira a parte real do segundo número complexo:");
  scanf(" %f", &c);
  printf("\nAgora a parte imaginária:");
  scanf(" %f", &d);

  com2 = alocaNum(c, d);
  system("clear");

  //loop com menu de opções
  while( op != 7){

    printf("\nComplexo 1: ");
    imprimeComplexo(com1);
    printf("\nComplexo 2: ");
    imprimeComplexo(com2);
    printf("\n");

    printf("\n.:Menu:.\n");
    printf("\n1 - Complexo 1 + Complexo 2");
    printf("\n2 - Complexo 1 - Complexo 2");
    printf("\n3 - Complexo 2 - Complexo 1");
    printf("\n4 - Complexo 1 * Complexo 2");
    printf("\n5 - Complexo 1 / Complexo 2");
    printf("\n6 - Complexo 2 / Complexo 1");
    printf("\n7 - Sair");
    printf("\nEscolha uma opção:");
    scanf(" %d", &op);

    switch(op)
    {
      case 1:

      system("clear");
      res= somaComplexos(com1, com2);

      printf("Complexo 1 + Complexo 2 = ");
      imprimeComplexo(res);
      
      break;

      case 2:

      system("clear");
      res = subtraiComplexos(com1, com2);

      printf("Complexo 1 - Complexo 2 = ");
      imprimeComplexo(res);
      break;

      case 3:

      system("clear");
      res = subtraiComplexos(com2, com1);

      printf("Complexo 2 - Complexo 1 = ");
      imprimeComplexo(res);
      break;

      case 4:

      system("clear");
      res = multiplicaComplexo(com1, com2);

      printf("\nComplexo 1 * Complexo 2 = ");
      imprimeComplexo(res);
      break;

      case 5:

      system("clear");
      res=divideComplexo(com1, com2);

      printf("\nComplexo 1 / Complexo 2 = ");
      imprimeComplexo(res);
      break;

      case 6:

      system("clear");
      res=divideComplexo(com2, com1);


      printf("\nComplexo 2 / Complexo 1 = ");
      imprimeComplexo(res);
      break;

      case 7:

      system("clear");
      liberaMemoria(com1);
      liberaMemoria(com2);

      printf("\nEncerrando programa...");
      break;

      default:

      printf("\nOpção inválida");
      break;
    }

    printf("\n");

  }
  return 0;
}