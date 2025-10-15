#include <stdio.h>
#include <stdlib.h>

int summaa(int testi){
    int summa = 0;
    while(testi != 0){
        summa += testi%10;
        testi /= 10;
    }
    return  summa;
}

int parillinen_ja_isompi_kuin_vastaus_kaikkeen(int testi){
    if(testi%2==0 && testi >=42){
        printf("\nTulos %d on parillinen ja isompi kuin 42",testi);
    }
    else{
        printf("\nTulos %d ei ole parillinen ja isompi kuin 42",testi);
    }
    return 0;
}

int onko_erityisluku(int testi){
    if(testi == 6 || testi == 9){
        printf("\nTulos %d on numero 6 tai 9",testi);
    }
    else{
        printf("\nTulos %d ei ole numero 6 tai 9",testi);
    }
    return 0;
}

int ei_jaollinen_kolmella(int testi){
    if(testi%3==0){
        printf("\nTulos %d ei ole ei-jaollinen luvulla 3",testi);
    }
    else{
        printf("\nTulos %d ei ole jaollinen luvulla 3",testi);
    }
    return 0;
}


int main(void) {

    int luku=-1;
    int tulos=-1;

    printf("\nAnna positiivinen kokonaisluku: ");
    scanf("%d", &luku);

    tulos=summaa(luku);
    printf("\nAnnetun luvun numeroiden summa on: %d", tulos);

    parillinen_ja_isompi_kuin_vastaus_kaikkeen(tulos);

    onko_erityisluku(tulos);

    ei_jaollinen_kolmella(tulos);

  return 0;
}

