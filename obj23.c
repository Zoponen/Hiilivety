    #include <stdio.h>
    #include <math.h>

    double laskeParkkiMaksu(double tunnit){
        double velo =0;
        if (tunnit <= 3){
            velo = 2;
        }
        else if (3 < tunnit){
            velo = 2 + (tunnit-3)*0.5;
        }
        if(velo >= 10*ceil(tunnit/24)){
            velo = 10*ceil(tunnit/24);
        }
        return velo;
    }

    int main(void){
        double tunti[4];
        double koktunti=0;
        double kokmaksu =0;
        for (int i =1; i <= 3; i++){
            printf("\nAsiakkaan pysäkointiaika >");
            scanf("%lf",&tunti[i]);
        }
        printf("\n%11s%12s%12s","Asiakas","Tunnit","Veloitus");
        for (int i=1; i <=3; i++){
            koktunti += tunti[i];
            kokmaksu += laskeParkkiMaksu(tunti[i]);
            printf("\n%12d%12.2lf%12.2lf",i,tunti[i],laskeParkkiMaksu(tunti[i]));
        }
        printf("\n%12s%12.2lf%12.2lf","YHTEENSA",koktunti,kokmaksu);
        return 0;
    }