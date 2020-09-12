#include <stdio.h>
#define NUM_L 4
#define NUM_C 4

int main(void)
{

  int matriz[NUM_L][NUM_C] = {
      {1, 2, 3, 4},
      {5, 6, 7, 8},
      {9, 10, 11, 12},
      {13, 14, 15, 16}},
      *point;

  point = matriz;

  int cont = 0;
  int pause = 1;
  while (pause != (NUM_L + 1))
  {

    printf("%3d", point[cont]);
    cont += 4;

    if (cont >= (NUM_L * NUM_C))
    {
      cont = pause;
      pause++;
      printf("\n");
    }
  }

  return 0;
}
