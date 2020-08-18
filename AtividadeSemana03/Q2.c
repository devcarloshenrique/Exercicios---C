#include <stdio.h>
#include <conio.h>

double somaPares(int n);

int main(void)
{
  int numero,
      function;

  printf("Digite o numero que deseja calcular a soma: ");

  scanf("%d", &numero);

  function = somaPares(numero);

  printf("Soma de todos os numero pares: %d ", function);

  getch();
  return 0;
}

double somaPares(int n)
{

  double numerosPares,
      function;

  if (n >= 1)
  {
    printf("Numeros: %d ", numerosPares);

    numerosPares = (n % 2 == 0) ? numerosPares + n : numerosPares;
  }
  else
  {
    return 1;
  }

  function = somaPares(n - 1);

  return numerosPares;
}