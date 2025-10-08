#include <stdio.h>
#include <stdlib.h>

int main(void){
    char mietoluku[6]= "00000";
    int tluku=0; 
    printf("Eroteltava viisinumeroinen luku:");
    scanf("%6s",&*mietoluku);
    tluku = atoi(mietoluku);
    printf("\nLuku %d eroteltuna:",tluku);

    for (int i = 0; i <= 4; i++){
        putchar(' ');
        if (mietoluku[0]=='-'){
            char c = mietoluku[i+1];            
            printf("-%c",c);

        }       
        else{
            char c = mietoluku[i];
            printf("%c",c);
        }
    }
    return 0;
}