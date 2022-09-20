Resposta:
    
    int i = 5, *p; // 'int i' recebe 5, declaração do ponteiro 'int *p'.
    p = &i; // 'p' recebe como conteúdo o endereço de memória de '&i = 4094'.
    printf("%x %d %d %d %d", p,*p+2,**&p,3**p,**&p+4); // 1)saída: conteúdo de 'p' que vale 4094 sai em hexadecimal; 2)saída: *p+2 = 5 + 2 = 7; 3)saída: 5; 4)saída: 3*5 = 15; 5)saída: 5 + 4 = 9.