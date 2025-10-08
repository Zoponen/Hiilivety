#include <stdio.h>

int main(void){

    for (int i=1; i !=11; i++){
        for(int e=1; e <=10-i; e++)
            putchar(' ');
        printf("a\n");
    }
    return 0;
}