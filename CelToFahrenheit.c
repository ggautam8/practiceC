#include<stdio.h>

float convertTemp(double cel);

int main(){
    double cel, fahr;
     printf("Enter temperature in celsius:");
     scanf("%lf",&cel);

     fahr = convertTemp(cel);

     printf("Temperature in Fahrenheit: %.2lf",fahr);
     return 0;
}

float convertTemp(double cel){
    double fahr;
     fahr = (cel *9/5) + 32 ;
    return fahr;
}