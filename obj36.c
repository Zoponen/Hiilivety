#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int numero(){
    return (rand() % (100)+1);
}


int main(){
    srand(time(NULL));
    int anna = 0;
    int vastaus =0;
    char jatkumo ='0';
    while(jatkumo !='e'){
        jatkumo ='0';
        vastaus = numero();
        printf("\nArvaa luku>");
        scanf("%d",&anna);
        while(anna != vastaus){
            if(anna >vastaus){
                printf("\nLiian suuri luku, yrita uudelleen.");
            }
            else if(anna < vastaus){
                printf("\nLiian pieni luku, yrita uudelleen.");
            }
            scanf("%d",&anna);
        }
        printf("\nOIKEIN!");
        while(jatkumo != 'k' && jatkumo !='e'){
            printf("\nHaluatko yrittaa uudelleen (vastaa k, jos haluat jatkaa ja e jos et halua jatkaa pelia)?");
            scanf("%c",&jatkumo);
        }
    }
    return 0;
}