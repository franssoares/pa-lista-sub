#include <stdio.h>
#include <time.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*

        Procure na internet mecanismos que possibilitem medir tempos de execução de rotinas
    computacionais. Geralmente, estas medidas são realizadas com o auxílio de funções em C que
    lêem a hora no sistema (sistemas Unix e Windows geralmente usam funções diferentes).

        Utilizando os conhecimentos que você obteve com sua pesquisa, meça os tempos de execução
    das implementações que você criou para os dois problemas de ordenação anteriores e compare
    os resultados obtidos.

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

//função do parâmetro do qsort(), servindo os elementos do vetor para fazer a ordenação dos valores do vetor.
int comparador(const void *p1, const void *p2){

    if (*(int*)p1 == *(int*)p2){

        return 0;

    }

    else{

        if(*(int*)p1 > *(int*)p2){

            return 1;

        }

        else{

            return -1;

        }

    }

  return (*(int*)p1 - *(int*)p2);

}

//função principal
int main(){

    //declarações
    float t, t1, t2, *vetor;
    int i, n, n1;
    t = clock(); //começa a contar daqui

    //alocando o espaço de memória para o vetor
    vetor = (float*) malloc(n*sizeof(float));

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
    randvetor(vetor, &n);

    //imprimir o vetor
    imprimirvetor(&n, vetor);
    
    //chamada da função quickysort com os seguintes parâmetros (vetor, tamanho do vetor, tamanho alocadom, método de comparação) -> (com o tempo de execução).
    qsort(vetor, n1, sizeof(float), comparador);
    
    //imprimir o vetor
    imprimirvetor(&n, vetor);

    t2 = (clock() - t);

    //saida
    printf("Tempo de execucao do metodo ordenacaoo construido (criado) = %.10f s\n", t1/CLOCKS_PER_SEC);
    printf("Tempo de execucao do metodo ordenacaoo da funcao qsort (criado) = %.10f s", t2/CLOCKS_PER_SEC);

    //liberar
    free(vetor);

    return 0;

}