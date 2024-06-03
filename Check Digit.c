#include<stdio.h>
#include<ctype.h>

void checkDigit(int num);

int main(){
    int num;
    printf("Enter any character:");
    scanf("%d",&num);

    checkDigit(num);
}

void checkDigit(int num){
    if(isdigit(num)){
        printf("%d is a digit",num);
    }
}