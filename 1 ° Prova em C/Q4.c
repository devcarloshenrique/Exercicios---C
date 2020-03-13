#include <stdio.h>

int main(void) {
    int n1 = 1;
    int n2 = 0;
    int limitador = 6;
    
    for(int i = 1; i <= limitador; i++){

        printf("%d , ", n1);

        n2 += n1;

        printf("%d , ", n2);

        n1 += n2;

    }


    
    return(0);
}