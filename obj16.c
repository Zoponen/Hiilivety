#include <stdio.h>

int main(void){
    double tanakkubensu = 0.0;
    double ajatakm = 0.0;
    double keskekulutus = 0.0;
    double kajaktakm =0.0;
    double ktanakkubensu = 0.0;

    while(tanakkubensu !=-1){
        printf("\nAnna tankatun bensiinin maara ( -1 lopettaa ) > ");
        scanf("%lf",&tanakkubensu);

        if(tanakkubensu != -1){
            ktanakkubensu += tanakkubensu;
            printf("\nAjetut kilometrit > ");
            scanf("%lf", &ajatakm);
            kajaktakm += ajatakm;

            keskekulutus = tanakkubensu/ajatakm *100;

            printf("\nKeskikulutus talla tankkauksella on %.3lf litraa satasella",keskekulutus);
        }
        else{
            break;
        }
    }
    keskekulutus = ktanakkubensu/kajaktakm;
    printf("\nkokonaiskeskikulutus on %.3lf litraa satasella",keskekulutus);

}