#include <stdio.h>

int main(void)
{

  int base = 0,
      altura = 0,
      area;

  while (area != 0)
  {
    printf("\n Digite o comprimento do terreno: ");
    scanf("%d", &base);

    printf("\n Digite a altura do terreno: ");
    scanf("%d", &altura);

    area = altura * base;

    printf(" \n Area do terreno: %d \n", area);
  }

  return 0;
}