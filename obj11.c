#include <stdio.h>

int main(void){
    int pala =0;
    int chcksum =1;
    char palan[6] ={};
    printf("Syota palindromi testattavaksi:");
    scanf("%i",&pala);
    if (pala >=10000 && pala < 100000){
        sprintf(palan, "%d", pala);
        for(int i = 0; i < 5; i++){
            if (palan[i]==palan[4-i]){
                chcksum=1;
            }
            else{
                chcksum=0;
                break;
            }
        }
        if (chcksum==1){
            printf("\nLuku %i on palindromi",pala);
        }
        else{
            printf("\nLuku %i ei ole palindromi",pala);            
        }
    }
    else{
        printf("\nSyote ei ole viisinumeroinen positiivinen kokonaisluku");
    }

    return 0;
}