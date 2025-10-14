#include <stdio.h>

int main(void){
    int luku1 = 0;
    printf("Syota kokeen pistemäärä>");
    scanf("%d", &luku1);
    switch (luku1) // Luo valit ja tarkistaa kuuluuko luku1 valille ja antaa taten oikean tulokse
    {
    case 0 ... 11:
        printf("\nHylatty");
        break;

    case 12 ... 13:
        printf("\n1");
        break;

    case 14 ... 16:
        printf("\n2");
        break;

    case 17 ... 19:
        printf("\n3");
        break;
     
    case 20 ... 22:
        printf("\n4");
        break;
     
    case 23 ... 24:
        printf("\n5");
        break;
          
    default:
        printf("\nViheellinen pistemaara");
        break;
    }
    return 0;
}
