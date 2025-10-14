#include <stdio.h>

int main(void){
    
    printf("%7s%12s \n", "Celsius", "Fahrenheit");
    for (int i =-100; i <= 100; i += 10){
        printf("%5d%12.2f \n", i, i*1.8+32);
    }
    return 0;
}