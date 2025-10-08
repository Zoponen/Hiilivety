# include <stdio.h>

int main(void){
    int i=0;
    while (i <= 7){
        int j = 0;
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