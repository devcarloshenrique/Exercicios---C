#include <stdio.h>
#define L 2
#define C 4

//Exemplo com passagem por referência
void recebe_vetor(int matriz[L][C])
{
  int i, j;

  for (i = 0; i < L; i++)
  {
    for (j = 0; j < C; j++)
    {
      printf("entre com Vetor[%d][%d]: ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }
}

int main(void)
{
  int matriz_A[L][C], matriz_B[L][C], soma[L][C];
  int i, j;

  printf("Matriz A\n");
  recebe_vetor(matriz_A);

  printf("\nMatriz B\n");
  recebe_vetor(matriz_B);

  printf("\nSoma\n");

  for (i = 0; i < L; i++)
  {
    for (j = 0; j < C; j++)
    {
      soma[i][j] = matriz_A[i][j] + matriz_B[i][j];
      printf("soma[%d][%d] = %d\n", i, j, soma[i][j]);
    }
  }

  return 0;
}