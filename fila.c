#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

#define TAM_FILA 6

int fila[TAM_FILA], ultimaPosicao=0;

void instancia()
{
  for(int i = 0; i <= TAM_FILA; i++)
  {
    fila[i] = 0;
  }
}

void enfileirar(int valor){

  fila[ultimaPosicao] = valor;
  ultimaPosicao++;

}

int desenfileirar(){
  int i=0;
  int aux=fila[0];
  while (i<TAM_FILA)
  {
  fila[i] = fila[i+1];
  i++;
  } 
  return aux;
}

int vazia()
{
  int aux = 0,result = 0;
  for (int i=0;i<=TAM_FILA;i++)
    {
    if (fila[i]==0)
      {
        aux++;
      }
    }
    if (aux==TAM_FILA)
    {
      printf("\nVazia");
      result = 1;
      return result;
    }
    else
    {
      printf("\nNão vazia");
      result = 0;
      return result;
    }
  }

int cheia()
{
  int aux = 0,result = 0;
  for (int i=0;i<=TAM_FILA;i++){
    if (fila[i]!=0){
      aux++;
    }
    }
    if (aux==TAM_FILA){
      printf("\nCheia");
      result = 1;
      return result;
    }else{
      printf("\nAinda há espaços livres");
      result = 0;
      return result;
    }
  }

void exibir(){

  for(int i=0; i<TAM_FILA; i++){
    printf("%i\n", fila[i]);
  }

}