#include<stdio.h>

void findLargest(double num1, double num2, double num3);

int main(){
    double a, b, c, largest;

     printf("Enter 3 numbers:");
     scanf("%lf%lf%lf",&a, &b, &c);

     findLargest(a, b, c);
}

void findLargest(double a, double b, double c){
    (a > b)? (a > c)? printf("%.2lf is laregest",a) : printf("%.2lf is largest",c) : (b > c)? printf("%.2lf is largest",b) : printf("%.2lf is largest",c) ;
}