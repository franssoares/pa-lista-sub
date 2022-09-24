#include <stdio.h>
#include <stdlib.h>

/*

    Crie  uma  função  capaz  de  realizar  multiplicação  matricial  da  forma  C=A  B.  A  função  deve
    receber 6 argumentos: os ponteiros para as matrizes A, B e C, o número de linhas e colunas de A
    e o número de colunas de B (assuma que o número de coluna de A é igual ao número de linhas
    de B). 
    
    O resultado da multiplicação deve ficar armazenado em C. Crie um programa para testar
    sua  implementação,  capaz  de  utilizar  a  função  de  multiplicação  e  imprimir  as  três  matrizes.  A
    função criada para multiplicação não deve realizar nenhum tipo de saída de dados no terminal.

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
    system("cls");

    //alocar matrizes
    A = (int**)malloc(linA*sizeof(int*));
    A[0] = (int*)malloc(linA*colA*sizeof(int));
    B = (int**)malloc(linB*sizeof(int*));
    B[0] = (int*)malloc(linB*colB*sizeof(int)); 
    C = (int**)malloc(linB*sizeof(int*));
    C[0] = (int*)malloc(linB*colA*sizeof(int));  

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

    //liberar memória alocada
    free(A[0]);
    free(B[0]);
    free(C[0]);
    free(A);
    free(B);
    free(C);

    return 0;

}