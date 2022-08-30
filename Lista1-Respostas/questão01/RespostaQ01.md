Resposta: 

    p = &i; //o ponteiro 'p' recebe não o valor, mas o endereço de memória onde a variável 'i' está armazenando o seu valor.
    q = &j; //o ponteiro 'q' recebe não o valor, mas o endereço de memória onde a variável 'j' está armazenando o seu valor.
    p == &i; //verdadeiro: como 'p' aponta para o endereço de memória da variável inteira 'i', como mostra na linha 7, o valor de 'p' será igual ao endereço de memória de 'i'.
    *p - *q; //a subtração dos valores de '*p' e '*q' é igual a -2. ( 3-5 = -2).
    **&p; //3, ponteiro para ponteiro -> endereço de memoria de 'p' aponta para o endereço de memória de 'i'.
    3 - *p/(*q) + 7; //3 - 3/5 + 7 = 10. A operação de divisão é igual a zero.