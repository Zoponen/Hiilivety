#include <stdio.h>

int main(void){
    int luku1 = 0;
    printf("Syota kokeen pistemäärä>");
    scanf("%d", &luku1);
    if( 0 <= luku1 && luku1 <=11){
        printf("\nHylatty");
        }
    else if( 12 <= luku1 && luku1 <= 13)
    {
        printf("\n1");
        }
    else if( 14 <= luku1 && luku1 <= 16)
    {
        printf("\n2");
        }
    else if( 17 <= luku1 && luku1 <= 19)
    {
        printf("\n3");
        }
    else if( 20 <= luku1 && luku1 <= 22)
    {
        printf("\n4");
        }
    else if( 23 <= luku1 && luku1 <= 24)
    {
        printf("\n5");
        }
    else {
        printf("\nVirheellinen pistemaara")
    }    
    return 0;
}
