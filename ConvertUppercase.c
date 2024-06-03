#include<stdio.h>
#include<ctype.h>

void convUppercase(char c);

int main(){
   char c;
   printf("Enter any letter:");
   scanf("%c",&c);
   convUppercase(c);
}

void convUppercase(char c){
    printf("Uppercase of %c : %c",c, toupper(c));
}