#include<stdio.h>

void checkOddEven(int num);    // function and function variable declaration

int main(){
    int num;

     printf("Enter a number:");
     scanf("%d",&num);

    checkOddEven(num);
}

void checkOddEven(int num){

    if(num % 2 ==0){
        printf("%d is even",num);
    }
    else{
        printf("%d is odd",num);
    }
}