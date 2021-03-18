/*
 * Sistemas Operativos - Curso 2020/2021.
 * 
 * Adrian San Luis y Javier Barquin.
 * 
 * Práctica 1 -- filtro.c
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int altura;
  char clase;
  char pais[2];
  /*
  Se leen las lineas por la entrada estandar (STDIN) con 
  la estructura:
      <ALTURA>    <CLASE>   <PAIS>
  */

  while (scanf("%d \t %c \t %s \n", &altura, &clase, pais) != EOF)
  {
    if (clase == 'A')
    {
      // la altura es de clase A, se imprime por el canal estandar (STDOUT)
      printf("%d \t %c \t %s \n", altura, clase, pais);
    }
    else if (clase == 'B')
    {
      // la altura es de clase B, se imprime por el canal de errores (STDERR)
      fprintf(stderr, "%d \t %c \t %s \n", altura, clase, pais);
    }
  }
}
