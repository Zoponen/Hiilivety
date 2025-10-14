#include    <stdio.h>

int sekunninmuuttaja(int tunnit, int minuutit, int sekunnit){
    return(tunnit*3600+minuutit*60+sekunnit);
}


int main(void){
    int ekaaika[3]={};
    int tokaaika[3]={};
    int aikaeero[3]={};
    int aikaero;

    for(int i =0; i <3;i++){
        printf("\nAnna eka aika:");
        scanf("%d",&ekaaika[i]);
    }
    for(int i =0; i <3;i++){
        printf("\nAnna toka aika:");
        scanf("%d",&tokaaika[i]);
    }
    if(sekunninmuuttaja(ekaaika[0],ekaaika[1],ekaaika[2])>sekunninmuuttaja(tokaaika[0],tokaaika[1],tokaaika[2])){
        aikaero = sekunninmuuttaja(ekaaika[0],ekaaika[1],ekaaika[2])-sekunninmuuttaja(tokaaika[0],tokaaika[1],tokaaika[2]);
        for(int i =2; i >-1;i--){
            if(tokaaika[i]>ekaaika[i]){
                ekaaika[i-1]--;
                ekaaika[i] +=60;
            }
            aikaeero[i]=ekaaika[i]-tokaaika[i];
        }
    }
    else{
        aikaero = sekunninmuuttaja(tokaaika[0],tokaaika[1],tokaaika[2])-sekunninmuuttaja(ekaaika[0],ekaaika[1],ekaaika[2]);
        for(int i=2; i>-1;i--){
            if(ekaaika[i]>tokaaika[i]){
                tokaaika[i-1]--;
                tokaaika[i] +=60;
            }
            aikaeero[i]=tokaaika[i]-ekaaika[i];
        }
    }

    printf("\nAikaero on: %d sekuntia",aikaero);
    printf("\nAika on %d tuntia %d minuuttia %d sekuntia",aikaeero[0],aikaeero[1],aikaeero[2]);
    return 0;
}