#include<stdio.h>

float calcSI(double p, double n, double r);

int main(){
    double p, r, n, si ;

     printf("Enter principal amount:");
     scanf("%lf",&p);
     printf("Enter rate of interest:");
     scanf("%lf",&r);
     printf("Enter time in years:");
     scanf("%lf",&n);

     si = calcSI(p, n, r);

     printf("Simple Interest: %.2lf",si);
}

float calcSI(double p, double n, double r){
    int si;
     si = (p * n * r) / 100;
    return si;
}