#include <stdio.h>

int korotaKokonaislukuPotenssiin(int luku,int potenssi){
    int aluku = luku;
    for(int i=1; i<potenssi;i++){
        luku *= aluku;
    }
    return luku;
}


int main(void){
    int luku = 0;
    int potenssi =0;
    
    printf("Korotettava luku >");
    scanf("%d", &luku);
    printf("Potensilla >");
    scanf("%d", &potenssi);

    printf("Luku %d korotettuna potenssiin %d on %d",luku,potenssi,korotaKokonaislukuPotenssiin(luku,potenssi));

    return 0;
}