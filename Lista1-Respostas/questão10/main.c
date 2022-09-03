#include <stdio.h>
#include <limits.h>

/*
    A máquina gere os seguintes tipos de dados:

        char = 1 byte
        int = 4 bytes
        float = 4 bytes
        double = 8 bytes

        ◦ x for declarado como char?
        ◦ x for declarado como int?
        ◦ x for declarado como float?
        ◦ x for declarado como double?
*/

int main(void){

    printf("O tamanho do char em bytes eh: %d", sizeof(char));
    printf("\nO tamanho do int em bytes eh: %d", sizeof(int));
    printf("\nO tamanho do float em bytes eh: %d", sizeof(float));
    printf("\nO tamanho do double em bytes eh: %d", sizeof(double));

    char xchar[4] = {1,2,3,4};

    printf("\n\nchar: \n%d", xchar);
    printf("\n%d", xchar+1);
    printf("\n%d", xchar+2);
    printf("\n%d", xchar+3);

    int xint[4] = {1,2,3,4};

    printf("\n\nint: \n%d", xint);
    printf("\n%d", xint+1);
    printf("\n%d", xint+2);
    printf("\n%d", xint+3);

    float xfloat[4] = {1,2,3,4};

    printf("\n\nfloat: \n%d", xfloat);
    printf("\n%d", xfloat+1);
    printf("\n%d", xfloat+2);
    printf("\n%d", xfloat+3);

    double xdouble[4] = {1,2,3,4};

    printf("\n\ndouble: \n%d", xdouble);
    printf("\n%d", xdouble+1);
    printf("\n%d", xdouble+2);
    printf("\n%d\n", xdouble+3);

}