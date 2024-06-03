#include<stdio.h>

void swapNum(int a, int b);

int main(){
    int a, b;
     printf("Enter variable a:");
     scanf("%d",&a);
     printf("Enter variable b:");
     scanf("%d",&b);

     swapNum(a,b);
}

void swapNum(int a, int b){
    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nValue of a: %d",a);
    printf("\nValue of b: %d",b);
}