#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int numero(){
    return (rand() % (9)+1);
}


int main(){
    srand(time(NULL));
    int anna = 0;
    int vastaus =0;
    int s1 =0;
    int s2 =0;
    while(anna != -1){
        printf("\nAnna luku -1 lopettaaksesi");
        s1 = numero();
        s2 = numero();
        vastaus = s1*s2;
        printf("\nPaljonko on %d kertaa %d?",s1,s2);
        scanf("%d",&anna);
        while(anna != vastaus && anna != -1){
            printf("\nVäärin, yritä uudelleen >");
            scanf("%d",&anna);
        }
        if(anna == -1){
            break;
        }
        printf("\nOikein!");
    }
    
    return 0;
}