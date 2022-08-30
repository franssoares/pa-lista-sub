#include <stdio.h>

/*
Assumindo  que  pulo[]  é  um  vetor  do  tipo  int,  quais  das  seguintes  
expressões  referenciam  o valor do terceiro elemento do vetor?
*/

int main(void){

    int pulo[5] = {0,1,2,3,4};

    printf("%d", *(pulo + 2)); //equivale a *(pulo+2) == pulo[0+2] = 2 (TERCEIRO elemento!)

 
    printf("\n%d", *(pulo + 4)); //equivale a *(pulo+4) == pulo[0+4] = 3

  
    printf("\n%p", (pulo + 4)); //endereço de memória com índice 4 ==> (pulo + 4) == (&pulo[0+4])
    
   
    printf("\n%p", (pulo + 2)); //endereço de memória com índice 2 ==> (pulo + 2) == (&pulo[0+2])

    /*
    Resposta:

        *(pulo + 2)
        
    */

}