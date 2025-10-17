#include <stdio.h>

double summaaja(int luku){ // summataan luvut
    int summa = luku;
    if(luku == 0){
        return 1;
    }
    else{
        return summa*summaaja(luku-1);
    }
}

int main()
{
    // Tulosmuuttuja e
    double e =1.0;            
   
    // Laske ja tulosta muuttujat omille riveilleen
    for(int i =1; i<=10;i++){
        printf("\n%lf", e);
        e += 1/summaaja(i);
    }
    
    // Ohjelman lopussa yksi tyhjä rivi    
    printf("\n");
    
    return 0;
}