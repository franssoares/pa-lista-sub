#include <stdio.h>

/*
    Problema: caso 'i' e 'j' não tenham seus valores declarados, o endereço de memória onde estão armazenados as variáveis, os valores podem ser a
    leatórios devido ao resíduo de memória. ILEGAL.
    */

int main(void){

    int i = 3, j, *p, *q;
    
    p = i; // Como 'p' é um ponteiro, e a passagem de 'i' é por valor, 'p' recebe uma cópia do conteúdo de 'i'. Correto.
    q = &j; // correto
    p = &*&i; // Correto
    i = (*&)j; //operadores de deferência e endereço fora do escopo. ILEGAL.
    i = *&j; // 'i' não é um ponteiro recebe apenas o conteúdo de 'j'. ILEGAL.
    i = *&*&j; //correto
    q = *p; // correto
    i = (*p)++ + *q; // correto

}