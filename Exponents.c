#include<stdio.h>
#include<math.h>

int calcExpo(int n, int r);

int main(){
    int n, r, expo;

     printf("Enter n:");
     scanf("%d",&n);
     printf("Enter r:");
     scanf("%d",&r);

     expo = calcExpo(n, r);

     printf("%d",expo);
}

int calcExpo(int n, int r){
    int expo;
    expo = pow(n, r);
    return expo;
}