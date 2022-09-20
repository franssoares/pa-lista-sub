Resposta:

    Válido:
        
        coisas[4][4] = aloha[3];

        scanf("%f", &aloha);

        printf("%f", aloha); //imprimir endereço de &aloha[0] em float(?)

        coisas[4][4] = aloha[3];

        pf = aloha;

    Inválido:

        printf("%f", aloha); //que valor de &aloha[0] ? Não se sabe, existe resíduos nos endereços do vetor não declarado seus valores.

        aloha = value";

        coisas[5] = aloha;

        pf = value;     