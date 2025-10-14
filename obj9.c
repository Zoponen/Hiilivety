#include <stdio.h>

int main(void){
    int sluku = 0; //Suurin luku
    int tluku = 0; //Luettu luku
    for (int i = 0; i<10; i++){
        printf("Syota vertailtava luku:");
        scanf("%d", &tluku);
        if (tluku > sluku){
            sluku = tluku;
        }
    }
    printf("Suurin syottamasi luku oli %d",sluku);
    return 0;
}