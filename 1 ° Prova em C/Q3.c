#include <stdio.h>


int main(void) {
    float massa = 100;
    float tempoS = 0;

    printf("Massa atual %.1f \n", massa);
    
    while(!(massa < 0.5)){
        massa -= 0.5;
        tempoS += 50;
    }


    int hora = floor((tempoS / 3600));
    int minutos = floor((tempoS - (hora * 3600))/60);
    int segundos = fmod(tempoS, 60);


    printf("Tempo Final em Horas %d \n", hora);
    printf("Tempo Final em Minutos %d \n", minutos);
    printf("Tempo Final em Segundos %d \n", segundos);



    printf("Massa final %.1f \n", massa);

    


    

    return(0);


}