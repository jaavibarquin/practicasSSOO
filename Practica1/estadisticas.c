/*
 * Sistemas Operativos - Curso 2020/2021.
 * 
 * Adrian San Luis y Javier Barquin.
 * 
 * Práctica 1 -- estadisticas.c
 */

#include <stdio.h>
#include <stdlib.h>

int media (int* );
int maximo (int*);
int minimo (int*);

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
  	
  }
}

int media (int* valores)
{
	int suma=0, med;
	int i;
	int num = sizeof(valores);
	
	for (i = 0; i < num; i++)
	{
		suma += valores[i];
	}
	med = suma / num;
	return (med);
}

int maximo (int* valores)
{
	int i, max;
	int num = sizeof(valores);
	
	max = valores[0]
	for (i = 1; i < num; i++)
	{
		if (valores[i] > max)
		{
			max = valores[i];
		}
	}
	return (max);
}

int minimo (int* valores)
{
	int i, min;
	int num = sizeof(valores);
	
	min = valores[0]
	for (i = 1; i < min; i++)
	{
		if (valores[i] > min)
		{
			min= valores[i];
		}
	}
	return (min);
}
