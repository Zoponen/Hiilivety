#include <stdio.h>
#include <math.h>

int alkuperainen(double makarooni){
    printf("\n%lf ja %lf", makarooni, floor(makarooni+0.5));
    return 0;
}


int main(void){
    double tluku =0;
    for (int i=0; i < 5; i++){
        printf("\nAnna pyoristettava luku >");
        scanf("%lf", &tluku);
        alkuperainen(tluku);
    }
    return 0;
}