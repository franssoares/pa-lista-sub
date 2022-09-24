#include <stdio.h>
#include <stdlib.h>


/*

    Escreva uma função em c que escreva em um vetor a soma dos elementos correspondentes de
    outros dois vetores (os tamanhos dos vetores devem ser fornecidos pelo usuário). Por exemplo,
    se o primeiro vetor contiver os elementos 1, 3, 0 e -2, e o segundo vetor contiver os elementos 3,
    5, -3 e 1, o vetor de soma terá valores resultantes iguais a 4, 8, -3 e -1. A função deve receber 4
    argumentos: os nomes dos três vetores e o número de elementos presentes em cada vetor

*/

//função de soma dos vetores
void somar_vetores(int *pvet1, int *pvet2, int *pvet, int *np){

    int n = *np;
    int *retorno = (int*)malloc(n*sizeof(int));

    for (int i = 0 ; i < n; i++){

        pvet[i] = pvet1[i] + pvet2[i];
        
    }

}

//função de valores aleatorios
void vet_aleatorio(int *vetor, int *pn){

    int n = *pn;

    for( int i = 0 ; i < n ; i++){

        vetor[i] = rand()%10;

    }

}

//imprimir o vetor
void imprimirvetor(int *p1n, int *pvetor){

    int i, n = *p1n;

    for ( i = 0 ; i < n ; i++){

        if (i == 0){

            printf("V = [ ");

        }

        if ( i != n-1 ){

            printf(" %d, ", pvetor[i]);
            
        }

        if( i == n-1 ){

            printf(" %d ] \n", pvetor[i]);

        }

    }
}

//função principal
int main(){

    int n, retorno;
    printf("Informe o tamanho dos vetores: ");
    scanf(" %d", &n);

    //alocar vetores
    int *vet1 = malloc(n*sizeof(int));
    int *vet2 = malloc(n*sizeof(int));
    int *vet = malloc(n*sizeof(int));

    //valores aleatorios dos vetores
    vet_aleatorio(vet1, &n);
    vet_aleatorio(vet2, &n);

    //imprimir vetores
    imprimirvetor(&n, vet1);
    imprimirvetor(&n, vet2);

    //somar vetores
    somar_vetores(vet1, vet2, vet, &n);
    imprimirvetor(&n, vet);

    //liberar
    free(vet1);
    free(vet2);
    free(vet);

    return 0;

}