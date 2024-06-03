#include<stdio.h>

float floatSum(float sum);

int main(){
     float sum  = floatSum(sum);

     printf("Sum of the above two integers: %.2f",sum);

    return 0;
}

float floatSum(float sum){
    float num1, num2;
    printf("Input the first integer:");
    scanf("%f",&num1);
    printf("Input the second integer:");
    scanf("%f",&num2);

    sum = num1 + num2;

    return sum;
}

