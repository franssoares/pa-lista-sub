Resposta:
  
    p = i; // Como 'p' é um ponteiro, e a passagem de 'i' é por valor, 'p' recebe uma cópia do conteúdo de 'i'. Correto.
    q = &j; // correto
    p = &*&i; // Correto
    i = (*&)j; //operadores de deferência e endereço fora do escopo. ILEGAL.
    i = *&j; // 'i' não é um ponteiro recebe apenas o conteúdo de 'j'. ILEGAL.
    i = *&*&j; //correto
    q = *p; // correto
    i = (*p)++ + *q; // correto