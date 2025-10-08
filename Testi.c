#include <stdio.h>
#include <stdint.h> // esittelee uint8_t, ei tarvitse käyttää unsigned char

int main(void){
    printf("Adding with unsigned bytes\n");
    uint8_t first = 79;
    uint8_t second = 99;
    uint8_t result = first + second;
    printf("First: %d + second: %d = %d\n", first, second, result);

    printf("Adding with signed bytes\n");
    int8_t first1 = 79;
    int8_t second1 = 99;
    int8_t result1 = first1 + second1;
    printf("First: %d + second: %d = %d\n", first1, second1, result1);
    int apina = 16;
    printf("%d\n",apina);
    apina = apina << 1;
    printf("%d",apina);

    int muuttuja = 2;
    int alaarvo =1;
    int yläarvo = 4;
    switch(muuttuja){
        case alaarvo...yläarvo:
            //Koodi kun ehto täyttyy
            printf(":P");
            break;

        default:
            //Koodi jos mikään muu tapauksista ei tapahdu
            printf("DDDD");
            break;
    }



    if (alkuperainen_luku > 9999 && alkuperainen_luku < 100000){
        if(luku1 == luku5 && luku2 == luku4){
            printf("Luku %d on palindromi",alkuperainen_luku);
        }
        else{
            printf("Luku %d ei ole palindromi", alkuperainen_luku);
        }
    }
    else{
        printf("Luku ei ollut viisi numeroinen");
    }


}