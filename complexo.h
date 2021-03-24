#ifndef COMPLEX_H
#define COMPLEX_H

typedef struct complexo complexo;

// Função para alocar um número complexo
complexo * alocaNum ( float a, float b);

// Função responsável por liberar memória
void liberaMemoria ( complexo *nc);

//Função que realiza a soma os dois números complexos
complexo * somaComplexos ( complexo *nc1, complexo *nc2);

//Função que subtrai dois complexos
complexo * subtraiComplexos (complexo *nc1, complexo *nc2);

//Função responsável pela multiplicação de dois números complexos
complexo * multiplicaComplexo (complexo *nc1, complexo *nc2);

//Função responsável pela divisão de dois números complexos
complexo * divideComplexo (complexo *nc1, complexo *nc2);

void imprimeComplexo ( complexo *nc);

#endif//COMPLEX_H