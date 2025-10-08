#include <stdio.h>
#include <math.h>

int main(void){
    char bin[5];
    int sum = 0;
    printf("Anna binaariluku crakattavaksi > ");
    scanf("%s", &*bin);

    for(int i =0; i <=4; i++){
        if (bin[i]=='1'){
            sum += pow(2,(4-i));
        }
    }
    printf("\n%d",sum);
}