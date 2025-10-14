#include <stdio.h>

int main(void){
    int i=0;
    while (i <= 7){
        int e = 0;
        int j = 0;

        while (e <=6-i)
        {   
            putchar(' ');
            e++;
        }

        
        while (j <=i)
        {   
            putchar('a');
            j++;
        }
        
        printf("\n");
        i++;
    }
    return 0;
}