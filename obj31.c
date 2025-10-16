#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int numero(int yka){
    return (rand() % (yka)+1);
}


int main(){
    srand(time(NULL));
    int anna = 0;
    int vastaus =0;
    int s1 =0;
    int s2 =0;
    while(anna != -1){
        printf("\nAnna luku -1 lopettaaksesi");
        switch (numero(2)){
            case 1:
                s1 = numero(9);
                s2 = numero(9);
                vastaus = s1*s2;
                printf("\nPaljonko on %d kertaa %d?",s1,s2);
                break;  
            case 2:
                s1 = numero(9);
                do{
                    s2 = numero(s1);
                }
                while(s1%s2 !=0);
                vastaus = s1/s2;
                printf("\nPaljonko on %d jaettuna %d?",s1,s2);
                break;                  
            default:
                break;
        }
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