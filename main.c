#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main(void) {
  instancia();
  enfileirar(1);
  enfileirar(2);
  enfileirar(3);
  enfileirar(4);
  enfileirar(5);

  
  exibir();
  vazia();
  cheia();
  

  return 0;
}