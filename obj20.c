#include <stdio.h>

int main(void){
    double curr = 0;
    double kok = 0;
    double maara =0;
    for(int e = 2; e >= 2; e++){
        printf("\nSyota positiivsia reaalilukuja(Negatiivinen lopettaa):");
        scanf("%lf",&curr);
        if (curr <0){
            break;
            e = 0;
        }
        else{
            kok +=curr;
            maara++;
        }

    }
    printf("%.2lf",kok/maara);
    return 0;
}