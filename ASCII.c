#include<stdio.h>

void printASCII(char ch);

int main(){
    char ch;

    printf("Enter any character:");
    scanf("%c",&ch);

   printASCII(ch);
}

void printASCII(char ch){
    printf("ASCII value of %c is %d", ch, ch);
}