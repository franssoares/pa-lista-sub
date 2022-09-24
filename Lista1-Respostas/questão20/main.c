#include <stdio.h>
#include <stdlib.h>
#include "gc.h"
#include <assert.h>
#include <time.h>

/*

    Com  base  no  programa-exemplo  da  questão  anterior,  proponha  uma  aplicação  que  permita
    comparar o desempenho das funções tradicionais de alocação/liberação de memória da
    linguagem c (malloc/free) com as funções de gerenciamento de memória da biblioteca que você
    escolheu. A aplicação deverá ser capaz de ressaltar possíveis atrasos de tempo provenientes do
    coletor de lixo utilizado.


*/

//rand vetor
void randvetor(float *pvetor, int *pn){

    //valores randomicos do vetor
    for ( int i = 0 ; i < *pn ; i++ ){

        pvetor[i] = rand()%100;

    }

}

//imprimir o vetor
void imprimirvetor(int *p1n, float *pvetor){

    int i, n = *p1n;

    for ( i = 0 ; i < n ; i++){

        if (i == 0){

            printf("V = [ ");

        }

        if ( i != n-1 ){

            printf(" %.2f, ", pvetor[i]);
            
        }

        if( i == n-1 ){

            printf(" %.2f ] \n", pvetor[i]);

        }

    }
}

//procedimento -> método do bubblesort
void ordenar(int *pn, float *pvetor){

    float temp;
    int n = *pn;

    //laço de ordenação
    for (int i = 0; i < n; i++){

        for (int j = 0 ; j < n-1 ; j++){

            if ( pvetor[j] > pvetor[j+1]){

                temp = pvetor[j];

                pvetor[j] = pvetor[j+1];

                pvetor[j+1] = temp; 

             }

        }

    }

}

//função principal
int main(){

    //declarações
    float t, t1, t2, *vetor, *vetor_gc;
    int i, n, n1;
    t = clock(); //começa a contar daqui

    //alocando o espaço de memória para o vetor
    vetor = malloc(n*sizeof(float));
    vetor_gc = GC_MALLOC(n*sizeof(float));

    //entrada de dados
    printf("Informe o tamaho do vetor: \n");
    scanf("%d", &n);
    n1 = n;

    /*BLOCO 1*/

    //valores randomicos do vetor
    randvetor(vetor, &n);

    //imprimir o vetor
    imprimirvetor(&n, vetor);
    
    //primeira chamada da ordenação que criei sem o qsort (com o tempo de execução)
    ordenar(&n, vetor);

    //imprimir o vetor
    imprimirvetor(&n, vetor);

    t1 = (clock() - t);

    /*BLOCO 2*/

    //valores randomicos do vetor
    randvetor(vetor_gc, &n);

    //imprimir o vetor
    imprimirvetor(&n, vetor);
    
    //chamada da função quickysort com os seguintes parâmetros (vetor, tamanho do vetor, tamanho alocadom, método de comparação) -> (com o tempo de execução).
    ordenar(&n1, vetor_gc);
    
    //imprimir o vetor
    imprimirvetor(&n, vetor_gc);

    t2 = (clock() - t);

    //saida
    printf("Tempo de execucao de alocação por malloc foi = %.10f s\n", t1/CLOCKS_PER_SEC);
    printf("Tempo de execucao de alocacao por GC_MALLOC foi = %.10f s", t2/CLOCKS_PER_SEC);

    //liberar
    free(vetor);

    return 0;

}