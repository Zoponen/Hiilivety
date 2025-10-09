#include <stdio.h>
#include <math.h>

double laskeHypotenuusa(double s1, double s2){
    return sqrt(pow(s1,2)+pow(s2,2));
}

int main() {
    
    double sivu1 = 0.0;
    double sivu2 = 0.0;
    double hypotenuusa = 0.0;
    
    printf("\nAnna ensimmäinen sivu: ");
    scanf("%lf", &sivu1);
    
    printf("\nAnna toinen sivu: ");
    scanf("%lf", &sivu2);
    
    printf("%lf",laskeHypotenuusa(sivu1,sivu2));
    return 0;
}
