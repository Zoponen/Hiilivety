#include <stdio.h>
#include <math.h>



int main(void){
    double tuntipalkka=0.0;
    double tyotunnit=0.0;
    double vhero =0.0;
    double masi=0.0;
    double verottajanmassit = 0.0;
    double nettomasi = 0.0;
    printf("Anna tuntipalkka >");
    scanf("%lf", &tuntipalkka);
    printf("Tehdyt tunnit > \n");
    scanf("%lf", &tyotunnit);
    printf("Veroprosentti >\n");
    scanf("%lf", &vhero);
    masi = tyotunnit*tuntipalkka;
    verottajanmassit =masi*(vhero/100.0);
    nettomasi = masi - verottajanmassit;
    printf("Nettopalkkasi on %.2f euroa josta veron osuus on %.2f euroa", nettomasi, verottajanmassit);
    return 0;
}