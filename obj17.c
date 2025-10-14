#include <stdio.h>

int main(void){

    for(int i = 0; i<=9; i++){
        for(int a = 0; a <= 8-i; a++){
            putchar(' ');
        }
        int f = i +1;
        for(int e = 1; e<= i*2+1; e++){
            if (f > 9){
                f -= 10;
            }
            else if(f <0){
                f+=10;
            }
            printf("%d",f);
            if(e < (i*2)/2+1){
                f++;
            }
            else{
                f--;
            }
        }
        printf("\n");

    }

    return 0;
}