#include <stdio.h>

int main(void){
    double lsumma=0;
    double lkorko=0;
    double lpaivat=0;
    double kokokorkokoko=0;
    double lkorkot;
    printf("Opintolainojen suuruus >");
    scanf("%lf", &lsumma);
    printf("\nOpintolainojen korko >");
    scanf("%lf", &lkorko);
    lkorkot = lkorko/100;
    printf("\nOpintolainan lainapäivien määärä >");
    scanf("%lf", &lpaivat);
    kokokorkokoko = lsumma*lkorkot*(lpaivat/365);
    printf("%f",lkorko);
    printf("Lainapaaoman %.2f euroa korko %.0f paivalta korkoprosentilla %.2f on yhteensa %.2f euroa.",lsumma, lpaivat, lkorko ,kokokorkokoko);
    return 0;
}