#include <stdio.h>
#include <string.h>

/*
    
    Reimplemente o programa da questão anterior utilizando a função qsort() do C. Comente o seu
    código, explicando o que faz cada uma das linhas.

*/

//função do parâmetro do qsort(), servindo os elementos do vetor para fazer a ordenação dos valores do vetor.
int comparador(const void * p1, const void * p2){

  return (*(int*)p1 - *(int*)p2);

}

//função principal
int main(void){

    float *vetor;
    int i, n;

    //entrada de dados
    printf("Informe o tamaho do vetor: \n");
    scanf("%d", &n);

    //alocando o espaço de memória para o vetor
    vetor = (float*) malloc(n*sizeof(float));

    //valores randomicos do vetor
    for ( i = 0 ; i < n ; i++){

        vetor[i] = rand()%100;

    }

    //imprimir o vetor
    for ( i = 0 ; i < n ; i++){

        if (i == 0){

            printf("V = [ ");

        }

        if ( i != n-1 ){

            printf(" %.2f, ", vetor[i]);
            
        }

        if( i == n-1 ){

            printf(" %.2f ] \n", vetor[i]);

        }

    }

    //chamada da função quickysort com os seguintes parâmetros (vetor, tamanho do vetor, tamanho alocadom, método de comparação).
    qsort(vetor, n, sizeof(float), comparador);

    //imprimir o vetor
    for ( i = 0 ; i < n ; i++){

        if (i == 0){

            printf("V = [ ");

        }

        if ( i != n-1 ){

            printf(" %.2f, ", vetor[i]);
            
        }

        if( i == n-1 ){

            printf(" %.2f ] \n", vetor[i]);

        }

    }

    //liberar o vetor alocado
    free(vetor); 

}