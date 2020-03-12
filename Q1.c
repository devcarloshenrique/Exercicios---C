#include <stdio.h>

int main(void) {
    
    int soma = 0,
        n1;

    printf("Digite um numero:  ");
    scanf("%d", &n1);

    for(int i = 1; i < n1; i++){
        
        if(n1 % i == 0){         
            soma += i;

            if(soma == n1){
                printf("Este numero e perfeito \n");
            }
        }     
    }

    if(soma != n1) {
        printf("Este numero nao e perfeito \n");
    }

    return 0;
}
 
