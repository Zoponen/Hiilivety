#include <stdio.h>

int main(void){
    double tuntipalkka=0;
    double tyotunnit=0;
    double vero=0;
    double masi=0;
    double ryounnit=0;
    double ryomasi=0;
    double nettomasi=0;
    double vhero=0;
    double eitunnit=0;

    printf("Anna tuntipalkka >");
    scanf("%lf", &tuntipalkka);
    printf("\nTehdyt tunnit >");
    scanf("%lf", &tyotunnit);
    printf("\nVeroprosentti >");
    scanf("%lf", &vero);
    eitunnit = tyotunnit;
    if (tyotunnit >=40){
        ryounnit=tyotunnit-40;
        eitunnit=tyotunnit-ryounnit;
        ryomasi = ryounnit*tuntipalkka*1.5;
    }
    masi = eitunnit*tuntipalkka + ryomasi;
    vhero = (vero/100)*masi;
    nettomasi = masi - vhero; 
    printf("\nNettopalkkasi on %.2f euroa ja verottajan osuus on %.2f euroa", nettomasi, vhero);
    return 0;
}