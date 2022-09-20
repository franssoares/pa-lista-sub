Resposta:

    //função de soma dos vetores
    void somar_vetores(int *pvet1, int *pvet2, int *pvet, int *np){

        int n = *np;
        int *retorno = (int*)malloc(n*sizeof(int));

        for (int i = 0 ; i < n; i++){

            pvet[i] = pvet1[i] + pvet2[i];
            
        }

    }