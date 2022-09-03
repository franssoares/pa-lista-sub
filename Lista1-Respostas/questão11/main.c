#include <stdio.h>

/*
    Suponha que as seguintes declarações tenham sido realizadas:

    float aloha[10], coisas[10][5], *pf, value = 2.2;
    int i=3;

    Identifique quais dos seguintes comandos é válido ou inválido:

    aloha[2] = value;
    scanf("%f", &aloha);
    aloha = value";
    printf("%f", aloha);
    coisas[4][4] = aloha[3];
    coisas[5] = aloha;
    pf = value;
    pf = aloha;

*/

int main(void){

    float aloha[10], coisas[10][5], *pf, value = 2.2;
    int i=3;

    aloha[2] = value;
    scanf("%f", &aloha); //&aloha[0] = recebe um valor
    //aloha = value";
    printf("%f", aloha); //que valor de &aloha[0] ? Não se sabe, existe resíduos nos endereços do vetor não declarado seus valores.
    //coisas[4][4] = aloha[3]; //válido
    //coisas[5] = aloha; //'coisas'(matriz) recebe o endereço de '&aloha[0]'
    //pf = value;
    //pf = aloha;

}