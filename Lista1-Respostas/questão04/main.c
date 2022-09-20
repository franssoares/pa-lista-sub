int main(){

    /*Determine  o  que  será  mostrado  pelo  seguinte  programa  (compile-o,  execute-o  e  verifique  se
      foram obtidas as respostas esperadas).
    */

    int    valor;
    int   *p1;
    float  temp;
    float *p2;
    char   aux;
    char  *nome = "Ponteiros";
    char  *p3;
    int    idade;
    int    vetor[3];
    int   *p4;
    int   *p5;

    /* (a) */
    valor = 10;
    p1 = &valor;
    *p1 = 20; // valor de 'valor' alterado para '20'.
    printf("%d \n", valor); // 20

    /* (b) */
    temp = 26.5;
    p2 = &temp;
    *p2 = 29.0; // valor de 'temp' alterado para '29.0'.
    printf("%.1f \n", temp); // 29.0

    /* (c) */
    p3 = &nome[0];
    aux = *p3; // valor de 'aux' é 'P'.
    printf("%c \n", aux); // P

    /* (d) */
    p3 = &nome[4];
    aux = *p3; // valor de 'aux' muda, agora vale 'e'.
    printf("%c \n", aux); // e

    /* (e) */
    p3 = nome; // valor de 'p3' recebe o endereço do caractere na posição 0 -> '&nome[0] equivale a nome'.
    printf("%c \n", *p3); // P

    /* (f) */
    p3 = p3 + 4;
    printf("%c \n", *p3); // e

    /* (g) */
    p3--;
    printf("%c \n", *p3); // t

    /* (h) */
    vetor[0] = 31;
    vetor[1] = 45;
    vetor[2] = 27;
    p4 = vetor;
    idade = *p4;
    printf("%d \n", idade); // 31

    /* (i) */
    p5 = p4 + 1; // p4 = &vetor[0] ou vetor -> p5 = &vetor[0+1] = 45.
    idade = *p5;
    printf("%d \n", idade); // 45

    /* (j) */
    p4 = p5 + 1; // p5 = &vetor[0+1] = 45 -> p4 = &vetor[1+1] = 27.
    idade = *p4;
    printf("%d \n", idade); // 27

    /* (l) */
    p4 = p4 - 2; // p4 = &vetor[1+1] -> p4 = &vetor[1+1-2] = 31.
    idade = *p4;
    printf("%d \n", idade);

    /* (m) */
    p5 = &vetor[2] - 1; // p5 = &vetor[2-1] = 45
    printf("%d \n", *p5); // 45

    /* (n) */
    p5++; // p5 = p5 + 1 == p5 = &vetor[2-1+1] = 27
    printf("%d \n", *p5); // 27

    return(0);

}