#include <stdio.h>

double teste(double n1, double n2, double n3, double n4, double n5){
    
    double result = 0;

    result = n1 >= n2 ? n1 : n2;
    result = result >= n3 ? result : n3;
    result = result >= n4 ? result : n4;
    result = result >= n5 ? result : n5;

    return result;
}

int main(void){

    double altura1 = 1.2;
    double altura2 = 1.6;
    double altura3 = 1.7;
    double altura4 = 1.5;
    double altura5 = 1.6;
    double resultado = 0;

    resultado = teste(altura1, altura2, altura3, altura4, altura5);

    printf("Resuldo = %.2lf", resultado);
    
}