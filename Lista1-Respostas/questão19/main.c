#include <stdio.h>
#include <stdlib.h>
#include "gc.h"
#include <assert.h>

/*

    Pesquise na Internet sobre o uso da biblioteca libGC, que implementa um coletor de lixo em C. O
    processo  de  instalação  dessa  biblioteca  em  sistemas  Windows  pode  ser  um  pouco  trabalhoso.
    Entretanto,  em  sistemas  Unix,  a  instalação  é  bem  simples,  de  sorte  que  se  recomenda  a
    resolução desta questão em uma máquina, por exemplo, com Linux instalado. Caso seja usuário
    Windows e não queira instalar sistemas alternativos em seu computador, use uma ferramenta
    de  virtualização  (ex:  VirtualBox)  para  instalar  e  executar  o  Linux  sem  alterar  a  instalação
    original de seu computador. Prepare um pequeno programa-exemplo demonstrando como usar
    a biblioteca.

*/

//função da operação entre matrizes(PROCEDIMENTO)
void multiplicar_matrizes(int **pA, int **pB, int **pC, int *plina, int *pcola, int *pcolb){

    int lina = *plina, cola = *pcola, colb = *pcolb, soma;

    //multiplicador
    for(int i = 0 ; i < lina ; i++ ){

        for( int j = 0 ; j < colb ; j++ ){

            soma = 0;

            for( int k = 0 ; k < cola; k++ ){

                soma = soma + pA[i][k]*pB[k][j];

            }

            pC[i][j] = soma;

        }

    }

}

//imprimir a matriz
void imprimir_matriz(int **pA, int *plin, int *pcol){

    int i, lin = *plin, col = *pcol;

    //imprimir matriz
    for (int k = 0 ; k < lin ; k++ ){

        for ( i = 0 ; i < col ; i++){

            if (i == 0){

                if (k != 0 ) printf("    [ ");

                else printf(" = [ ");

            }

            if ( i != col-1 ){

                if(pA[k][i] < 10){

                    printf(" %d  ", pA[k][i]);

                }

                else printf(" %d ", pA[k][i]);
                
            }

            if( i == col-1 ){

                printf(" %d ] \n", pA[k][i]);

            }

        }

    }

    printf("\n");

}

//gerar matriz aleatória
void gerar_matriz(int **pmatriz, int *plin, int *pcol){

    int lin = *plin, col = *pcol;

    for (int i = 0 ; i < lin ; i++){

        for(int j = 0 ; j < col ; j++){

            pmatriz[i][j] = rand()%5;

        }

    }

}

//função principal
int main(){

    //entradas
    int **A, **B, **C, linA, linB, colA, colB;
    printf("Informe as dimensoes da matriz A. (obs: L|C) ");
    scanf(" %d %d", &linA, &colA);
    printf("Informe as colunas da matriz B: ");
    scanf(" %d", &colB);
    linB = colA;  
    
    //alocar matrizes
    A = (int**)GC_MALLOC(linA*sizeof(int*));
    A[0] = (int*)GC_MALLOC(linA*colA*sizeof(int));
    B = (int**)GC_MALLOC(linB*sizeof(int*));
    B[0] = (int*)GC_MALLOC(linB*colB*sizeof(int)); 
    C = (int**)GC_MALLOC(linB*sizeof(int*));
    C[0] = (int*)GC_MALLOC(linB*colA*sizeof(int));  

    //matriz A
    for(int i = 1 ; i < linA ; i++){

        A[i] = A[i-1] + colA;

    }

    //matriz B
    for(int i = 1 ; i < linB ; i++){

        B[i] = B[i-1] + colB;

    }

    //matriz C
    for(int i = 1 ; i < linB ; i++){

        C[i] = C[i-1] + colB;

    }

    //gerador de matrizes
    gerar_matriz( A, &linA, &colA );
    gerar_matriz( B, &linB, &colB );

    //operador de multiplicação de matrizes
    multiplicar_matrizes(A, B, C, &linA, &colA, &colB);

    //imprimir matrizes(Dinâmico)
    printf("A");
    imprimir_matriz( A, &linA, &colA );
    printf("B");
    imprimir_matriz( B, &linB, &colB );
    printf("\nCalculando C= A X B.\n\n");
    //sleep(1);
    //system("pause");
    //system("cls");
    printf("\nCalculado!\n\n\n");
    printf("C");
    imprimir_matriz( C, &linA, &colB );
    
    return 0;

}