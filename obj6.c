#include <stdio.h>

int main(void){
    int luku1 = 0;
    int luku2 = 0;
    printf("Syota luku, jonka moninkertaa tutkitaan>");
    scanf("%d", &luku1);
    printf("\nSyota luku, johon verrataan onko ensinmainen luku sen moninkerta>");
    scanf("%d", &luku2);

    if(luku2 != 0){
        if(luku1 % luku2 ==0){
            printf("Luku %d on luvun %d monikerta.",luku1,luku2);
        }
        else{
            printf("Luku %d ei ole luvun %d monikerta.",luku1,luku2);
        }
    }
    return 0;
}