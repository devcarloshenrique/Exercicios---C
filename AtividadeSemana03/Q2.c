#include <stdio.h>
#include <conio.h>

double somaPares(int n);
int main(void)
{
  int numero;
  double f;

  printf("Digite o numero que deseja calcular a soma: ");
  scanf("%d", &numero);

  //chamada da função somaPares
  f = somaPares(numero);

  printf("Soma de %d = %.0lf", numero, f);

  getch();
  return 0;
}
//Função recursiva

double somaPares(int n)
{
  double valorSoma;

  if (n <= 1)
    return 0;
  else
  {

    if (n % 2 == 0)
    {

      valorSoma = n + somaPares(n - 1);
      return (valorSoma);
    }

    valorSoma = somaPares(n - 1);
    return (valorSoma);
  }
}