#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "complexo.h"

struct complexo {
    float a;
    float b; //acompanha "i"
} ;

// Função para alocar um número complexo
complexo * alocaNum ( float a, float b){

    complexo *nc = (complexo*) malloc (sizeof(complexo));

   if ( nc != NULL){
       nc->a = a;
       nc->b = b;
   }

   return nc;

}

// Função responsável por liberar memória
void liberaMemoria ( complexo *nc){
    free(nc);
}

//Função que realiza a soma os dois números complexos 
complexo * somaComplexos ( complexo *nc1, complexo *nc2){
    complexo *somac;
    float e, f;

    e = nc1->a + nc2 ->a;
    f= nc1->b +nc2 -> b;

    somac=alocaNum(e, f);
  
    return somac;
}

//Função que subtrai dois complexos
complexo * subtraiComplexos (complexo *nc1, complexo *nc2){
  float e,f;
  complexo *subc;

  e= nc1->a - nc2->a;
  f= nc1->b - nc2->b;

  subc=alocaNum(e, f);
  
  return subc;
}

//Função responsável pela multiplicação de dois números complexos
complexo * multiplicaComplexo (complexo *nc1, complexo *nc2){
  float e,f;
  complexo *multc;

  e=( (nc1->a * nc2->a)-(nc1->b * nc2->b));
  f=((nc1->b * nc2->a)+(nc1->a * nc2->b));

  multc= alocaNum(e, f);

  return multc;

}

//Função responsável pela divisão de dois números complexos
complexo * divideComplexo (complexo *nc1, complexo *nc2){
  float e,f;
  complexo *divic;

  e=((nc1->a * nc2->a) + ( nc1->b * nc2-> b)) / ((nc2->a * nc2->a) + (nc2->b * nc2->b));
  f=  ((nc1->b * nc2->a) - (nc1->a * nc2->b)) / ((nc2->a * nc2->a) + (nc2->b * nc2->b));

  divic= alocaNum(e, f);

  return divic;

}

//Função que imprime na tela um número complexo
void imprimeComplexo ( complexo *nc){

  if( nc->b > 0)
  {
    printf("%.2f + %.2fi", nc->a, nc->b);
  }
  else{
    if( nc->b < 0 )
    {
      printf("%.2f  %.2fi", nc->a, nc->b);
    }
    
  }
  
}
