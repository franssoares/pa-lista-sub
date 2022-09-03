Resposta:

    O tamanho do char em bytes eh: 1
    O tamanho do int em bytes eh: 4
    O tamanho do float em bytes eh: 4
    O tamanho do double em bytes eh: 8

    Com isso, ao declarar um vetor 'x' de tamanho 4, o vetor aloca 4*(tamaho do TIPO) de endereço de memória. Assim, temos que para x = &x[0] = endereço inicial:

        ◦ x for declarado como char? (x+0) = 6422300; (x+1) = 6422301; (x+2) = 6422302; (x+3) = 6422303;

        ◦ x for declarado como int? (x+0) = 6422284; (x+1) = 6422288; (x+2) = 6422292; (x+3) = 6422296;

        ◦ x for declarado como float? (x+0) = 6422268; (x+1) = 6422272; (x+2) = 6422276; (x+3) = 6422280;

        ◦ x for declarado como double? (x+0) = 6422232; (x+1) = 6422240; (x+2) = 6422248; (x+3) = 6422256;