#include <stdio.h>

/*

    Considerando  a  declaração  int  mat[4],  *p,  x;,  quais  das  seguintes  
    expressões  são  válidas? Justifique.

*/

int main(void){

    int  mat[4] = {10,3,4,5}, *p, x;

    p = mat + 1; //p receve o endereço de memória de mat[0] e acrescenta +1 no índice == &mat[0+1] CORRETA!
    //p = mat++; //errado
    //p = ++mat; //errado
    x = (*mat)++; //'x' recebe o valor do vetor 'mat[0+1] = 10'. CORRETA!  

    /*
    Resposta:

        Expressão 1:
        p = mat + 1; //'p' receve o endereço de memória de 'mat[0]' e acrescenta '+1' no índice == &mat[0+1] CORRETA! 

        Expressão 2:
        x = (*mat)++; //'x' recebe o valor do vetor 'mat[0+1] = 10'. CORRETA!
    
    */

}