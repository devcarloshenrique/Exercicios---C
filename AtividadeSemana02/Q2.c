#include <stdio.h>

int main(void) {

    double altura = 0,
        result = 0;
    int peso = 0;

    printf("Digite seu peso ? \n");

    scanf("%d", &peso);

    printf("Qual à sua altura ? \n");

    scanf("%lf", &altura);

    result = peso / (altura * altura);

    if(result <= 18.5 ){
        printf("Abaixo do peso");
    }

    if(result >= 18.6 && result <= 25 ){
        printf("Peso Normal");
    }
    
    if(result >= 25.1 && result <= 30 ){
        printf("Acima do peso");
    }

    if(result >= 30.1){
        printf("Obeso");
    }

    return 0;
}