#include <stdio.h>

int main(void) {

    int ano1 = 1000;
    int ano2 = 2020;

    for(int i = ano1; i <= ano2; i++){

        if(i % 4 == 0){
            if(!(i % 100 == 0)){
                printf("Ano: %d \n", i);
            }else if(i % 400 == 0){
                printf("Ano: %d \n", i);
            }
        }
    }

    return(0);
}