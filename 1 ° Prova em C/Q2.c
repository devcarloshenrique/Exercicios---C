#include <stdio.h>

int main(void){

    for(int i = 1000; i <= 1999; i++){
        if(i % 11 == 5){
            printf("Numero divisivel por 11 com resto 5: %d \n", i);
        }
    }
}