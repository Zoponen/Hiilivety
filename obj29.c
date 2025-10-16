#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int heitto(){
    return (rand() % 2);
}


int main(){
    srand(time(NULL));
    int total =0;
    for(int i=0; i <1000;i++){
        total += heitto();
    }
    printf("Heittojen tulos: %d kruunua ja %d klaavaa",1000-total,total);
    return 0;
}