#include "MinhaBiblioteca.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {  
  char PalavraVelha[100];
  int Tamanho = 0;
  char LetraVelha;
  char LetraNova;
  char PalavraNova[100];
  
  printf("Usuario, insira a palavra\n");
  scanf("%s", PalavraVelha);

  printf("Usuario, escolha uma letra a ser substituida\n");
  scanf("%s", LetraVelha);

  printf("Usuario, escolha uma letra para substituir\n");
  scanf("%s", LetraNova);

  TrocaCaractere (&PalavraVelha, &Tamanho, LetraVelha, LetraNova, &PalavraNova);

  int quantidade = ContaTrocas (PalavraVelha, LetraVelha);

  printf("%s \n %s \n %i",PalavraNova, PalavraVelha, quantidade);

  return 0;
}
