#include <stdio.h>

/*

    Determine  o  que  será  mostrado  pelo  seguinte  programa  
    (compile-o,  execute-o  e  verifique  se foram obtidas as respostas esperadas).

*/

int main(void){

    float vet[5] = {1.1,2.2,3.3,4.4,5.5}; //declaração do tamanho do vetor e seu conteúdo em float.
    float *f;   //declaração do ponteiro 'f'.
    int i;  //declaração do inteiro 'i'.
    f = vet; //o ponteiro 'f' recebe o endereço de memória '&vet[0]'.
    printf("contador/valor/valor/endereco/endereco");

    for(i = 0 ; i <= 4 ; i++){

        printf("\ni = %d",i);
        printf("vet[%d] = %.1f",i, vet[i]);
        printf("*(f + %d) = %.1f",i, *(f+i));
        printf("&vet[%d] = %X",i, &vet[i]);
        printf("(f + %d) = %X",i, f+i);

    }

    /*
    O laço 'for' irá imprimir:

        i = 0vet[0] = 1.1*(f + 0) = 1.1&vet[0] = 61FF04(f + 0) = 61FF04
        i = 1vet[1] = 2.2*(f + 1) = 2.2&vet[1] = 61FF08(f + 1) = 61FF08
        i = 2vet[2] = 3.3*(f + 2) = 3.3&vet[2] = 61FF0C(f + 2) = 61FF0C
        i = 3vet[3] = 4.4*(f + 3) = 4.4&vet[3] = 61FF10(f + 3) = 61FF10
        i = 4vet[4] = 5.5*(f + 4) = 5.5&vet[4] = 61FF14(f + 4) = 61FF14
    
    A saída está CORRETA!
    */
  
}