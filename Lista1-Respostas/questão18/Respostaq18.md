Resposta:

        //função da operação entre matrizes(PROCEDIMENTO)
        void multiplicar_matrizes(int **pA, int **pB, int **pC, int *plina, int *pcola, int *pcolb){

            int lina = *plina, cola = *pcola, colb = *pcolb, soma;

            //multiplicador
            for(int i = 0 ; i < lina ; i++ ){

                for( int j = 0 ; j < colb ; j++ ){

                    soma = 0;

                    for( int k = 0 ; k < cola; k++ ){

                        soma = soma + pA[i][k]*pB[k][j];

                    }

                    pC[i][j] = soma;

                }

            }

        }