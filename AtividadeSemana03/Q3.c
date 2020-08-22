#include <stdio.h>
#define L 1
#define C 4

void perguntas(int matriz[L][C])
{

  int i, j;

  for (i = 0; i < L; i++)
  {

    printf("\n Qual seu sexo ? \n 1 P / Masculino | 2 P / Feminino \n Resposta Vetor[%d][0]: ", i);
    scanf("%d", &matriz[i][0]);

    printf("\n Qual a cor dos seus cabelos ? \n 1 P / Prestos | 2 P / Loiros | 3 P / Castanhos | 4 P / Outra cor \n Resposta Vetor[%d][1]: ", i);
    scanf("%d", &matriz[i][1]);

    printf("\n Qual a cor dos seus olhos ? \n 1 P / Castanhos | 2 P / Pretos | 3 P / Verdes | 4 P / Outra cor \n Resposta Vetor[%d][2]: ", i);
    scanf("%d", &matriz[i][2]);

    printf("\n Qual sua idade em anos?  \n Resposta Vetor[%d][3]: ", i);
    scanf("%d", &matriz[i][3]);
  }
}

int main(void)
{
  int i, j,
      pause = 1,
      matriz[L][C];

  // Questão 1

  int Questao1 = 0;

  // Questão 2

  double Questao2 = 0;
  int totalPessoas = 0,
      pessoasAP = 0;

  while (pause != 0)
  {
    perguntas(matriz);
    totalPessoas++;

    // Questão 1
    if (matriz[0][0] = 2 && matriz[0][3] > 60)
    {
      Questao1++;
    }

    // Questão 2
    if (matriz[0][3] >= 18 && matriz[0][3] <= 35 && matriz[0][2] == 3 && matriz[0][1] == 2)
    {
      pessoasAP++;
    }

    printf("\n Exit ? \n 0 P/ Sim | 1 P/ Nao \n Resposta: ");
    scanf("%d", &pause);
  }

  printf("\n A) A quantidade de pessoas do sexo feminino com idade acima de 60 anos ? \n Numero de Pessoas: %d \n", Questao1);

  Questao2 = (pessoasAP * 100) / totalPessoas;
  printf("\n B) A porcentagem de individuos cuja idade esta entre 18 e 35 anos e que tenha olhos verdes e cabelos loiros: %.0lf Porcento \n", Questao2);

  return 0;
}