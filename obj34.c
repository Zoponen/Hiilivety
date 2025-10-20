#include <stdio.h>
#include <math.h>

int kaantaja(int kaanto){
    int kaannos = 0;
    int pituus = floor(log10(kaanto))+1;
    for(pituus;pituus !=0; pituus--){
        kaannos *= 10;
        kaannos += kaanto%10;
        kaanto /= 10;
    }
    return kaannos;
}


int main(void){
    int luku =0;
    printf("Kaannettava luku >");
    scanf("%d",&luku);
    printf("\nLuku %d kaannettyna on %d",luku,kaantaja(luku));
    return 0;
}