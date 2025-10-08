#include <stdio.h>

int main(void){
    double curr = 0;
    double kok = 0;
    double maara =0;
    int error = 0;
    char* banana;
    while(curr >=0 && error != 3){

        if(scanf("%lf",&curr)){
            if (curr <0){
                break;
            }
            else{
                kok +=curr;
                maara++;
            }
        }
        else{
            scanf("%s",&banana);
            printf("\nEi ollut reaaliluku");
            error +=1;
            printf("\nVirheellinen syote numero %d",error);
        }


    }
    if (error != 3){
        printf("%.2lf",kok/maara);
    }
    else{
        printf("\nVirheellinen syote kolme kertaa. Ohjelma lopetetaan");
    }
    return 0;
}