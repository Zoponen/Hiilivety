#include <stdio.h>

int paivienLukumaaraKuukaudessa (int kk){
    int paivat[] ={31,28,31,30,31,30,31,31,30,31,30,31};
    if(kk >0 && kk<13){
        return paivat[kk-1];
    }
    return -1;
}

int main(void){
    int kuu = 0;
    printf("Minka kuukaudet paivat haluat tietaa?");
    scanf("%d",&kuu);
    if(paivienLukumaaraKuukaudessa(kuu)!=-1){
        printf("Kuukaudessa %d on %d paivaa",kuu, paivienLukumaaraKuukaudessa(kuu));
    }
    else{
        printf("Kuukautta %d ei ole olemassa",kuu);
    }
    return 0;
}