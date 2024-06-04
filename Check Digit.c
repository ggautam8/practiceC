#include<stdio.h>
#include<ctype.h>

void checkDigit(char c);

int main(){
    char c;
    printf("Enter any character:");
    scanf("%c",&c);

    checkDigit(c);
}

void checkDigit(char c){
    if(c >= 48 && c <= 57){
        printf("%c is a digit",c);
    }
    else{
        printf("%c is not a digit",c);
    }
}