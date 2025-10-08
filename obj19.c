#include <stdio.h>

int main(void){
    double curr = 0;
    double kok = 0;
    double maara =0;
    do{
        printf("\nSyota positiivsia reaalilukuja(Negatiivinen lopettaa):");
        scanf("%lf",&curr);
        if (curr <0){
            break;
        }
        else{
            kok +=curr;
            maara++;
        }

    }
    while(curr >=0);
    printf("%.2lf",kok/maara);
    return 0;
}