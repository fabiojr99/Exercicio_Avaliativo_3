#include "MinhaBiblioteca.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ContaTrocas (char mensagem_inicial[], char caractere_trocado)
{
  int contador_de_trocas;
    for (int i=0;i<strlen(mensagem_inicial);i++)
    {  
        if (mensagem_inicial[i] == caractere_trocado)
        {
            contador_de_trocas++;
        }
    }
    
    return contador_de_trocas;
}

void TrocaCaractere (char* mensagem_inicial[], int* contador_de_elementos, char caractere_velho, char caractere_novo, char* mensagem_final[])
{
  contador_de_elementos = strlen(mensagem_inicial);
  int i;
  for (i=0; i < strlen(mensagem_inicial); i++)
  {
    if (mensagem_inicial[i] == caractere_velho)
    {
      mensagem_final[i] = caractere_novo;
    }
    else 
    {
      mensagem_final[i] = mensagem_inicial[i];
    }
  }
}
