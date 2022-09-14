#include <stdio.h>
#include <string.h>

/*
    
    Implemente em linguagem C uma função em um programa de computador que leia n valores do
    tipo  float  e  os  apresente  em  ordem  crescente.  Utilize  alocação  dinâmica  de  memória  para
    realizar a tarefa

*/

//procedimento -> método do bubblesort
void ordenar(int *pn, float *pvetor){

    float temp;

    //laço de ordenação
    for (int i = 0; i < (*pn); i++){

        for (int j = 0 ; j < (*pn)-1 ; j++){

            if ( pvetor[j] > pvetor[j+1]){

                temp = pvetor[j];

                pvetor[j] = pvetor[j+1];

                pvetor[j+1] = temp; 

             }

        }

    }

    //imprimir o vetor
    for (int  i = 0 ; i < *pn ; i++){

        if (i == 0){

            printf("V = [ ");

        }

        if ( i != *pn-1 ){

            printf(" %.2f, ", pvetor[i]);
            
        }

        if( i == *pn-1 ){

            printf(" %.2f ] \n", pvetor[i]);

        }

    }

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

    //chamada da função
    ordenar( &n, vetor );

    //liberar o vetor alocado
    free(vetor); 

}