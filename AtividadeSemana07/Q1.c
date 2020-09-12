#include <stdio.h>
#define NUM_L 10
#define NUM_C 10

int main(void)
{

  int matriz[NUM_L][NUM_C];
  int *point;
  point = matriz;

  createMatriz(matriz);

  printf("\n\n -- Criando Matriz de 0 -- \n\n");

  display(point);

  insertMatriz(matriz);

  printf("\n\n -- Inserindo valores de 99 a 0-- \n\n");

  display(point);

  return 1;
}

int createMatriz(int matriz[NUM_L][NUM_C])
{
  int *point;
  point = matriz;

  for (int x = 0; x < (NUM_L * NUM_C); x++)
    point[x] = 0;

  return 1;
}

int insertMatriz(int p[])
{
  int cont = 0;
  for (int x = 0; x < (NUM_L * NUM_C); x++)
  {
    p[x] = cont;
    cont++;
  }

  return 1;
}

int display(int p[])
{
  int cont = (NUM_L * NUM_C) - 1;
  for (int i = 0; i < NUM_L; i++)
  {
    for (int j = 0; j < NUM_C; j++)
      printf("%3d", p[cont--]);
    printf("\n");
  }

  return 1;
}