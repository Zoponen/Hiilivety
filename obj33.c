#include <stdio.h>
#include <math.h>

int pyoristaKokonaisluvuksi(double luku){
    return (floor (luku + 0.5));
}
double pyoristaKymmenesosat(double luku){
    return (floor (luku * 10 + 0.5) / 10);
}
double pyoristaSadasosat(double luku){
    return (floor (luku * 100 + 0.5) / 100);
}
double pyoristaTuhannesosat(double luku){
    return (floor (luku * 1000 + 0.5) / 1000);
}

int main(void){
    double tluku =0;

    for(int i =0; i<5;i++){
        printf("\nPyoristetteva luku >");
        scanf("%lf", &tluku);
        printf("\n%lf, %d",tluku, pyoristaKokonaisluvuksi(tluku));
        printf("\n%lf, %.1lf",tluku, pyoristaKymmenesosat(tluku));
        printf("\n%lf, %.2lf",tluku, pyoristaSadasosat(tluku));
        printf("\n%lf, %.3lf",tluku, pyoristaTuhannesosat(tluku));
    }
    return 0;
}