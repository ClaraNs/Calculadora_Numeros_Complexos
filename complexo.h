#ifndef COMPLEX_H
#define COMPLEX_H

typedef struct complexo complexo;

// Funções para alocação e liberação de memória
complexo * alocaNum ( float a, float b);

void liberaMemoria ( complexo *nc);


//Funções que realizam as operações
complexo * somaComplexos ( complexo *nc1, complexo *nc2);

complexo * subtraiComplexos (complexo *nc1, complexo *nc2);

complexo * multiplicaComplexo (complexo *nc1, complexo *nc2);

complexo * divideComplexo (complexo *nc1, complexo *nc2);

//Função para imprimir
void imprimeComplexo ( complexo *nc);

#endif//COMPLEX_H
