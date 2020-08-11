#include <stdio.h>

int main(void) {

    double altura = 0,
        result = 0;
    int sexo = 0;

    printf("Digite um numero para representar seu sexo ! \n\n 1 - Para Feminino \n 2 - Para Masculino \n 3 - Para Sair ");

    scanf("%d", &sexo);

    printf("Qual à sua altura ?");

    scanf("%lf", &altura);

    switch (sexo){
        case 1:
            result = (62.1 * altura) - 44.7;
            printf("Peso ideal: %.2lf", result);
        break;    

        case 2:
            result = (72.7 * altura) - 58;
            printf("Peso ideal: %.2lf", result);
        break;
        default:
            break;

    }
    
    return 0;
}