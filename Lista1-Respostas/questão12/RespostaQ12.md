Resposta:

    Ponteiro é um tipo de dado na linguagem em c que serve para referência uma variável qualquer. Qual é a sua utilidade(?) Mudar/alterar valores predefinidos nas váriáveis referenciadas atráves de seus endereços de memória.
    
Programa:

    #include <stdio.h>

    /*

            O  que  é  um  ponteiro  para  uma  função?  Pesquise  na  Internet  referências  sobre  o  assunto  e
            escreva um pequeno programa exemplificando o uso deste recurso.

    */

    int main(void){

        //Declaração
        int *pa;
        int a, y;
        a = 10;

        //Aponte para...
        pa = &a; //O ponteiro 'pa' aponta para o endereço de memória da variável 'a';

        printf("%d", *pa); //imprimi o valor da váriavel 'a';
        printf("\n%d", &pa); //imprimi o endereço de memória onde está alocado o ponteiro;
        printf("\n%d", pa); //imprimi o valor do ponteiro 'pa';
        printf("\n%d", &a); //imprimi o endereço de memória de 'a';

        /*

            Veja que o endereço de memória da variáve 'a' é a mesma saída do valor do ponteiro 'pa'. Isso mostra o poder de usar ponteiros para mudar um valor de uma variável qualquer;
            
        */

    }