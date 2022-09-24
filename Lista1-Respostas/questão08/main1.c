#include <stdio.h>

/*

    O que fazem os seguintes programas em C?

*/

int main(){

  int vet[] = {4,9,13};
  int i;

  for(i=0;i<3;i++){

    printf("%d ",*(vet+i));

  }

}